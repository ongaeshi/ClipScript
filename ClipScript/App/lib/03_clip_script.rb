# Global functions

def script(&block)
  $clip_manager.script(&block)
end

def run
  $clip_manager.run
end

def wait(wait = 1)
  1.upto(wait) do |e| # TODO: See $clip_manager.time
    Fiber.yield
  end
end

def cls
  $clip_manager.clear_clip
end

def line(x, y, width, height, opt = {})
  LineClip.new(x, y, width, height, opt)
end
