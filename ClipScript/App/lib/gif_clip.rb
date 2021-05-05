require 'clip_object'
require 'drawer'

module Clip
  class GifClip < ClipObject
    attr_accessor :current_time, :playback_rate

    def initialize(parent, reader, opt = {})
      super(parent)
      @reader = reader  # Need gc protection for images
      @textures = @reader.textures
      @current_time = 0
      @playback_rate = 1
      @is_play = true

      set_script do
        loop do
          if @is_play
            @current_time += min_delta_time * @playback_rate
          end
          wait_delta
        end
      end
    end

    def draw
      i = @reader.index(@current_time)
      Drawer.texture(@textures[i], 0, 0)
    end

    def play = @is_play = true
    def stop = @is_play = false
  end

  class ClipObject
    def gif(*args)
      GifClip.new(self, *args)
    end
  end
end