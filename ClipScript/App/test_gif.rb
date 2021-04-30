require 'clip'

test_gif = GifReader.new("example/test.gif")
font = Font.new(50)

script do |c|
  Drawer.background("white")
  g = c.gif(test_gif)
  g.play
end

W = 0.5

script do |c|
  t = c.text(font, 0, 200, color: "orange")
  loop do
    t.text = "GIFアニメを再生中"
    c.wait W
    t.text += "."
    c.wait W
    t.text += "."
    c.wait W
    t.text += "🎃"
    c.wait W
  end
end

App.run