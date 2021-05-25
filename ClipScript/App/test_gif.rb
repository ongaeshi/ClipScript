require 'clip'

test_gif = GifReader.new("example/test.gif")
font = Font.new(30)

App.end_time = test_gif.duration * 3 + 0.4

script do |c|
  Drawer.background("white")
end

script do |c|
  g = c.gif(test_gif)
  t = c.text(font, 10, 200, color: "orange")

  t_center = c.text(font, 10, 70, color: [32, 32, 32, 32])
  t_center.text = "test.gif(#{test_gif.width}, #{test_gif.height})"

  1.upto(2) do
    t.text = "再生中"
    1.upto(3) do
      t.text += "."
      c.wait 0.4
    end
  end
  c.until_time 2.4

  t.text = "停止🎃"
  g.stop
  c.until_time 3.6

  g.play
  1.upto(4) do
    t.text = "4倍速"
    g.playback_rate = 4
    1.upto(3) do
      t.text += "."
      c.wait 0.1
    end
  end
  c.until_time 4.8

  # stop motion
  g.stop
  current_time = 0.0
  1.upto(7) do
    g.current_time = current_time
    t.text = "t = #{current_time}"
    c.wait 0.4
    current_time += 0.4
  end
end

App.run