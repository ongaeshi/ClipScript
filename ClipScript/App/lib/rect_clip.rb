require 'clip_object'
require 'drawer'

module Clip
  class RectClip < ClipObject
    attr_accessor :x, :y, :w, :h, :color

    def initialize(parent, x, y, w, h, opt = {})
      super(parent)
      @x = x
      @y = y
      @w = w
      @h = h
      @color = opt[:color] || "white"
    end

    def draw
      Drawer.rect(@x, @y, @w, @h, @color)
    end
  end

  class ClipObject
    def rect(*args)
      RectClip.new(self, *args)
    end
  end
end