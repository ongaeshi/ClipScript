Graphics.set_background(Palette::Steelblue)

script do
  l1 = line(100, 100, 200, 100)
  wait 20
  l2 = line(200, 100, 200, 200)
  wait 20
  l3 = line(200, 200, 100, 200)
  wait 20
  l4 = line(100, 200, 100, 100)

  wait 60

  (1..20).each do
    l1.x1 += 1
    l2.x0 += 1
    wait 1
  end

  (1..20).each do
    l2.y1 += 1
    l3.y0 += 1
    wait 1
  end

  (1..20).each do
    l3.x1 += 1
    l4.x0 += 1
    wait 1
  end

  (1..20).each do
    l4.y1 += 1
    l1.y0 += 1
    wait 1
  end

  wait 60
end

run