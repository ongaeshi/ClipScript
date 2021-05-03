require 'clip_object'
require 'drawer'

module Clip
  class GifClip < ClipObject
    def initialize(parent, reader, opt = {})
      super(parent)
      @reader = reader  # Need gc protection for images
      @textures = @reader.textures
      @i = 0
      @rate = 1

      set_script do
        loop do
          @i += 1 * @rate
          wait_delta
        end
      end
    end

    def draw
      Drawer.texture(@textures[@i % @textures.count], 0, 0)
    end

    def play = @rate = 1.0
    def stop = @rate = 0.0
  end

  class ClipObject
    def gif(*args)
      GifClip.new(self, *args)
    end
  end
end