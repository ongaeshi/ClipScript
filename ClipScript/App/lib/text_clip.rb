require 'clip_object'
require 'drawer'

module Clip
  class TextClip < ClipObject
    attr_accessor :font, :x, :y, :text, :offset, :length

    def initialize(parent, font, x, y, opt = {})
      super(parent)
      @font = font
      @x = x
      @y = y
      @text = opt[:text] || ""
      @color = opt[:color] || "black"
      @offset = opt[:offset]
      @length = opt[:length]
    end

    def draw
      Drawer.text(@font, @x, @y, @text, @color, @offset, @length)
    end
  end

  class ClipObject
    def text(*args)
      TextClip.new(self, *args)
    end
  end
end