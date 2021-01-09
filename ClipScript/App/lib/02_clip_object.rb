class ClipObject
  def initialize
    $clip_manager.add_clip(self)
    @fiber = Fiber.new { script }
  end

  def run_script
    @fiber.resume if @fiber.alive?
  end

  def dispose
    $clip_manager.remove_clip(@fiber)
  end

  def script
  end

  def update
  end

  def draw
  end

end
