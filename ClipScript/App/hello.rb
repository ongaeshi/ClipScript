require 'clip'

App.window_size(400, 225)

font = Font.new(60)
smile = Texture.new(Emoji.new("😀"))

script do |root|
  Drawer.background "white"

  (0..10).each do |x|
    (0..10).each do |y|
      if (x + y) % 2 == 0
        root.rect(x * 40, y * 40, 40, 40, color: "gray")
        root.wait 0.02
      end
    end
  end
end  

script do |root|
  t = root.text(font, 200, 110, color: "black", text: "Hello, World!", length: 0, center: true)
  root.wait 0.2

  1.upto(7) do
    t.length += 1
    root.wait 0.1
  end

  root.wait 0.3

  1.upto(6) do
    t.length += 1
    root.wait 0.08
  end

  root.until_time 2.5

  x = root.texture(smile, 180, 150)
  x.scale(0.4, 0.4)
end

App.run
