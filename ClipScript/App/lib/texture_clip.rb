require 'clip_object'
require 'drawer'

module Clip
  class TextureClip < ClipObject
    attr_accessor :texture, :x, :y, :color, :flip, :mirror, :region, :scale_x, :scale_y, :rotate

    def initialize(parent, texture, x, y, opt = {})
      super(parent)
      @texture = texture
      @x = x
      @y = y
      @color = opt[:color] || [255, 255, 255, 255]
      @flip = opt[:flip] || false
      @mirror = opt[:mirror] || false
      @region = opt[:region] || nil
      @scale_x = opt[:scale_x] || 1
      @scale_y = opt[:scale_y] || 1
      @rotate = opt[:rotate] || 0
    end

    def draw
      t = @texture

      # TextureRegion
      t = t[*@region] if @region
      t = t.flip if @flip
      t = t.mirror if @mirror
      t = t.scale(@scale_x, @scale_y)

      # TextureQuad
      t = t.rotate(Math::radians(@rotate)) if @rotate != 0

      Drawer.texture(t, @x, @y, @color)
    end

    def scale(x, y)
      @scale_x, @scale_y = x, y
    end
  end

  class ClipObject
    def texture(*args)
      TextureClip.new(self, *args)
    end
  end
end