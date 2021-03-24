require 'clip_object'

module Clip
  class CircleClip < ClipObject
    attr_accessor :x, :y, :r, :color

    def initialize(parent, x, y, r, opt = {})
      super(parent)
      @x = x
      @y = y
      @r = r
      @color = opt[:color] || Palette::White
    end

    def draw
      Circle.new(@x, @y, @r).draw(@color)
    end
  end

  class ClipObject
    def circle(*args)
      CircleClip.new(self, *args)
    end
  end
end