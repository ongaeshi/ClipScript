require 'clip_manager'

module Clip
  def script(&block)
    $clip_manager.script(&block)
  end
  module_function :script

  class App
    def self.end_time=(time)
      $clip_manager.end_time = time
    end

    def self.run
      $clip_manager.run
    end
  end
end

