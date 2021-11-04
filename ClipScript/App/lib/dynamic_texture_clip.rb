require "clip_object"

module Clip
  class DynamicTextureClip < ClipObject 
    attr_reader :image

    def initialize(parent, width, height, color)
      super(parent)
      @image = Image.new(width, height, color)
      @texture = DynamicTexture.new(image)
    end

    def image_to_texture
      @texture.fill(@image)
    end

    def draw
      @texture.draw
    end
  end

  class ClipObject
    def dynamic_texture(*args)
      DynamicTextureClip.new(self, *args)
    end
  end
end
