require 'clip'

test_gif = GifReader.new("example/test.gif")
font = Font.new(40)

App.end_time = test_gif.duration * 2

script do |c|
  Drawer.background("white")
end

script do |c|
  g = c.gif(test_gif)
  t = c.text(font, 10, 200, color: "orange")

  1.upto(2) do
    t.text = "GIFアニメを再生中"
    1.upto(3) do
      t.text += "."
      c.wait 0.4
    end
  end
  c.until_time 2.4

  t.text = "GIFアニメを停止🎃"
  g.stop
  c.until_time 3.6

  g.play
  1.upto(4) do
    t.text = "4倍速"
    g.rate = 4
    1.upto(3) do
      t.text += "."
      c.wait 0.1
    end
  end
end

App.run