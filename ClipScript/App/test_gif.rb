require 'clip'

test_gif = GifReader.new("example/test.gif")
font = Font.new(40)

script do |c|
  Drawer.background("white")
end

W = 0.5

script do |c|
  g = c.gif(test_gif)
  t = c.text(font, 10, 250, color: "orange")
  loop do
    t.text = "GIFアニメを再生中"
    c.wait W
    t.text += "."
    c.wait W
    t.text += "."
    c.wait W
    t.text = "GIFアニメを停止🎃"
    g.stop
    c.wait W
    g.play
  end
end

App.run