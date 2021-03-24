require 'clip_object'

module Clip
  class LineClip < ClipObject
    attr_accessor :x0, :y0, :x1, :y1, :thickness, :color

    def initialize(parent, x0, y0, x1, y1, opt = {})
      super(parent)
      @x0 = x0
      @y0 = y0
      @x1 = x1
      @y1 = y1
      @thickness = opt[:thickness] || 1
      @color = opt[:color] || Palette::White
    end

    def draw
      Line.new(@x0, @y0, @x1, @y1).draw(@thickness, @color)
    end
  end

  class ClipObject
    def line(*args)
      LineClip.new(self, *args)
    end
  end
end