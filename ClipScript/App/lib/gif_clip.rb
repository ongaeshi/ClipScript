require 'clip_object'
require 'drawer'

module Clip
  class GifClip < ClipObject
    attr_reader :rate

    def initialize(parent, reader, opt = {})
      super(parent)
      @reader = reader  # Need gc protection for images
      @textures = @reader.textures
      @gif_time = 0
      @play_rate = 1
      @rate = 1

      set_script do
        loop do
          @gif_time += min_delta_time * @play_rate
          wait_delta
        end
      end
    end

    def draw
      i = @reader.index(@gif_time)
      Drawer.texture(@textures[i], 0, 0)
    end

    def play = @play_rate = @rate
    def stop = @play_rate = 0.0

    def rate=(v)
      @play_rate = @rate = v
    end
  end

  class ClipObject
    def gif(*args)
      GifClip.new(self, *args)
    end
  end
end