﻿#include <Siv3D.hpp>

#include <filesystem>
#include "Main.hpp"
#include "MrbCamera2D.hpp"
#include "MrbCircle.hpp"
#include "MrbColorF.hpp"
#include "MrbDrawableText.hpp"
#include "MrbEmoji.hpp"
#include "MrbFont.hpp"
#include "MrbHSV.hpp"
#include "MrbLine.hpp"
#include "MrbLineString.hpp"
#include "MrbMisc.hpp"
#include "MrbPoint.hpp"
#include "MrbPolygon.hpp"
#include "MrbQuad.hpp"
#include "MrbRect.hpp"
#include "MrbRoundRect.hpp"
#include "MrbTexture.hpp"
#include "MrbTextureRegion.hpp"
#include "MrbTexturedQuad.hpp"
#include "MrbTriangle.hpp"
#include "MrbVec2.hpp"
#include "mruby.h"
#include "mruby/array.h"
#include "mruby/compile.h"
#include "mruby/string.h"
#include "mruby/dump.h"
#include "mruby/variable.h"
#include <thread>
#include <Windows.h>

//extern "C" const uint8_t __declspec(align(4)) mrb_siv3druby_builtin[];

namespace siv3druby {

    Siv3DRubyState fSiv3DRubyState;

    void setArgv(mrb_state* mrb)
    {
        int argc = fSiv3DRubyState.argv.size();
        mrb_value ARGV = mrb_ary_new_capa(mrb, argc);

        for (int i = 0; i < argc; i++) {
            mrb_ary_push(mrb, ARGV, mrb_str_new_cstr(mrb, fSiv3DRubyState.argv[i].toUTF8().c_str()));
        }

        mrb_define_global_const(mrb, "ARGV", ARGV);
    }

    void setLoadPath(mrb_state* mrb)
    {
        mrb_value load_path = mrb_gv_get(mrb, mrb_intern_cstr(mrb, "$:"));
        auto path = FileSystem::CurrentDirectory() + U"/lib";
        mrb_ary_push(mrb, load_path, mrb_str_new_cstr(mrb, path.toUTF8().c_str()));
    }

    void mainLoop()
    {
        Window::SetTitle(U"SketchWaltz 0.0.4 dev");

        mrb_state* mrb = mrb_open();

        setArgv(mrb);
        setLoadPath(mrb);
        MrbCamera2D::Init(mrb);
        MrbCircle::Init(mrb);
        MrbColorF::Init(mrb);
        MrbDrawableText::Init(mrb);
        MrbEmoji::Init(mrb);
        MrbFont::Init(mrb);
        MrbHSV::Init(mrb);
        MrbLine::Init(mrb);
        MrbLineString::Init(mrb);
        MrbMisc::Init(mrb);
        MrbPoint::Init(mrb);
        MrbPolygon::Init(mrb);
        MrbQuad::Init(mrb);
        MrbRect::Init(mrb);
        MrbRoundRect::Init(mrb);
        MrbTexture::Init(mrb);
        MrbTextureRegion::Init(mrb);
        MrbTexturedQuad::Init(mrb);
        MrbTriangle::Init(mrb);
        MrbVec2::Init(mrb);

        if (fSiv3DRubyState.restartTime != 0.0f) {
            mrb_const_set(
                mrb,
                mrb_obj_value(mrb->kernel_module),
                mrb_intern_str(mrb, mrb_str_new_cstr(mrb, "CLIP_MANAGER_START_TIME")),
                mrb_float_value(mrb, fSiv3DRubyState.restartTime)
                );
        }


        String s;

        if (fSiv3DRubyState.evalString != U"") {
            s = fSiv3DRubyState.evalString;
        }
        else {
            TextReader reader(fSiv3DRubyState.filePath);
            s = reader.readAll();
        }

        {
            mrb_value ret = mrb_load_string(mrb, s.toUTF8().c_str());

            if (mrb->exc) {
                Scene::SetBackground(Palette::Black);

                mrb_value msg = mrb_funcall(mrb, mrb_obj_value(mrb->exc), "inspect", 0);
                const char* cstr = mrb_string_value_ptr(mrb, msg);
                Print << Unicode::UTF8ToUTF32(cstr);

                while (System::Update()) {
                    if (fSiv3DRubyState.isReload) {
                        break;
                    }
                }
            }
        }

        if (fSiv3DRubyState.isReload) {
            mrb_value clipManager = mrb_gv_get(mrb, mrb_intern_cstr(mrb, "$clip_manager"));

            mrb_value t = mrb_funcall(mrb, clipManager, "time", 0);
            fSiv3DRubyState.restartTime = mrb_float(t);
            
            mrb_value i = mrb_funcall(mrb, clipManager, "is_stop", 0);
            fSiv3DRubyState.restartIsStop = mrb_bool(i);
        }

        mrb_close(mrb);
    }

