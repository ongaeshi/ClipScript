#pragma once

#include "MrbObject.hpp"

//----------------------------------------------------------
namespace siv3druby {
class MrbRect
    : public MrbObject<Rect>
{
public:
    static void Init(mrb_state *mrb);

private:
    static mrb_value initialize(mrb_state *mrb, mrb_value self);
    static mrb_value aref(mrb_state *mrb, mrb_value self);
    static mrb_value draw(mrb_state *mrb, mrb_value self);
    static mrb_value draw_frame(mrb_state *mrb, mrb_value self);
    static mrb_value draw_inner_outer(mrb_state *mrb, mrb_value self);
    static mrb_value rotated(mrb_state *mrb, mrb_value self);
};
}
