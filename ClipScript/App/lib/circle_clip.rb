require "clip_object"
require "drawer"

module Clip
  class CircleClip < ClipObject
    attr_accessor :x, :y, :r, :color, :frame_color, :thickness

    # CircleClip.new(x, y, r)
    # CircleClip.new(x, y, r, color: "red")
    # CircleClip.new(x, y, r, frame_color: "blue")
    # CircleClip.new(x, y, r, frame_color: "blue", thickness: 5)
    # CircleClip.new(x, y, r, color: "red", frame_color: "blue")
    def initialize(parent, x, y, r, opt = {})
      super(parent)
      @x = x
      @y = y
      @r = r
      @color = opt[:color]
      @frame_color = opt[:frame_color]
      @thickness = opt[:thickness] || 1
    end

    def draw
      if @color.nil? && @frame_color.nil?
        Drawer.circle(@x, @y, @r, "white")
      else
        Drawer.circle(@x, @y, @r, @color) if @color
        Drawer.circle(@x, @y, @r, @frame_color, @thickness) if @frame_color
      end
    end
  end

  class ClipObject
    def circle(*args)
      CircleClip.new(self, *args)
    end
  end
end
