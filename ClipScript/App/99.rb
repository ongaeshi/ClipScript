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
    clear
    puts @text
  end
end

class ClipObject
  def text_screen(*args)
    TextScreen.new(self, *args)
  end
end

script do |ctx|
  t = c.text_screen

  1.upto(9) do |x|
    1.upto(9) do |y|
      c.mul(t, 50*x, 50*y, x, y)
      wait 0.5
    end
    c.enter(t)
  end

  c.wait 1
end

App.end_time = 60
App.run