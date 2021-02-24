class ClipManager
  attr_reader :root

  def initialize
    @root = RootClip.new
    @time = 0.0
    @end_time = 4.0
    @is_stop = false
  end

  def script(&block)
    @root.add_clip(BlockClip.new(&block))
  end

  def run
    while System.update do
      @time += 0.016 unless @is_stop # TODO: Deltatime

      if @time > @end_time
        @time -= @end_time 
        @clips = []
      end
      
      @scripts.each do |e| 
        e.resume if e.alive?
      end

      @clips.each do |e|
        e.run_script
        e.update
        e.draw
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
