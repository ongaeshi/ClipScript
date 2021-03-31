require 'clip_object'
require 'drawer'

module Clip
  class TextureClip < ClipObject
    attr_accessor :texture, :x, :y, :color

    def initialize(parent, texture, x, y, opt = {})
      super(parent)
      @texture = texture
      @x = x
      @y = y
      @color = opt[:color] || [255, 255, 255, 255]
    end

    def draw
      Drawer.texture(@texture, @x, @y, @color)
    end
  end

  class ClipObject
    def texture(*args)
      TextureClip.new(self, *args)
    end
  end
end