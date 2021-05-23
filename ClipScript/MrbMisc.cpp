#include "MrbMisc.hpp"

#include "Main.hpp"
#include "MrbPoint.hpp"
#include "MrbVec2.hpp"
#include "Util.hpp"
#include "mruby.h"
#include "mruby/array.h"
#include "mruby/irep.h"
#include "mruby/string.h"

//----------------------------------------------------------
namespace siv3druby {

namespace {
static mrb_value printstr(mrb_state *mrb, mrb_value self)
{
    mrb_value str;
    mrb_get_args(mrb, "S", &str);
    auto s = Unicode::FromUTF8(mrb_string_value_ptr(mrb, str));
    Print << s;
    std::cout << s << std::endl;
    return str;
}

static mrb_value clear(mrb_state *mrb, mrb_value self)
{
    ClearPrint();
    return mrb_nil_value();
}

static mrb_value random(mrb_state *mrb, mrb_value self)
{
    mrb_float v1, v2;
    mrb_int argc = mrb_get_args(mrb, "|ff", &v1, &v2);

    switch (argc) {
        case 2:
            return mrb_float_value(mrb, Random(v1, v2));
        case 1:
            return mrb_float_value(mrb, Random(v1));
        default:
            return mrb_float_value(mrb, Random());
    }
}

static mrb_value system_update(mrb_state *mrb, mrb_value self)
{
    auto retVal = System::Update();

    if (fSiv3DRubyState.isCapture) {
        fSiv3DRubyState.isCapture = false;
        ScreenCapture::SaveCurrentFrame();
    }

    if (fSiv3DRubyState.isReload) {
        return mrb_bool_value(false);
    } else {
        return mrb_bool_value(retVal);
    }
}

static mrb_value cursor_pos(mrb_state *mrb, mrb_value self)
{
    return MrbPoint::ToMrb(mrb, new Point(Cursor::Pos()));
}

static mrb_value cursor_delta(mrb_state *mrb, mrb_value self)
{
    return MrbPoint::ToMrb(mrb, new Point(Cursor::Delta()));
}

static mrb_value mouse_wheel(mrb_state *mrb, mrb_value self)
{
    return mrb_fixnum_value(Mouse::Wheel());
}

static mrb_value mouse_wheelh(mrb_state *mrb, mrb_value self)
{
    return mrb_fixnum_value(Mouse::WheelH());
}

static mrb_value mousel_down(mrb_state *mrb, mrb_value self)
{
    return mrb_bool_value(MouseL.down());
}

static mrb_value mousel_pressed(mrb_state *mrb, mrb_value self)
{
    return mrb_bool_value(MouseL.pressed());
}

static mrb_value mousel_up(mrb_state *mrb, mrb_value self)
{
    return mrb_bool_value(MouseL.up());
}

static mrb_value mouser_down(mrb_state *mrb, mrb_value self)
{
    return mrb_bool_value(MouseR.down());
}

static mrb_value mouser_pressed(mrb_state *mrb, mrb_value self)
{
    return mrb_bool_value(MouseR.pressed());
}

static mrb_value mouser_up(mrb_state *mrb, mrb_value self)
{
    return mrb_bool_value(MouseR.up());
}

static mrb_value set_background(mrb_state *mrb, mrb_value self)
{
    mrb_value color;
    mrb_get_args(mrb, "o", &color);

    Scene::SetBackground(Util::ToColor(mrb, color));
    return mrb_nil_value();
}

static mrb_value center(mrb_state *mrb, mrb_value self)
{
    return MrbVec2::ToMrb(mrb, new Vec2(Scene::Center()));
}

static mrb_value resize(mrb_state *mrb, mrb_value self)
{
    mrb_int width, height;
    mrb_bool centering = true;
    mrb_get_args(mrb, "ii|b", &width, &height, &centering);

	return mrb_bool_value(Window::Resize(width, height, WindowResizeOption::ResizeSceneSize, centering));
}

static mrb_value width(mrb_state *mrb, mrb_value self)
{
    return mrb_fixnum_value(Scene::Width());
}

static mrb_value height(mrb_state *mrb, mrb_value self)
{
    return mrb_fixnum_value(Scene::Height());
}

mrb_value radians(mrb_state *mrb, mrb_value self)
{
    mrb_float deg;
    mrb_get_args(mrb, "f", &deg);
    return mrb_float_value(mrb, Math::Radians(deg).asFloat());
}

mrb_value timeline_ui(mrb_state* mrb, mrb_value self)
{
    static const Font font(20);

    mrb_float time, end_time;
    mrb_bool is_stop;
    mrb_get_args(mrb, "ffb", &time, &end_time, &is_stop);

    auto button = !is_stop ? U"▶" : U"⏹️";

    const auto UiHeight = 100;
    const auto UiPosY = Scene::Height() - UiHeight;
    const auto Margin = 50;

    Rect(0, UiPosY, 800, UiHeight).draw(ColorF(0.8, 0.9, 1.0));

    if (SimpleGUI::Button(button, Vec2(20, UiPosY + Margin))) {
        is_stop = !is_stop;
    }

    if (SimpleGUI::Slider(time, 0.0, end_time, Vec2(180, UiPosY + Margin), 600)) {
        is_stop = true;
    }

    font(U"{:3.2f}"_fmt(time)).draw(100, UiPosY + Margin, Palette::Black);

    mrb_value array = mrb_ary_new(mrb);
    mrb_ary_push(mrb, array, mrb_float_value(mrb, time));
    mrb_ary_push(mrb, array, mrb_bool_value(is_stop));
    return array;
}
}

//----------------------------------------------------------
void MrbMisc::Init(mrb_state* mrb)
{
    {
        struct RClass *krn = mrb->kernel_module;
        mrb_define_method(mrb, krn, "__printstr__", printstr, MRB_ARGS_REQ(1));
        mrb_define_method(mrb, krn, "clear", clear, MRB_ARGS_NONE());
        mrb_define_method(mrb, krn, "random", random, MRB_ARGS_OPT(2));
        mrb_define_method(mrb, krn, "timeline_ui", timeline_ui, MRB_ARGS_REQ(2));
    }

    {
        struct RClass *cc = mrb_define_module(mrb, "System");

        mrb_define_class_method(mrb, cc, "update", system_update, MRB_ARGS_NONE());
    }

    {
        struct RClass *cc = mrb_define_module(mrb, "Cursor");

        mrb_define_class_method(mrb, cc, "pos", cursor_pos, MRB_ARGS_NONE());
        mrb_define_class_method(mrb, cc, "delta", cursor_delta, MRB_ARGS_NONE());
    }

    {
        struct RClass *cc = mrb_define_module(mrb, "Mouse");

        mrb_define_class_method(mrb, cc, "wheel", mouse_wheel, MRB_ARGS_NONE());
        mrb_define_class_method(mrb, cc, "wheelh", mouse_wheelh, MRB_ARGS_NONE());
    }

    {
        struct RClass *cc = mrb_define_module(mrb, "MouseL");

        mrb_define_class_method(mrb, cc, "down", mousel_down, MRB_ARGS_NONE());
        mrb_define_class_method(mrb, cc, "pressed", mousel_pressed, MRB_ARGS_NONE());
        mrb_define_class_method(mrb, cc, "up", mousel_up, MRB_ARGS_NONE());
    }

    {
        struct RClass *cc = mrb_define_module(mrb, "MouseR");

        mrb_define_class_method(mrb, cc, "down", mouser_down, MRB_ARGS_NONE());
        mrb_define_class_method(mrb, cc, "pressed", mouser_pressed, MRB_ARGS_NONE());
        mrb_define_class_method(mrb, cc, "up", mouser_up, MRB_ARGS_NONE());
    }

    {
        struct RClass *cc = mrb_define_module(mrb, "Graphics");

        mrb_define_class_method(mrb, cc, "set_background", set_background, MRB_ARGS_REQ(1));
    }

    {
        struct RClass *cc = mrb_define_module(mrb, "Window");

        mrb_define_class_method(mrb, cc, "center", center, MRB_ARGS_NONE());
        mrb_define_class_method(mrb, cc, "resize", resize, MRB_ARGS_ARG(2, 1));
        mrb_define_class_method(mrb, cc, "width", width, MRB_ARGS_NONE());
        mrb_define_class_method(mrb, cc, "height", height, MRB_ARGS_NONE());
    }

    {
        struct RClass *cc = mrb_define_module(mrb, "TextureDesc");

        mrb_define_const(mrb, cc, "Unmipped",  mrb_fixnum_value((int)TextureDesc::Unmipped));
        mrb_define_const(mrb, cc, "UnmippedSRGB",  mrb_fixnum_value((int)TextureDesc::UnmippedSRGB));
        mrb_define_const(mrb, cc, "Mipped",  mrb_fixnum_value((int)TextureDesc::Mipped));
        mrb_define_const(mrb, cc, "MippedSRGB",  mrb_fixnum_value((int)TextureDesc::MippedSRGB));
        mrb_define_const(mrb, cc, "SDF",  mrb_fixnum_value((int)TextureDesc::SDF));
        mrb_define_const(mrb, cc, "For3D",  mrb_fixnum_value((int)TextureDesc::For3D));
    }

    {
        //struct RClass *cc = mrb_module_get(mrb, "Math");
        struct RClass* cc = mrb_define_module(mrb, "Math");
        mrb_define_class_method(mrb, cc, "radians", radians, MRB_ARGS_REQ(1));
    }
}

}
