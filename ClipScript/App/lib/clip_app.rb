require 'clip_manager'

def script(&block)
  $clip_manager.script(&block)
end

class App
  def self.end_time=(time)
    $clip_manager.end_time = time
  end

  def self.run
    $clip_manager.run
  end
end


