require 'clip'

script do |c|
  Drawer.background("white")
  windmill = Texture.new("example/windmill.png")
  font = Font.new(30)
  t = c.text(font, 0, 330)
  w = c.texture(windmill, 0, 0)

  t.text = "Normal"
  c.until_time 1

  t.text = "color = [128, 128, 0]"
  w.color = [128, 128, 0]
  c.until_time 2
end

App.run