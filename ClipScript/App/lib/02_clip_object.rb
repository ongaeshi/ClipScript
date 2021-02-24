class ClipObject
  attr_reader :parent
  attr_reader :children

  def initialize(parent)
    @parent = parent
    @parent.add_clip(self)
    @children = []
    @time = 0.0
  end

  def add_clip(clip)
    @children.add(clip)
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

  def update(delta_time)
    @children.each {|e| e.update(delta_time) }
    @time += delta_time # TODO: delta_time * @rate
    @fiber.resume if @fiber && @fiber.alive?
  end

  def draw
    @children.each {|e| e.draw }
  end

  def wait(sec)
    until_time(@time + sec)
  end

  def until_time(t)
    loop do
      break if @time >= t
      Fiber.yield
    end
  end

  def line(x1, y1, x2, y2)
    LineClip.new(self, x1, y1, x2, y2)
  end
end

class RootClip
  attr_reader :children
  
  def initialize
    @children = []
  end

  def add_clip(clip)
    @children.add(clip)
  end

  def update(delta_time)
    @children.each {|e| e.update(delta_time) }
  end

  def draw
    @children.each {|e| e.draw }
  end
end

