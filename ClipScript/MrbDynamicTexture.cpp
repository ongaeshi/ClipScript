#include "MrbDynamicTexture.hpp"

#include "MrbImage.hpp"
#include "Util.hpp"
#include "mruby.h"

//----------------------------------------------------------
namespace siv3druby {
MrbObject<DynamicTexture>::Inner MrbDynamicTexture::fInner;

//----------------------------------------------------------
void MrbDynamicTexture::Init(mrb_state* mrb)
{
    MrbObject::Init(mrb, "DynamicTexture");

    mrb_define_method(mrb, Cc(), "initialize", initialize, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, Cc(), "fill", fill, MRB_ARGS_REQ(1));
}

//----------------------------------------------------------
mrb_value MrbDynamicTexture::initialize(mrb_state *mrb, mrb_value self)
{
    mrb_value image;
    mrb_get_args(mrb, "o", &image);

    DynamicTexture* obj = new DynamicTexture(*MrbImage::ToCpp(mrb, image));
    Initialize(self, obj);
    return self;
}
  
//----------------------------------------------------------
mrb_value MrbDynamicTexture::fill(mrb_state *mrb, mrb_value self)
{
    mrb_value image;
    mrb_get_args(mrb, "o", &image);

    auto isSuccess = Self(self).fill(*MrbImage::ToCpp(mrb, image));
    return mrb_bool_value(isSuccess);
}

}
