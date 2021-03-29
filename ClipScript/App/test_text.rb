require 'clip'

App.end_time = 5

script do |c|
  Drawer.background("white")

  font = Font.new(50)
  t = c.text(font, 0, 0, color: 3)

  t.text += "こ"
  c.wait 0.1
  t.text += "ん"
  c.wait 0.1
  t.text += "に"
  c.wait 0.1
  t.text += "ち"
  c.wait 0.1
  t.text += "は"
  c.wait 0.1
  t.text += "。\n"
  c.wait 0.5

  t.text += "お"
  c.wait 0.1
  t.text += "元"
  c.wait 0.1
  t.text += "気"
  c.wait 0.1
  t.text += "で"
  c.wait 0.1
  t.text += "す"
  c.wait 0.1
  t.text += "か"
  c.wait 0.1
  t.text += "？"
  c.wait 0.8

  t2 = c.text(font, 230, 150, color: 3, text: "🐈")
  t2.text += "よ"
  t2.text += "り"
  c.wait 1

  font = Font.new(40)
  t.font = t2.font = font
  c.wait 1

  font = Font.new(30)
  t.font = t2.font = font
  c.wait 1
end

App.run