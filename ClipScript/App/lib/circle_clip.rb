require 'clip_object'

module Clip
  class CircleClip < ClipObject
    attr_accessor :x, :y, :r

    def initialize(parent, x, y, r)
      super(parent)
      @x = x
      @y = y
      @r = r
    end

    def draw
      Circle.new(@x, @y, @r).draw
    end
  end

  class ClipObject
    def circle(*args)
      CircleClip.new(self, *args)
    end
  end
end