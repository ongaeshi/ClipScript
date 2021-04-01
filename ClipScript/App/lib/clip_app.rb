require 'clip_manager'

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
    "black" => "#111111",
  }

  class App
    def self.start_time=(time)
      $clip_manager.start_time = time
    end

    def self.end_time=(time)
      $clip_manager.end_time = time
    end

    def self.run
      $clip_manager.run
    end
  end
end

