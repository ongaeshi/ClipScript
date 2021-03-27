require 'clip'

App.end_time = 6

class CircleClip
  def draw
    Drawer.circle(@x, @y, @r, @color, @frame)
    Drawer.circle(@x, @y, @r, "navy", 2)
  end
end

script do |c|
  hue = 0
  loop do
    Drawer.background('gray')
    hue += 1
    c.wait 0.016
  end
end

script do |c|
  # p Drawer.to_color("red")
  # p Drawer.to_color("#ffffff")
  # p Drawer.to_color(2)
  
  0.upto(16) do |e|
    c.circle(50, 50, 45, color: e)
    c.wait 0.1
  end

  t = 0.2
  
  c.circle(100, 100, 45, color: "navy")
  c.wait t
  c.circle(200, 100, 45, color: "blue")
  c.wait t
  c.circle(300, 100, 45, color: "aqua")
  c.wait t
  c.circle(400, 100, 45, color: "teal")
  c.wait t
  c.circle(500, 100, 45, color: "olive")
  c.wait t
  c.circle(600, 100, 45, color: "green")
  c.wait t
  c.circle(700, 100, 45, color: "lime")
  c.wait t
  c.circle(100, 200, 45, color: "yellow")
  c.wait t
  c.circle(200, 200, 45, color: "orange")
  c.wait t
  c.circle(300, 200, 45, color: "red")
  c.wait t
  c.circle(400, 200, 45, color: "fuchsia")
  c.wait t
  c.circle(500, 200, 45, color: "purple")
  c.wait t
  c.circle(600, 200, 45, color: "maroon")
  c.wait t
  c.circle(700, 200, 45, color: "shilver")
  c.wait t
  c.circle(100, 300, 45, color: "gray")
  c.wait t
  c.circle(200, 300, 45, color: "block")
  c.wait t
  c.circle(300, 300, 45, color: "white")
  c.wait t
end

# script do |c|
#   rad = 0.0
#   h = 0

#   circle = c.circle(400, 200, 10)

#   loop do
#     circle.x += 5 * Math::cos(rad)
#     circle.y += 5 * Math::sin(rad)
#     circle.r += 2 * Math::sin(rad)
#     circle.color = HSV.new(h, 0.8, 0.8, 1)
#     c.wait 0.016
#     rad += Math::PI * 0.05
#     h += 1
#   end
# end

# script do |c|
#   c.line(100, 100, 200, 100) => l1
#   c.wait 0.3
#   c.line(200, 100, 200, 200) => l2
#   c.wait 0.3
#   c.line(200, 200, 100, 200) => l3
#   c.wait 0.3
#   c.line(100, 200, 100, 100) => l4

#   c.until_time 1.5

#   (1..20).each do
#     l1.x1 += 1
#     l1.thickness += 0.1
#     l2.x0 += 1
#     l2.thickness += 0.1
#     c.wait 0.01
#   end

#   c.until_time 2

#   (1..20).each do
#     l2.y1 += 1
#     l2.thickness += 0.1
#     l3.y0 += 1
#     l3.thickness += 0.1
#     c.wait 0.01
#   end

#   c.until_time 2.5

#   (1..20).each do
#     l3.x1 += 1
#     l3.thickness += 0.1
#     l4.x0 += 1
#     l4.thickness += 0.1
#     c.wait 0.01
#   end

#   c.until_time 3

#   (1..20).each do
#     l4.y1 += 1
#     l4.thickness += 0.1
#     l1.y0 += 1
#     l1.thickness += 0.1
#     c.wait 0.01
#   end

#   c.wait 100
# end

App.run