class ClipManager
  attr_reader :root

  def initialize
    @root = RootClip.new
    @time = 0.0
    @end_time = 4.0
    @is_stop = false
  end

  def script(&block)
    root.add_clip(BlockClip.new(root, &block))
  end

  def run
    while System.update do
      delta_time = !@is_stop ? 0.016 : 0.0 # TODO: get_delta_time
      @time += delta_time

      root.update(delta_time)
      root.draw

      if @time > @end_time
        @time -= @end_time 
        # TODO: @root.reset_clip
      end
      
      @time, @is_stop = timeline_ui(@time, @end_time, @is_stop)
    end
  end  
end

$clip_manager = ClipManager.new

# Global functions

def script(&block)
  $clip_manager.script(&block)
end

def run
  $clip_manager.run
end
