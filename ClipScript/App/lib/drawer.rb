module Drawer
  def background(color)
    Graphics.set_background(to_color(color))
  end
  module_function :background

  def circle(x, y, r, color, frame = nil)
    color = to_color(color)
    if frame.nil?
      Circle.new(x, y, r).draw(color)
    else
      Circle.new(x, y, r).draw_frame(frame, color)
    end
  end
  module_function :circle

  COLORS = {
    "navy" => "#001F3F",
    "blue" => "#0074D9",
    "aqua" => "#7FDBFF",
    "teal" => "#39CCCC",
    "olive" => "#3D9970",
    "green" => "#2ECC40",
    "lime" => "#01FF70",
    "yellow" => "#FFDC00",
    "orange" => "#FF851B",
    "red" => "#FF4136",
    "fuchsia" => "#F012BE",
    "purple" => "#B10DC9",
    "maroon" => "#85144B",
    "white" => "#FFFFFF",
    "silver" => "#DDDDDD",
    "gray" => "#AAAAAA",
    "black" => "#111111",
  }

  def to_color(src)
    if src.is_a?(String)
      hex = COLORS[src] || src
      hex = hex[1..-1].to_i(16)
      [(hex >> 16) & 0xff, (hex >> 8) & 0xff, hex & 0xff]
    else
      src
    end
  end
end