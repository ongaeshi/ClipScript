Graphics.set_background(Palette::Steelblue)

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
    l2.x0 += 1
    c.wait 0.01
  end

  c.until_time 2

  (1..20).each do
    l2.y1 += 1
    l3.y0 += 1
    c.wait 0.01
  end

  c.until_time 2.5

  (1..20).each do
    l3.x1 += 1
    l4.x0 += 1
    c.wait 0.01
  end

  c.until_time 3

  (1..20).each do
    l4.y1 += 1
    l1.y0 += 1
    c.wait 0.01
  end

  c.wait 100
end

App.run