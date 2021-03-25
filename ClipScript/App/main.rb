require 'clip'

Graphics.set_background(Palette::Steelblue)

script do |c|
  p to_color("red")
  p to_color("#ffffff")
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