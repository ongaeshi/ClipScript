require "clip_manager"

module Clip
  def script(&block)
    $clip_manager.script(&block)
  end
  module_function :script

  COLORS = {
    "navy" => "#001F3F",
    "blue" => "#0074D9",
    "aqua" => "#7FDBFF",
    "teal" => "#39CCCC",
    "olive" => "#3D9970",
    "green" => "#2ECC40",
    "lime" => "#01FF70",
    "yellow" => "#FFDC00",
    "orange" => "#FF851B",
    "red" => "#FF4136",
    "fuchsia" => "#F012BE",
    "purple" => "#B10DC9",
    "maroon" => "#85144B",
    "white" => "#FFFFFF",
    "silver" => "#DDDDDD",
    "gray" => "#AAAAAA",
    "black" => "#111111"
  }

  class App
    def self.time
      $clip_manager.time
    end

    def self.width
      $clip_manager.width
    end

    def self.height
      $clip_manager.height
    end

    def self.window_size(x, y)
      $clip_manager.window_size(x, y)
    end

    def self.start_time=(time)
      $clip_manager.start_time = time
    end

    def self.is_stop=(flag)
      $clip_manager.is_stop = flag
    end

    def self.end_time=(time)
      $clip_manager.end_time = time
    end

    def self.run(&block)
      $clip_manager.run(&block)
    end

    def self.reset
      $clip_manager.reset
    end
  end
end
