#include "MrbImage.hpp"

#include "MrbTexture.hpp"
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
    return self;
}
  
//----------------------------------------------------------
mrb_value MrbImage::fill(mrb_state *mrb, mrb_value self)
{
    return self;
}

}
