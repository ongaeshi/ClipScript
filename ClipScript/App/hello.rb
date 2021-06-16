require 'clip'

App.window_size(400, 225)

font_s = Font.new(40)
font = Font.new(50)
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
  t = root.text(font, 200, 30, color: "black", text: "Hello, World!", length: 0, center: true)
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

  root.wait 0.3

  t2 = root.text(font_s, 200, 110, color: "blue", text: "こんにちは、世界！", length: 0, center: true)

  1.upto(t2.text.length) do
    t2.length += 1
    root.wait 0.1
  end

  root.until_time 3.5

  x = root.texture(smile, 180, 150)
  x.scale(0.4, 0.4)
end

App.run
