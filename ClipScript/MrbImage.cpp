#include "MrbImage.hpp"

#include "MrbTexture.hpp"

//----------------------------------------------------------
namespace siv3druby {
MrbObject<Image>::Inner MrbTexture::fInner;

//----------------------------------------------------------
void MrbImage::Init(mrb_state* mrb)
{
    MrbObject::Init(mrb, "Image");

    mrb_define_method(mrb, Cc(), "initialize", initialize, MRB_ARGS_ARG(3));
    mrb_define_method(mrb, Cc(), "fill", height, MRB_ARGS_REQ(1));
}

//----------------------------------------------------------
mrb_value MrbImage::initialize(mrb_state *mrb, mrb_value self)
{
    return self;
}
  
//----------------------------------------------------------
mrb_value MrbImage::fill(mrb_state *mrb, mrb_value self)
{
    return self;
}

}
