class ClipManager
  attr_reader :root

  def initialize
    @root = RootClip.new
    @time = 0.0
    @end_time = 4.0
    @is_stop = false
  end

  def script(&block)
    BlockClip.new(root, &block)
  end

  def run
    delta_time = 0.016 # TODO: get_delta_time

    while System.update do
      @time += delta_time

      root.update(delta_time)
      root.draw

      if @time > @end_time
        @time -= @end_time 

        root.children.each do |clip|
          clip.clear_clip
          clip.reset_script
        end
      end

      @time, @is_stop = timeline_ui(@time, @end_time, @is_stop)
    
      unless @is_stop
        delta_time = 0.016
      else
        root.children.each do |c|
          c.clear_clip
          c.reset_script
        end

        delta_time = @time
        @time = 0.0
      end
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
