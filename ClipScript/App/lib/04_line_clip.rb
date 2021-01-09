class LineClip < ClipObject
  def initialize(x, y, width, height, opt = {})
    @x = x
    @y = y
    @width = width
    @height = height
    @opt = opt
  end

  def draw
    Line.new(@x, @y, @width, @height).draw
  end
end