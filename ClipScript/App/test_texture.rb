require 'clip'

script do |c|
  Drawer.background("white")
  texture = Texture.new("example/windmill.png")

  loop do
    Drawer.texture(texture, 100, 100)
    c.wait 0.016
  end
end

App.run