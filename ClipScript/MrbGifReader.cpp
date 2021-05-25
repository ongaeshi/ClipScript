#include "MrbGifReader.hpp"

#include "MrbTexture.hpp"
#include "mruby/array.h"
#include "mruby/string.h"
#include "mruby/variable.h"

//----------------------------------------------------------
namespace siv3druby {
MrbObject<GifReader>::Inner MrbGifReader::fInner;

//----------------------------------------------------------
void MrbGifReader::Init(mrb_state* mrb)
{
    MrbObject::Init(mrb, "GifReader");

    mrb_define_method(mrb, Cc(), "initialize", initialize, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, Cc(), "duration", duration, MRB_ARGS_NONE());
    mrb_define_method(mrb, Cc(), "delays", delays, MRB_ARGS_NONE());
    mrb_define_method(mrb, Cc(), "textures", textures, MRB_ARGS_NONE());
    mrb_define_method(mrb, Cc(), "index", index, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, Cc(), "width", width, MRB_ARGS_NONE());
    mrb_define_method(mrb, Cc(), "height", height, MRB_ARGS_NONE());
}

//----------------------------------------------------------
mrb_value MrbGifReader::initialize(mrb_state *mrb, mrb_value self)
{
    mrb_value path;
    mrb_get_args(mrb, "S", &path);

    auto cstr = mrb_string_value_ptr(mrb, path);
    Initialize(self, new GifReader(Unicode::FromUTF8(cstr)));

    // @textures
    auto textures = mrb_ary_new(mrb);

    for (Image image : Self(self).images()) {
        mrb_ary_push(
            mrb,
            textures,
            MrbTexture::ToMrb(mrb, new Texture(image))
        );
    }

    mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@textures"), textures);

    return self;
}

namespace {
    const float MICROSEC_TO_SEC = 0.001f;
}

//----------------------------------------------------------
mrb_value MrbGifReader::duration(mrb_state* mrb, mrb_value self)
{
    return mrb_float_value(mrb, Self(self).duration() * MICROSEC_TO_SEC);
}

//----------------------------------------------------------
mrb_value MrbGifReader::delays(mrb_state* mrb, mrb_value self)
{
    auto array = mrb_ary_new(mrb);

    for (int delay : Self(self).delays()) {
        mrb_ary_push(mrb, array, mrb_float_value(mrb, delay * MICROSEC_TO_SEC));
    }

    return array;
}

//----------------------------------------------------------
mrb_value MrbGifReader::textures(mrb_state* mrb, mrb_value self)
{
    return mrb_iv_get(mrb, self, mrb_intern_cstr(mrb, "@textures"));
}

//----------------------------------------------------------
mrb_value MrbGifReader::index(mrb_state* mrb, mrb_value self)
{
    mrb_float timeSec;
    mrb_get_args(mrb, "f", &timeSec);

    return mrb_int_value(mrb, Self(self).index(timeSec));
}

//----------------------------------------------------------
mrb_value MrbGifReader::width(mrb_state* mrb, mrb_value self)
{
    return mrb_int_value(mrb, Self(self).width());
}

//----------------------------------------------------------
mrb_value MrbGifReader::height(mrb_state* mrb, mrb_value self)
{
    return mrb_int_value(mrb, Self(self).height());
}

}
