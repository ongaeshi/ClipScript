#include "MrbQuad.hpp"

// TODO: Support MrbTexture
//#include "MrbTexture.hpp"
//#include "MrbTextureRegion.hpp"
//#include "MrbTexturedQuad.hpp"
#include "MrbVec2.hpp"
#include "Util.hpp"

//----------------------------------------------------------
namespace siv3druby {
MrbObject<Quad>::Inner MrbQuad::fInner;

//----------------------------------------------------------
void MrbQuad::Init(mrb_state* mrb)
{
    MrbObject::Init(mrb, "Quad");

    mrb_define_method(mrb, Cc(), "initialize", initialize, MRB_ARGS_REQ(4));
    //mrb_define_method(mrb, Cc(), "[]", aref, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, Cc(), "draw", draw, MRB_ARGS_OPT(1));
}

//----------------------------------------------------------
mrb_value MrbQuad::initialize(mrb_state *mrb, mrb_value self)
{
    mrb_value p0, p1, p2, p3;
    mrb_get_args(mrb, "oooo", &p0, &p1, &p2, &p3);

    Initialize(self, new Quad(Util::ToVec2(mrb, p0), Util::ToVec2(mrb, p1), Util::ToVec2(mrb, p2), Util::ToVec2(mrb, p3)));
    return self;
}

////----------------------------------------------------------
//mrb_value MrbQuad::aref(mrb_state *mrb, mrb_value self)
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
mrb_value MrbQuad::draw(mrb_state *mrb, mrb_value self)
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

}
