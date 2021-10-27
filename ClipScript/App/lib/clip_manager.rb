require "clip_object"

module Clip
  class ClipManager
    attr_reader :root, :time, :width, :height
    attr_accessor :start_time, :end_time, :is_stop, :is_loop, :is_hidden, :min_delta_rate

    def initialize(start_time = nil, is_stop = nil, is_loop = nil)
      @root = RootClip.new
      @time = 0.0
      @start_time = start_time || 0.0
      @end_time = 4.0
      @is_stop = is_stop || false
      @is_loop = is_loop.nil? ? true : is_loop
      @is_hidden = false
      @width = 800
      @height = 600
      @min_delta_rate = 1
    end

    def window_size(x, y)
      @width = x
      @height = y
      window_resize
    end

    def window_resize
      Window.resize(@width, @height + y_add_offset)
    end

    def y_add_offset
      if @is_hidden
        0
      elsif @width > 400
        60
      else
        120 # MrbMisc.cpp#UiHeight
      end
    end

    def script(&block)
      BlockClip.new(root, &block)
    end

    def reset
      @time = 0

      root.children.each do |c|
        c.reset
      end
    end

    def run(&block)
      # Calculate first delta time
      delta_time = if @start_time > 0 || @is_stop
        @start_time
      else
        min_delta_time
      end

      # Turn off is_first_update flag
      root.update(0)

      while System.update
        block.call(self) if block

        # Divide into small time and execute update
        t = delta_time == 0 ? 0 : min_delta_time
        total_delta_time = 0

        loop do
          @time += t
          total_delta_time += t
          root.update(t)
          break if total_delta_time >= delta_time
        end

        root.draw

        if @time > @end_time && @is_loop
          reset
        end

        prev_time = @time
        prev_hidden = @is_hidden

        @time, @is_stop, @is_loop, @is_hidden, @is_slow = timeline_ui(@time, @end_time, @is_stop, @is_loop, @is_hidden, @is_slow)

        @min_delta_rate = @is_slow ? 0.2 : 1

        if prev_hidden != @is_hidden
          window_resize
        end

        if @is_stop
          if @time < prev_time
            delta_time = @time
            reset
          else
            delta_time = @time - prev_time
            @time -= delta_time
          end
        else
          delta_time = min_delta_time
        end
      end
    end

    MIN_DELTA_BASE = (1.0 / 60) # Assume 60fps

    def min_delta_time
      MIN_DELTA_BASE * @min_delta_rate
    end
  end

  $clip_manager = ClipManager.new(
    Object.const_defined?("CLIP_MANAGER_START_TIME") ? CLIP_MANAGER_START_TIME : nil,
    Object.const_defined?("CLIP_MANAGER_IS_STOP") ? CLIP_MANAGER_IS_STOP : nil,
    Object.const_defined?("CLIP_MANAGER_IS_LOOP") ? CLIP_MANAGER_IS_LOOP : nil
  )
end
