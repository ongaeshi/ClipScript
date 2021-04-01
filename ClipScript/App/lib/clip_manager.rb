require 'clip_object'

module Clip
  class ClipManager
    attr_reader :root
    attr_accessor :start_time, :end_time

    def initialize
      @root = RootClip.new
      @time = 0.0
      @start_time = 0.0
      @end_time = 4.0
      @is_stop = false
    end

    def script(&block)
      BlockClip.new(root, &block)
    end

    def run
      delta_time = @start_time + 0.016 # TODO: get_delta_time

      while System.update do
        @time += delta_time

        root.update(delta_time)
        root.draw

        if @time > @end_time
          @time = 0

          root.children.each do |c|
            c.reset
          end
        end

        prev_time = @time

        @time, @is_stop = timeline_ui(@time, @end_time, @is_stop)
      
        unless @is_stop
          delta_time = 0.016
        else
          if @time < prev_time
            root.children.each do |c|
              c.reset
            end

            delta_time = @time
            @time = 0.0
          else
            delta_time = @time - prev_time
            @time -= delta_time
          end
        end
      end
    end  
  end

  $clip_manager = ClipManager.new
end