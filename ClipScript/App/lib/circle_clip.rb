require 'clip_object'
require 'drawer'

module Clip
  class CircleClip < ClipObject
    attr_accessor :x, :y, :r, :color, :frame

    def initialize(parent, x, y, r, opt = {})
      super(parent)
      @x = x
      @y = y
      @r = r
      @color = opt[:color] || Palette::White
      @frame = opt[:frame]
    end

    def draw
      Drawer.circle(@x, @y, @r, @color, @frame)
    end
  end

  class ClipObject
    def circle(*args)
      CircleClip.new(self, *args)
    end
  end
end