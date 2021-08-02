require "clip_object"
require "drawer"

module Clip
  class TextClip < ClipObject
    attr_accessor :font, :x, :y, :text, :length

    def initialize(parent, font, x, y, opt = {})
      super(parent)
      @font = font
      @x = x
      @y = y
      @text = opt[:text] || ""
      @color = opt[:color] || "black"
      @length = opt[:length]
      @center = opt[:center] || false
    end

    def draw
      if @center
        Drawer.text_at(@font, @x, @y, @text, @color, @length)
      else
        Drawer.text(@font, @x, @y, @text, @color, @length)
      end
    end
  end

  class ClipObject
    def text(*args)
      TextClip.new(self, *args)
    end
  end
end
