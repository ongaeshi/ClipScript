Graphics.set_background(Palette::Steelblue)

# script do
#   point = Point.new(1, 2)
#   vec = Vec2.new(1.5, 2.1)
#   p Point, point.x, point.y
#   wait 10
#   puts "#{Vec2}: (#{vec.x}, #{vec.y})"
#   wait 10
#   puts "random: #{random}, #{random(10)}, #{random(3, 4)}"
#   wait 10
#   puts "width: #{Window.width}, height: #{Window.height}"
#   wait 30

#   cls(Palette::Steelblue)
#   (1..60).each do
#     Line.new(100, 220, 300, 320).draw
#     Line.new(100, 320, 300, 420).draw(2)
#     Line.new(100, 420, 300, 520).draw(11, Palette::Green)
#     Line.new(200, 100, 300, 100).draw_arrow
#     Line.new(200, 150, 300, 150).draw_arrow(5)
#     Line.new(200, 200, 300, 200).draw_arrow(5, Vec2.new(30, 20))
#     Line.new(200, 250, 300, 250).draw_arrow(5, [50, 30], [255, 0, 128, 128])
#     wait
#   end
# end

# run

script do
  line(100, 220, 300, 320)
  wait 60
end

run