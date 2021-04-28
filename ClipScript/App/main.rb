require 'clip'

# App.start_time = 4.5
App.end_time = 8

script do |c|
  hue = 0
  loop do
    # Drawer.background(HSV.new(hue, 0.6, 1.0))
    # hue += 2
    Drawer.background("gray")
    c.wait_delta
  end
end

script do |c|
  # p Drawer.to_color("red")
  # p Drawer.to_color("#ffffff")
  # p Drawer.to_color(2)
  
  0.upto(16) do |e|
    c.circle(300, 300, 25, color: e)
    c.wait 0.1
  end

  t = 0.2
  
  c.circle(100, 100, 45, color: "navy", frame_color: "black", thickness: 2)
  c.wait t
  c.circle(200, 100, 45, color: "blue", frame_color: "black", thickness: 3)
  c.wait t
  c.circle(300, 100, 45, color: "aqua", frame_color: "black", thickness: 4)
  c.wait t
  c.circle(400, 100, 45, color: "teal", frame_color: "black", thickness: 5)
  c.wait t
  c.circle(500, 100, 45, color: "olive", frame_color: "black", thickness: 6)
  c.wait t
  c.circle(600, 100, 45, color: "green", frame_color: "black", thickness: 7)
  c.wait t
  c.circle(700, 100, 45, color: "lime", frame_color: "black", thickness: 8)
  c.wait t
  c.circle(100, 200, 45, color: "yellow", frame_color: "black", thickness: 9)
  c.wait t
  c.circle(200, 200, 45, color: "orange", frame_color: "black", thickness: 10)
  c.wait t
  c.circle(300, 200, 45, color: "red", frame_color: "black", thickness: 11)
  c.wait t
  c.circle(400, 200, 45, color: "fuchsia", frame_color: "black", thickness: 12)
  c.wait t
  c.circle(500, 200, 45, color: "purple", frame_color: "black", thickness: 13)
  c.wait t
  c.circle(600, 200, 45, color: "maroon", frame_color: "black", thickness: 14)
  c.wait t
  c.circle(700, 200, 45, color: "shilver", frame_color: "black", thickness: 15)
  c.wait t
  c.circle(100, 300, 45, color: "gray", frame_color: "black", thickness: 16)
  c.wait t
  c.circle(200, 300, 45, color: "block", frame_color: "black", thickness: 17)
  c.wait t
  cir = c.circle(300, 300, 45, color: "white", frame_color: "black", thickness: 18)
  c.wait t

  1.upto(17) do
    cir.thickness -= 1
    c.wait_delta
  end

  color = cir.frame_color
  cir.frame_color = nil
  c.wait t
  cir.color = nil
  cir.frame_color = color
end

script do |c|
  rad = 0.0
  h = 0

  circle = c.circle(400, 200, 10)

  loop do
    circle.x += 5 * Math::cos(rad)
    circle.y += 5 * Math::sin(rad)
    circle.r += 2 * Math::sin(rad)
    circle.color = HSV.new(h, 0.8, 0.8, 1)
    c.wait 0.016
    rad += Math::PI * 0.05
    h += 1
  end
end

script do |c|
  c.line(100, 100, 200, 100) => l1
  c.wait 0.3
  c.line(200, 100, 200, 200) => l2
  c.wait 0.3
  c.line(200, 200, 100, 200) => l3
  c.wait 0.3
  c.line(100, 200, 100, 100) => l4

  c.until_time 1.5

  (1..20).each do
    l1.x1 += 1
    l1.thickness += 0.1
    l2.x0 += 1
    l2.thickness += 0.1
    c.wait 0.01
  end

  c.until_time 2

  (1..20).each do
    l2.y1 += 1
    l2.thickness += 0.1
    l3.y0 += 1
    l3.thickness += 0.1
    c.wait 0.01
  end

  c.until_time 2.5

  (1..20).each do
    l3.x1 += 1
    l3.thickness += 0.1
    l4.x0 += 1
    l4.thickness += 0.1
    c.wait 0.01
  end

  c.until_time 3

  (1..20).each do
    l4.y1 += 1
    l4.thickness += 0.1
    l1.y0 += 1
    l1.thickness += 0.1
    c.wait 0.01
  end

  c.wait 100
end

script do |c|
  gif = GifReader.new("example/test.gif")
  p gif.duration
  p gif.delays
end


App.run