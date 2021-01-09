class ClipObject
  def initialize
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
