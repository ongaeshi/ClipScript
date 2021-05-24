require 'clip_object'
require 'drawer'

module Clip
  class GifClip < ClipObject
    attr_accessor :current_time, :playback_rate
    attr_accessor :x, :y, :scale_x, :scale_y

    def initialize(parent, reader, opt = {})
      super(parent)
      @reader = reader  # Need gc protection for images
      @textures = @reader.textures
      @current_time = 0
      @playback_rate = 1
      @is_play = true
      @x = opt[:x] || 0
      @y = opt[:y] || 0
      @scale_x = opt[:scale_x] || 1
      @scale_y = opt[:scale_y] || 1

      set_script do
        loop do
          if @is_play
            @current_time += min_delta_time * @playback_rate
          end
          wait_delta
        end
      end
    end

    def current_texture
      i = @reader.index(@current_time)
      @textures[i]
    end

    def draw
      t = current_texture
      t = t.scale(@scale_x, @scale_y)
      Drawer.texture(t, @x, @y)
    end

    def play = @is_play = true
    def stop = @is_play = false

    def scale(x, y)
      @scale_x, @scale_y = x, y
    end

    def width = current_texture.width
    def height = current_texture.height

    def width=(value)
      rate = value / current_texture.width 
      scale(rate, rate)
    end

    def height=(value)
      rate = value / current_texture.height
      scale(rate, rate)
    end

    def duration = @reader.duration
  end

  class ClipObject
    def gif(*args)
      GifClip.new(self, *args)
    end
  end
end