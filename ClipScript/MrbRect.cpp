#include "MrbRect.hpp"

#include "MrbQuad.hpp"
// TODO: Support MrbTexture
//#include "MrbTexture.hpp"
//#include "MrbTextureRegion.hpp"
//#include "MrbTexturedQuad.hpp"
#include "Util.hpp"

//----------------------------------------------------------
namespace siv3druby {
MrbObject<Rect>::Inner MrbRect::fInner;

//----------------------------------------------------------
void MrbRect::Init(mrb_state* mrb)
{
    MrbObject::Init(mrb, "Rect");

    mrb_define_method(mrb, Cc(), "initialize", initialize, MRB_ARGS_REQ(4));
    //mrb_define_method(mrb, Cc(), "[]", aref, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, Cc(), "draw", draw, MRB_ARGS_OPT(1));
    mrb_define_method(mrb, Cc(), "draw_frame", draw_frame, MRB_ARGS_OPT(2));
    mrb_define_method(mrb, Cc(), "draw_inner_outer", draw_inner_outer, MRB_ARGS_ARG(2, 1));
    mrb_define_method(mrb, Cc(), "rotated", rotated, MRB_ARGS_REQ(1));
}

//----------------------------------------------------------
mrb_value MrbRect::initialize(mrb_state *mrb, mrb_value self)
{
    mrb_float x, y, w, h;
    mrb_get_args(mrb, "ffff", &x, &y, &w, &h);

    Initialize(self, new Rect(x, y, w, h));
    return self;
}

////----------------------------------------------------------
//mrb_value MrbRect::aref(mrb_state *mrb, mrb_value self)
//{
//    mrb_value texture;
//    mrb_get_args(mrb, "o", &texture);
//
//    TexturedQuad texturedQuad =
//        MrbTexture::IsInstance(mrb, texture) ?
//        Self(self)(*MrbTexture::ToCpp(mrb, texture)) :
//        Self(self)(*MrbTextureRegion::ToCpp(mrb, texture));
//
//    return MrbTexturedQuad::ToMrb(
//        mrb,
//        new TexturedQuad(
//            texturedQuad.texture,
//            texturedQuad.uvRect,
//            texturedQuad.quad,
//            texturedQuad.center
//            )
//        );
//}

//----------------------------------------------------------
mrb_value MrbRect::draw(mrb_state *mrb, mrb_value self)
{
    mrb_value color;
    int argc = mrb_get_args(mrb, "|o", &color);

    switch (argc)
    {
        case 1:
            Self(self).draw(Util::ToColor(mrb, color));
            break;
        default:
            Self(self).draw();
            break;
    }

    return mrb_nil_value();
}

//----------------------------------------------------------
mrb_value MrbRect::draw_frame(mrb_state *mrb, mrb_value self)
{
    mrb_float thickness;
    mrb_value color;
    int argc = mrb_get_args(mrb, "|fo", &thickness, &color);

    switch (argc)
    {
        case 2:
            Self(self).drawFrame(thickness, Util::ToColor(mrb, color));
            break;
        case 1:
            Self(self).drawFrame(thickness);
            break;
        default:
            Self(self).drawFrame();
            break;
    }

    return mrb_nil_value();
}

//----------------------------------------------------------
mrb_value MrbRect::draw_inner_outer(mrb_state *mrb, mrb_value self)
{
    mrb_float inner_thickness, outer_thickness;
    mrb_value color;
    int argc = mrb_get_args(mrb, "ff|o",
        &inner_thickness,
        &outer_thickness,
        &color
        );

    switch (argc)
    {
        case 3:
            Self(self).drawFrame(inner_thickness, outer_thickness, Util::ToColor(mrb, color));
            break;
        case 2:
            Self(self).drawFrame(inner_thickness, outer_thickness);
            break;
    }

    return mrb_nil_value();
}

//----------------------------------------------------------
mrb_value MrbRect::rotated(mrb_state *mrb, mrb_value self)
{
    mrb_float radian;
    mrb_get_args(mrb, "f", &radian);
    return MrbQuad::ToMrb(mrb, new Quad(Self(self).rotated(radian)));
}

}
