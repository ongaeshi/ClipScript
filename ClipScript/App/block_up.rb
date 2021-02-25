# Graphics.set_background(Palette::Steelblue)

class BlockUp < ClipObject
  WIDTH = 40
  HEIGHT = 40

  def initialize(parent, x, y)
    super(parent)

    @x = x
    @y = y
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
    x2 = @x + WIDTH
    y2 = @y + HEIGHT

    Line.new(x1, y1, x2, y1).draw
    Line.new(x2, y1, x2, y2).draw
    Line.new(x2, y2, x1, y2).draw
    Line.new(x1, y2, x1, y1).draw
  end
end

class ClipObject
  def block_up(x, y)
    BlockUp.new(self, x, y)
  end
end

script do |c|
  x = 0
  loop do
    c.block_up(x, 400)
    x += 50
    c.wait 0.1
  end
end

run