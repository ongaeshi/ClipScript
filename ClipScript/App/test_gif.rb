require 'clip'

test_gif = GifReader.new("example/test.gif")
font = Font.new(40)

App.end_time = test_gif.duration * 2

script do |c|
  Drawer.background("white")
end

script do |c|
  g = c.gif(test_gif)
  t = c.text(font, 10, 250, color: "orange")
  loop do
    t.text = "GIFアニメを再生中"
    c.wait 2.4
    t.text = "GIFアニメを停止🎃"
    g.stop
    c.wait 1.2
    g.play
    t.text = "4倍速"
    g.rate = 4
    c.wait 1.2
  end
end

App.run