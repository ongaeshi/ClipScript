Graphics.set_background(Palette::Steelblue)

script do |c|
  l1 = c.line(100, 100, 200, 100)
  c.wait 0.3
  l2 = c.line(200, 100, 200, 200)
  c.wait 0.3
  l3 = c.line(200, 200, 100, 200)
  c.wait 0.3
  l4 = c.line(100, 200, 100, 100)

  c.wait 1

  (1..20).each do
    l1.x1 += 1
    l2.x0 += 1
    c.wait 0.01
  end

  (1..20).each do
    l2.y1 += 1
    l3.y0 += 1
    c.wait 0.01
  end

  (1..20).each do
    l3.x1 += 1
    l4.x0 += 1
    c.wait 0.01
  end

  (1..20).each do
    l4.y1 += 1
    l1.y0 += 1
    c.wait 0.01
  end

  c.wait 1
end

run