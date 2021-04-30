require 'clip_object'
require 'drawer'

module Clip
  class GifClip < ClipObject
    def initialize(parent, reader, opt = {})
      super(parent)
      @reader = reader  # Need gc protection for images
      @textures = @reader.textures
      @i = 0

      set_script do
        loop do
          @i += 1
          wait_delta
        end
      end
    end

    def draw
      Drawer.texture(@textures[@i % @textures.count], 0, 0)
    end

    def play
    end
  end

  class ClipObject
    def gif(*args)
      GifClip.new(self, *args)
    end
  end
end