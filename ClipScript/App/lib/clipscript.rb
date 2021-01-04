@@scripts = []
@@drawers = []

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
  end
end

def wait(wait = 1)
  1.upto(wait) do |e|
    yield e if block_given?
    Fiber.yield
  end
end
