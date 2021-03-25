require 'clip_manager'

module Clip
  def script(&block)
    $clip_manager.script(&block)
  end
  module_function :script

  COLORS = {
    "red" => "#FF4136" 
  }

  def to_color(src)
    if src.is_a? String
      hex = COLORS[src] || src
      hex = hex[1..-1].to_i(16)
      [(hex >> 16) & 0xff, (hex >> 8) & 0xff, hex & 0xff]
    else
      src
    end
  end

  class App
    def self.end_time=(time)
      $clip_manager.end_time = time
    end

    def self.run
      $clip_manager.run
    end
  end
end

