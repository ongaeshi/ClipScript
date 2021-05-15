module Clip
  class RootClip
    attr_reader :children
    attr_reader :time, :target_time
    
    def initialize
      @children = []
      @time = @target_time = 0
    end

    def add_clip(clip)
      @children.push(clip)
    end

    def update(delta_time)
      @time += delta_time
      @children.each {|e| e.update(delta_time) }
    end

    def draw
      @children.each {|e| e.draw }
    end
  end

  class ClipObject
    attr_reader :parent, :children
    attr_reader :time, :target_time

    def initialize(parent)
      @parent = parent
      @parent.add_clip(self)
      @children = []
      @time = parent.time - parent.target_time
      @target_time = 0.0
      @is_first_updated = false
    end

    def add_clip(clip)
      @children.push(clip)
    end

    def reset
      clear_clip
      reset_script
      reset_time
    end

    def clear_clip
      @children = []
    end

    def set_script(&block)
      @block = block
      reset_script
    end

    def reset_script
      @fiber = Fiber.new { @block.call(self) } if @block
    end

    def reset_time
      @time = @target_time = 0.0
    end

    def update(delta_time)
      if @is_first_updated
        @time += delta_time # TODO: delta_time * @rate
      else
        @is_first_updated = true
      end

      @fiber.resume if @fiber && @fiber.alive?

      @children.each {|e| e.update(delta_time) }
    end

    def draw
      @children.each {|e| e.draw }
    end

    def wait(sec)
      until_time(@target_time + sec)
    end

    def wait_delta = wait(min_delta_time)

    def until_time(t)
      @target_time = t
      loop do
        break if @time >= @target_time
        Fiber.yield
      end
    end

    def fiber_end? = @fiber && !@fiber.alive?
  end

  class BlockClip < ClipObject
    def initialize(parent, &block)
      super(parent)
      set_script(&block)
    end

    def scene_script(&block)
      scene = BlockClip.new(self, &block)

      loop do
        break if scene.fiber_end?
        wait_delta
      end

      @children.delete scene
    end
  end
end