    void threadLoop()
    {
        while (true) {
            auto writeTime = FileSystem::WriteTime(fSiv3DRubyState.filePath);

            if (writeTime > fSiv3DRubyState.lastWriteTime) {
                fSiv3DRubyState.lastWriteTime = writeTime;
                fSiv3DRubyState.isReload = true;
            }

            std::this_thread::sleep_for(std::chrono::milliseconds(100));
        }
    }

    Array<String> getArgs()
    {
        auto argv = Array<String>();

        int nArgs = 0;
        LPWSTR* szArglist = ::CommandLineToArgvW(::GetCommandLineW(), &nArgs);

        for (int i = 1; i < nArgs; i++) {
            argv << Unicode::FromWString(szArglist[i]);
        }
        ::LocalFree(szArglist);

        return argv;
    }
}


void Main()
{
    using namespace siv3druby;

    auto args = getArgs();

    auto opt = U"--capture";
    if (args.includes(opt)) {
        fSiv3DRubyState.isCapture = true;
        args.remove(opt);
    }

    //opt = U"--watch";
    //if (args.includes(opt)) {
    //    fSiv3DRubyState.isWatch = true;
    //    args.remove(opt);
    //}
    fSiv3DRubyState.isWatch = true;

    opt = U"--init";
    if (args.includes(opt)) {
        args.remove(opt);

        if (args.size() == 1) {
            if (FileSystem::Exists(args[0])) {
                std::cout << "error: Already exists " << args[0] << std::endl;
            }
            else {
                //auto writer = TextWriter(args[0]);
                // writer.writeUTF8(u8"# Sample: https://scrapbox.io/sketchwaltz\nGraphics.set_background([10, 10, 10])\nt = Texture.new(Emoji.new(\"👻\"))\nfont = Font.new(35)\ny = -300\n\nwhile System.update do\n  t.draw_at(Cursor.pos.x, Cursor.pos.y)\n  font[\"Hello, World!🐕\"].draw_at(Window.center.x, Window.center.y + y, Palette::White)\n  y += 1 if y < 0\n\n  Rect.new(0, 400, 640, 400).draw(Palette::Lightseagreen)\nend\n");
                //std::cout << "Create a script file " << args[0] << std::endl;
            }
        }
        else {
            std::cout << "swk --init [filename]" << std::endl;
        }

        return;
    }

    // TODO: Need option parser
    if (args.size() == 0) {
        fSiv3DRubyState.filePath = U"main.rb";
        fSiv3DRubyState.lastWriteTime = FileSystem::WriteTime(fSiv3DRubyState.filePath);
    }
    else if (args[0] == U"-e") {
        fSiv3DRubyState.evalString = args[1];
        fSiv3DRubyState.argv = args.slice(2);
    }
    else {
        fSiv3DRubyState.filePath = String(args[0]);
        fSiv3DRubyState.lastWriteTime = FileSystem::WriteTime(fSiv3DRubyState.filePath);
        fSiv3DRubyState.argv = args.slice(1);
    }

    if (fSiv3DRubyState.isWatch) {
        std::thread t([&] {
            threadLoop();
            });
        t.detach();
    }

    do {
        ClearPrint();
        fSiv3DRubyState.isReload = false;
        mainLoop();
    } while (fSiv3DRubyState.isReload);
}
 