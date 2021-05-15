require 'clip_object'

module Clip
  class BlockClip < ClipObject
    def initialize(parent, &block)
      super(parent)
      set_script(&block)
    end

    def scene_script(&block)
      scene = BlockClip.new(self, &block)

      loop do
        break if scene.fiber_end?
        wait_delta
      end

      delete_clip(scene)
    end
  end
end