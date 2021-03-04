#pragma once

#include "MrbObject.hpp"

//----------------------------------------------------------
namespace siv3druby {
class MrbTexture
    : public MrbObject<Texture>
{
public:
    static void Init(mrb_state *mrb);

private:
    static mrb_value initialize(mrb_state *mrb, mrb_value self);
    static mrb_value aref(mrb_state *mrb, mrb_value self);
    static mrb_value height(mrb_state *mrb, mrb_value self);
    static mrb_value map(mrb_state *mrb, mrb_value self);
    static mrb_value repeat(mrb_state *mrb, mrb_value self);
    static mrb_value uv(mrb_state *mrb, mrb_value self);
    static mrb_value width(mrb_state *mrb, mrb_value self);
};
}
