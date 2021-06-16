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

  def rect(x, y, w, h, color)
    color = to_color(color)
    Rect.new(x, y, w, h).draw(color)
  end
  module_function :rect

  def text(font, x, y, text, color, offset = nil, length = nil)
    font[text, offset, length].draw(x, y, to_color(color))
  end
  module_function :text

  def text_at(font, x, y, text, color)
    font[text].draw_at(x, y, to_color(color))
  end
  module_function :text_at

  def texture(texture, x, y, color = nil)
    if color
      texture.draw(x, y, to_color(color))
    else
      texture.draw(x, y)
    end
  end
  module_function :texture

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
    "maroon" => "#85144B",
    "fuchsia" => "#F012BE",
    "purple" => "#B10DC9",
    "black" => "#111111",
    "gray" => "#AAAAAA",
    "silver" => "#DDDDDD",
    "white" => "#FFFFFF",
  }

  COLOR_ARRAY = [
    "navy",
    "blue",
    "aqua",
    "teal",
    "olive",
    "green",
    "lime",
    "yellow",
    "orange",
    "red",
    "maroon",
    "fuchsia",
    "purple",
    "black",
    "gray",
    "silver",
    "white",
  ]

  def to_color(src)
    if src.is_a?(Integer)
      to_color(COLOR_ARRAY[src])
    elsif src.is_a?(String)
      hex = COLORS[src] || src
      hex = hex[1..-1].to_i(16)
      [(hex >> 16) & 0xff, (hex >> 8) & 0xff, hex & 0xff]
    else
      src
    end
  end
  module_function :to_color
end