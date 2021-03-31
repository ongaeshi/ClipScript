require 'clip'

App.end_time = 14

W = 2

script do |c|
  Drawer.background("white")
  windmill = Texture.new("example/windmill.png")
  font = Font.new(30)
  w = c.texture(windmill, 0, 0)
  t = c.text(font, 10, 330)

  t.text = "Normal"
  c.wait W

  t.text = "color = [128, 128, 0]"
  reset(w)
  w.color = [128, 128, 0]
  c.wait W

  t.text = "flip = true"
  reset(w)
  w.flip = true
  c.wait W

  t.text = "mirror = true"
  reset(w)
  w.mirror = true
  c.wait W

  t.text = "region = [300, 200, 100, 100]"
  reset(w)
  w.region = [300, 200, 100, 100]
  c.wait W

  t.text = "scale(0.5, 0.3)"
  reset(w)
  w.scale(0.5, 0.3)
  c.wait W

  t.text = "rotate(30)"
  reset(w)
  w.rotate = -30
  c.wait W
end

def reset(t)
  t.color = [255, 255, 255]
  t.flip = false
  t.mirror = false
  t.region = nil
  t.scale(1, 1)
end

App.run