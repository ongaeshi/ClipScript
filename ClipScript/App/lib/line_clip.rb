require 'clip_object'

module Clip
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
end