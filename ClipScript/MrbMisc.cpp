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

static mrb_value key_c_down(mrb_state* mrb, mrb_value self)
{
    return mrb_bool_value(KeyC.down());
}

static mrb_value key_c_pressed(mrb_state* mrb, mrb_value self)
{
    return mrb_bool_value(KeyC.pressed());
}

static mrb_value key_c_up(mrb_state* mrb, mrb_value self)
{
    return mrb_bool_value(KeyC.up());
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
    mrb_bool centering = false;
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

namespace {
    AnimatedGIFWriter fAnimatedGIFWriter;
    mrb_float fPrevTime;
    FilePath fSavedPath;

    enum class GifSaveState
    {
        None,
        SetPath,
        Wait,
        Open,
        FirstWrite,
        WriteFrame,
        Close,

    };

    GifSaveState fGifSaveState = GifSaveState::None;
}

mrb_value timeline_ui(mrb_state* mrb, mrb_value self)
{
    static const Font font(20);
    const double MinDeltaTime = 1.0f / 60;
    const double MinDeltaTimeHalf = MinDeltaTime * 0.5; // Prevent next update from being called twice.

    mrb_float time, end_time, frame_advance_rate;
    mrb_bool is_stop, is_loop, is_hidden, is_slow;
    mrb_get_args(mrb, "ffbbbbf", &time, &end_time, &is_stop, &is_loop, &is_hidden, &is_slow, &frame_advance_rate);

    auto button = !is_stop ? U"▶" : U"⏹️";

    int UiOffsetY = 60;
    int SliderWidth = Scene::Width() - 160;

    const auto UiHeight = 60 + UiOffsetY;
    const auto UiPosY = Scene::Height() - UiHeight;
    const auto UiOffset = 10;

    if (!is_hidden) {
        Rect(0, UiPosY, Scene::Width(), UiHeight).draw(ColorF(0.8, 0.9, 1.0));

        if (SimpleGUI::Button(button, Vec2(10, UiPosY + UiOffset))) {
            is_stop = !is_stop;
        }

        if (SimpleGUI::Slider(time, 0.0, end_time, Vec2(150, UiPosY + UiOffset), SliderWidth)) {
            is_stop = true;
        }
    }

    if (KeySpace.down()) {
        is_stop = !is_stop;
    }

    const auto duration = Duration(0.5);

    if (KeyLeft.down() || 
        KeyRight.down() ||
        KeyLeft.pressedDuration() > duration ||
        KeyRight.pressedDuration() > duration) {
        if (!is_stop) {
            is_stop = true;
        }

        if (KeyRight.pressed()) {
            if (KeyControl.pressed()) {
                time = end_time - MinDeltaTimeHalf;
            } else {
                time += MinDeltaTime * frame_advance_rate - MinDeltaTimeHalf;
            }
        }

        if (KeyLeft.pressed()) {
            if (KeyControl.pressed()) {
                time = 0.0f;
            } else {
                time -= MinDeltaTime * frame_advance_rate;
            }
        }
    }

    if (KeyF10.down()) {
        is_loop = !is_loop;
    }

    if (KeyF11.down()) {
        is_hidden = !is_hidden;
    }

    if (KeyControl.pressed() && KeyS.down()) {
        fGifSaveState = GifSaveState::SetPath;
        auto path = Dialog::SaveFile({ FileFilter::GIF() });

        if (path.has_value()) {
            fSavedPath = path.value();
            time = fPrevTime = end_time; // It will be zero in the next frame.
            is_stop = false;
            is_loop = true;
            is_hidden = true;
        }
    }

    if (!is_hidden) {
        bool isLoop = is_loop;

        if (SimpleGUI::CheckBox(isLoop, U"🔄", Vec2(Scene::Width() - 190, UiPosY + UiOffset + UiOffsetY))) {
            is_loop = isLoop;
        }

        font(U"{:3.2f}"_fmt(time)).draw(80, UiPosY + UiOffset, Palette::Black);

#if true
        if (KeyS.down()) {
            is_slow = !is_slow;
        }

        bool isSlow = is_slow;

        if (SimpleGUI::CheckBox(isSlow, U"🐢", Vec2(Scene::Width() - 110, UiPosY + UiOffset + UiOffsetY))) {
            is_slow = isSlow;
        }
#else
        if (Cursor::Pos().y < UiPosY) {
            font(Cursor::Pos()).draw(Scene::Width() - 110, UiPosY + UiOffset + UiOffsetY, Palette::Black);
        }
#endif

        if (SimpleGUI::Button(U"💾", Vec2(10, UiPosY + UiOffset + UiOffsetY))) {
            fGifSaveState = GifSaveState::SetPath;
            auto path = Dialog::SaveFile({ FileFilter::GIF() });

            if (path.has_value()) {
                fSavedPath = path.value();
                time = fPrevTime = end_time; // It will be zero in the next frame.
                is_stop = false;
                is_loop = true;
                is_hidden = true;
            }
        }
    }

    constexpr double GifFrameTime = 1.0 / 20; // 20fps

    switch (fGifSaveState) {
    case GifSaveState::SetPath:
        fGifSaveState = GifSaveState::Wait;
        break;
    case GifSaveState::Wait:
        fGifSaveState = GifSaveState::FirstWrite;
        fAnimatedGIFWriter.open(fSavedPath, Scene::Size());
        ScreenCapture::RequestCurrentFrame();
        break;
    case GifSaveState::FirstWrite:
        assert(ScreenCapture::HasNewFrame());
        fGifSaveState = GifSaveState::WriteFrame;
        fAnimatedGIFWriter.writeFrame(ScreenCapture::GetFrame(), SecondsF(GifFrameTime));
        fPrevTime = time;
        is_loop = false;
        ScreenCapture::RequestCurrentFrame();
        break;
    case GifSaveState::WriteFrame:
        assert(ScreenCapture::HasNewFrame());

        if (time - fPrevTime > GifFrameTime) {
            fAnimatedGIFWriter.writeFrame(ScreenCapture::GetFrame(), SecondsF(time - fPrevTime));
            fPrevTime = time;
        }

        if (time >= end_time) {
            fGifSaveState = GifSaveState::Close;
        }

        ScreenCapture::RequestCurrentFrame();

        break;
    case GifSaveState::Close:
        fAnimatedGIFWriter.writeFrame(ScreenCapture::GetFrame(), SecondsF(time - fPrevTime));
        fAnimatedGIFWriter.close();
        is_loop = true;
        is_hidden = false;
        break;
    }

    mrb_value array = mrb_ary_new(mrb);
    mrb_ary_push(mrb, array, mrb_float_value(mrb, time));
    mrb_ary_push(mrb, array, mrb_bool_value(is_stop));
    mrb_ary_push(mrb, array, mrb_bool_value(is_loop));
    mrb_ary_push(mrb, array, mrb_bool_value(is_hidden));
    mrb_ary_push(mrb, array, mrb_bool_value(is_slow));
    return array;
}

mrb_value siv3d_strlen(mrb_state* mrb, mrb_value self)
{
    mrb_value str;
    mrb_get_args(mrb, "S", &str);
    return mrb_fixnum_value(Unicode::FromUTF8(mrb_string_value_ptr(mrb, str)).length());
}

mrb_value has_new_file_paths(mrb_state* mrb, mrb_value self)
{
    mrb_value str;
    return mrb_bool_value(DragDrop::HasNewFilePaths());
}

mrb_value get_dropped_file_path(mrb_state* mrb, mrb_value self)
{
    mrb_value str;
    auto path = DragDrop::GetDroppedFilePaths()[0].path;
    return mrb_str_new_cstr(mrb, path.toUTF8().c_str());
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
        struct RClass* cc = mrb_define_module(mrb, "KeyC");

        mrb_define_class_method(mrb, cc, "down", key_c_down, MRB_ARGS_NONE());
        mrb_define_class_method(mrb, cc, "pressed", key_c_pressed, MRB_ARGS_NONE());
        mrb_define_class_method(mrb, cc, "up", key_c_up, MRB_ARGS_NONE());
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

    {
        struct RClass* cc = mrb_define_module(mrb, "Siv3d");

        mrb_define_class_method(mrb, cc, "strlen", siv3d_strlen, MRB_ARGS_REQ(1));
    }

    {
        struct RClass* cc = mrb_define_module(mrb, "DragDrop");

        mrb_define_class_method(mrb, cc, "has_new_file_paths", has_new_file_paths, MRB_ARGS_NONE());
        mrb_define_class_method(mrb, cc, "get_dropped_file_path", get_dropped_file_path, MRB_ARGS_NONE());
    }
}

}
