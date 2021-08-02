require "clip"

font = Font.new(50)

script do |root|
  Drawer.background("white")

  root.scene_script do |scene|
    t = scene.text(font, 0, 0, text: "シーン1")
    scene.wait 0.1
    t.text += "1"
    scene.wait 0.1
    t.text += "1"
    scene.wait 0.1
    t.text += "1"
    scene.wait 0.1
    t.text += "1"
    scene.wait 0.1
    t.text += "1"
    scene.wait 0.1
    t.text += "1"
    scene.wait 0.1
    t.text += "1"
    scene.until_time 3
  end

  root.scene_script do |scene|
    t = scene.text(font, 0, 100, text: "シーン2")

    1.upto 30 do
      t.text += "2"
      scene.wait 0.1
    end

    scene.until_time 3
  end
end

App.run
