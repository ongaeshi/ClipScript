Graphics.set_background(Palette::Steelblue)

script do
  line(100, 100, 100, 0)
  wait 20
  line(200, 100, 0, 100)
  wait 20
  line(200, 200, -100, 0)
  wait 20
  line(100, 200, 0, -100)
  wait 60
end

run