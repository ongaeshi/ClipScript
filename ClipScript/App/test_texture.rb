require 'clip'

script do |c|
  Drawer.background("white")
  windmill = Texture.new("example/windmill.png")
  c.texture(windmill, 0, 0,)
end

App.run