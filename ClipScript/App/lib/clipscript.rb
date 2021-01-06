@@scripts = []
@@drawers = []
@@time = 0.0
@@end_time = 10.0
@@is_stop = false

def cls(c = Palette::Lightgrey)
  Graphics.set_background(c)
  clear
end

def script(&block)
  @@scripts.push(Fiber.new { loop { block.call } })
end

def draw(&block)
  @@drawers.push(block)
end

def run
  while System.update do
    @@scripts.each do |e| 
      e.resume if e.alive?
    end

    @@drawers.each do |e| 
      e.call
    end

    @@is_stop = timeline_ui(20, 500, @@time, @@end_time)
  end
end

def wait(wait = 1)
  1.upto(wait) do |e|
    yield e if block_given?
    Fiber.yield
  end
end
