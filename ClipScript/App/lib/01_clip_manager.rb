class ClipManager
  def initialize
    @scripts = []
    @clips = []
    @time = 0.0
    @end_time = 4.0
    @is_stop = false
  end

  def script(&block)
    @scripts.push(Fiber.new { loop { block.call } })
  end

  def add_clip(clip)
    @clips.push(clip)
  end
  
  def remove_clip(clip)
    @clips.delete(clip)
  end

  def clear_clip
    @clips = []
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
