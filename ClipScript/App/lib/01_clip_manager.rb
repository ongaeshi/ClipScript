class ClipManager
  def initialize
    @scripts = []
    @clips = []
    @time = 0.0
    @end_time = 1.0
    @is_stop = false
  end

  def script(&block)
    @scripts.push(Fiber.new { loop { block.call } })
  end

  def add_clip(clip)
    @clips.clip
  end
  
  def run
    while System.update do
      @time += 0.016 unless @is_stop # TODO: Deltatime
      @time -= @end_time if @time > @end_time
      
      @scripts.each do |e| 
        e.resume if e.alive?
      end

      @clips.each do |e|
        e.update
        e.draw
      end
  
      @time, @is_stop = timeline_ui(@time, @end_time, @is_stop)
    end
  end  

  def cls
  end
end