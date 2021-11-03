#pragma once

#include "MrbObject.hpp"

//----------------------------------------------------------
namespace siv3druby {
class MrbDynamicTexture
    : public MrbObject<DynamicTexture>
{
public:
    static void Init(mrb_state *mrb);

private:
    static mrb_value initialize(mrb_state *mrb, mrb_value self);
    static mrb_value fill(mrb_state *mrb, mrb_value self);
};
}
