require "clip"

App.window_size(400, 450)

test_gif = GifReader.new("example/test.gif")
font = Font.new(30)

App.end_time = test_gif.duration * 3

script do |root|
  Drawer.background("white")

  root.scene_script do |scene|
    g = scene.gif(test_gif, x: 100, y: 100)
    t = scene.text(font, 0, 0, color: "orange", text: "width: #{g.width}, height: #{g.height}")
    scene.until_time g.duration
  end

  root.scene_script do |scene|
    g1 = scene.gif(test_gif, x: 0, y: 100)
    g2 = scene.gif(test_gif, x: 120, y: 100)
    g3 = scene.gif(test_gif, x: 240, y: 100)
    t = scene.text(font, 0, 0, color: "orange", text: "multi gif")
    scene.until_time g1.duration
  end

  root.scene_script do |scene|
    g1 = scene.gif(test_gif, x: 0, y: 100)
    g1.width = 50

    g2 = scene.gif(test_gif, x: 100, y: 100)
    g2.height = 250

    t = scene.text(font, 0, 0, color: "orange", text: "scale")

    scene.until_time g1.duration
  end
end

App.run
