require 'clip'

App.window_size(400, 225)

font = Font.new(50)
smile = Texture.new(Emoji.new("😀"))

script do |root|
  Drawer.background "white"

  (0..10).each do |x|
    (0..10).each do |y|
      if (x + y) % 2 == 0
        root.rect(x * 40, y * 40, 40, 40, color: "gray")
      end
    end
  end
end  

script do |root|
  t = root.text(font, 0, 0, color: "purple", text: "Hello, ")
  root.wait 0.2

  t.text += "W"
  root.wait 0.2

  t.text += "o"
  root.wait 0.2

  t.text += "r"
  root.wait 0.2

  t.text += "l"
  root.wait 0.2

  t.text += "d"
  root.wait 0.2

  t.text += "!"
  root.until_time 2

  x = root.texture(smile, 340, 10)
  x.scale(0.4, 0.4)
end

App.run
