require "clip"

$font = Font.new(50)

class TextScreen < ClipObject
  def initialize(parent)
    super(parent)

    @text = ""
  end

  def append(text)
    @text += text
  end

  # def clear
  #   @text = ""
  # end

  def draw
    # clear
    # puts @text
    $font[@text].draw(0, 0)
  end
end

class ClipObject
  def text_screen(*args)
    TextScreen.new(self, *args)
  end
end

script do |c|
  t = c.text_screen

  1.upto(9) do |x|
    1.upto(9) do |y|
      t.append "#{x} × #{y} = #{x * y}\n"
      c.wait 0.5
    end
    # c.enter(t)
  end

  c.wait 1
end

App.end_time = 3
App.run
