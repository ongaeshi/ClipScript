require 'clip'

class BlockUp < ClipObject
  def initialize(parent, x, y, width = 40, height = 40)
    super(parent)

    @x = x
    @y = y
    @width = width
    @height = height
    @speed = 0.1

    set_script do
      loop do
        @y -= @speed
        @speed += 0.3
        @speed *= -1 if @y <= 0
        wait 0.016
      end
    end
  end

  def draw
    x1 = @x
    y1 = @y
    x2 = @x + @width
    y2 = @y + @height

    Line.new(x1, y1, x2, y1).draw
    Line.new(x2, y1, x2, y2).draw
    Line.new(x2, y2, x1, y2).draw
    Line.new(x1, y2, x1, y1).draw
  end
end

class ClipObject
  def block_up(*args)
    BlockUp.new(self, *args)
  end
end

script do |c|
  x = 0
  w = 40
  loop do
    c.block_up(x, 400, w, w)
    x += 50
    w -= 2
    c.wait 0.1
  end
end

App.end_time = 3
App.run