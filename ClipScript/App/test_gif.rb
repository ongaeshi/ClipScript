require 'clip'

test_gif = GifReader.new("example/test.gif")

script do |c|
  Drawer.background("white")
  g = c.gif(test_gif)
  g.play
end

App.run