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

  def clear_clip
    @children = []
  end

  def set_script(&block)
    @block = block
    reset_script
  end

  def reset_script
    @time = @target_time = 0.0
    @fiber = Fiber.new { @block.call(self) } if @block
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

  def until_time(t)
    @target_time = t
    loop do
      break if @time >= @target_time
      Fiber.yield
    end
  end
end

class BlockClip < ClipObject
  def initialize(parent, &block)
    super(parent)
    set_script(&block)
  end
end

class LineClip < ClipObject
  attr_accessor :x0, :y0, :x1, :y1

  def initialize(parent, x0, y0, x1, y1, opt = {})
    super(parent)
    @x0 = x0
    @y0 = y0
    @x1 = x1
    @y1 = y1
    @opt = opt
  end

  def draw
    Line.new(@x0, @y0, @x1, @y1).draw
  end
end

class ClipObject
  def line(x1, y1, x2, y2)
    LineClip.new(self, x1, y1, x2, y2)
  end
end
