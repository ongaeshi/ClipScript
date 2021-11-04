#include "MrbImage.hpp"

#include "MrbTexture.hpp"
#include "Util.hpp"
#include "mruby.h"

//----------------------------------------------------------
namespace siv3druby {
MrbObject<Image>::Inner MrbImage::fInner;

//----------------------------------------------------------
void MrbImage::Init(mrb_state* mrb)
{
    MrbObject::Init(mrb, "Image");

    mrb_define_method(mrb, Cc(), "initialize", initialize, MRB_ARGS_REQ(3));
    mrb_define_method(mrb, Cc(), "fill", fill, MRB_ARGS_REQ(1));
}

//----------------------------------------------------------
mrb_value MrbImage::initialize(mrb_state *mrb, mrb_value self)
{
    mrb_int width, height;
    mrb_value color;
    mrb_get_args(mrb, "iio", &width, &height, &color);

    Image* obj = new Image(Size(width, height), Util::ToColor(mrb, color));
    Initialize(self, obj);
    return self;
}
  
//----------------------------------------------------------
mrb_value MrbImage::fill(mrb_state *mrb, mrb_value self)
{
    mrb_value color;
    mrb_get_args(mrb, "o", &color);

    Self(self).fill(Util::ToColor(mrb, color));
    return mrb_nil_value();
}

}
