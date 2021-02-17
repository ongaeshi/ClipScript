class LineClip < ClipObject
  attr_reader :x0, :y0, :x1, :y1
  
  def initialize(x0, y0, x1, y1, opt = {})
    super()
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