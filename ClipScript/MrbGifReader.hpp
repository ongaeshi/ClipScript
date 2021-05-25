#pragma once

#include "GifReader.hpp"
#include "MrbObject.hpp"

//----------------------------------------------------------
namespace siv3druby {
class MrbGifReader
    : public MrbObject<GifReader>
{
public:
    static void Init(mrb_state *mrb);

private:
    static mrb_value initialize(mrb_state* mrb, mrb_value self);
    static mrb_value duration(mrb_state* mrb, mrb_value self);
    static mrb_value delays(mrb_state* mrb, mrb_value self);
    static mrb_value textures(mrb_state* mrb, mrb_value self);
    static mrb_value index(mrb_state* mrb, mrb_value self);
    static mrb_value width(mrb_state* mrb, mrb_value self);
    static mrb_value height(mrb_state *mrb, mrb_value self);
};
}
