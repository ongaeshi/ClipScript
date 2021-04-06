require 'clip'

# App.start_time = 13
# App.is_stop = true
App.end_time = 18

W = 2

script do |c|
  Drawer.background("white")
  windmill = Texture.new("example/windmill.png")
  font = Font.new(30)
  w = c.texture(windmill, 0, 0)
  t = c.text(font, 10, 330)

  t.text = "Normal"
  c.wait W

  t.text = "color = [128, 0, 0]"
  reset(w)
  w.color = [128, 0, 0]
  c.wait 1

  t.text = "color = [0, 255, 0]"
  reset(w)
  w.color = [0, 255, 0]
  c.wait 1

  color = [0, 128, 255]
  t.text = "color = #{color}"
  reset(w)
  w.color = color
  c.wait 1

  color = [255, 255, 255, 128]
  t.text = "color = #{color}"
  reset(w)
  w.color = color
  c.wait 1

  t.text = "flip = false"
  reset(w)
  w.flip = false
  c.wait 1

  t.text = "flip = true"
  reset(w)
  w.flip = true
  c.wait 1

  t.text = "mirror = false"
  reset(w)
  w.mirror = false
  c.wait 1

  t.text = "mirror = true"
  reset(w)
  w.mirror = true
  c.wait 1

  t.text = "region = nil"
  reset(w)
  w.region = nil
  c.wait 1

  region = [100, 100, 200, 200]
  t.text = "region = #{region}"
  reset(w)
  w.region = region
  c.wait 1

  region = [300, 200, 100, 100]
  t.text = "region = #{region}"
  reset(w)
  w.region = region
  c.wait 1

  scale_x, scale_y = 1, 1

  reset(w)
  t.text = "scale(#{scale_x}, #{scale_y})"
  w.scale(scale_x, scale_y)
  c.wait 0.75

  scale_x, scale_y = 0.8, 0.6

  reset(w)
  t.text = "scale(#{scale_x}, #{scale_y})"
  w.scale(scale_x, scale_y)
  c.wait 0.25

  scale_x, scale_y = 0.4, 0.3

  reset(w)
  t.text = "scale(#{scale_x}, #{scale_y})"
  w.scale(scale_x, scale_y)
  c.wait 1

  reset(w)
  rot_speed = 0.25
  rotate = 0

  loop do
    rotate += rot_speed

    if rotate >= 30
      t.text = "rotate(#{rotate})"
      rotate = 30
      w.rotate = 30
      break
    else
      t.text = "rotate(#{rotate})"
      w.rotate = rotate
    end
    c.wait_delta
  end
end

def reset(t)
  t.color = [255, 255, 255]
  t.flip = false
  t.mirror = false
  t.region = nil
  t.scale(1, 1)
end

App.run