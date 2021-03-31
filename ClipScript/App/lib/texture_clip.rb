require 'clip_object'
require 'drawer'

module Clip
  class TextureClip < ClipObject
    attr_accessor :texture, :x, :y, :color, :flip, :mirror, :region

    def initialize(parent, texture, x, y, opt = {})
      super(parent)
      @texture = texture
      @x = x
      @y = y
      @color = opt[:color] || [255, 255, 255, 255]
      @flip = opt[:flip] || false
      @mirror = opt[:mirror] || false
      @region = opt[:region] || nil
    end

    def draw
      texregion = @texture
      texregion = texregion[*@region] if @region
      texregion = texregion.flip if @flip
      texregion = texregion.mirror if @mirror
      Drawer.texture(texregion, @x, @y, @color)
    end
  end

  class ClipObject
    def texture(*args)
      TextureClip.new(self, *args)
    end
  end
end