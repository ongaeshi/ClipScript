#include "MrbGifReader.hpp"

#include "mruby/string.h"

//----------------------------------------------------------
namespace siv3druby {
MrbObject<GifReader>::Inner MrbGifReader::fInner;

//----------------------------------------------------------
void MrbGifReader::Init(mrb_state* mrb)
{
    MrbObject::Init(mrb, "GifReader");

    mrb_define_method(mrb, Cc(), "initialize", initialize, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, Cc(), "duration", duration, MRB_ARGS_NONE());
}

//----------------------------------------------------------
mrb_value MrbGifReader::initialize(mrb_state *mrb, mrb_value self)
{
    mrb_value path;
    mrb_get_args(mrb, "S", &path);

    auto cstr = mrb_string_value_ptr(mrb, path);
    Initialize(self, new GifReader(Unicode::FromUTF8(cstr)));
    return self;
}

//----------------------------------------------------------
mrb_value MrbGifReader::duration(mrb_state* mrb, mrb_value self)
{
    return mrb_int_value(mrb, Self(self).duration());
}

}
