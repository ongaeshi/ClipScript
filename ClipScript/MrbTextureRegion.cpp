#include "MrbTextureRegion.hpp"

#include "MrbTexturedQuad.hpp"
#include "Util.hpp"

//----------------------------------------------------------
namespace siv3druby {
MrbObject<TextureRegion>::Inner MrbTextureRegion::fInner;

//----------------------------------------------------------
void MrbTextureRegion::Init(mrb_state* mrb)
{
    MrbObject::Init(mrb, "TextureRegion");

    mrb_define_method(mrb, Cc(), "draw", draw, MRB_ARGS_OPT(3));
    mrb_define_method(mrb, Cc(), "draw_at", draw_at, MRB_ARGS_OPT(3));
    mrb_define_method(mrb, Cc(), "flip", flip, MRB_ARGS_NONE());
    mrb_define_method(mrb, Cc(), "mirror", mirror, MRB_ARGS_NONE());
    mrb_define_method(mrb, Cc(), "rotate", rotate, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, Cc(), "rotate_at", rotate_at, MRB_ARGS_REQ(3));
    mrb_define_method(mrb, Cc(), "scale", scale, MRB_ARGS_ARG(1, 1));
    mrb_define_method(mrb, Cc(), "resize", resize, MRB_ARGS_REQ(2));
}

//----------------------------------------------------------
mrb_value MrbTextureRegion::draw(mrb_state *mrb, mrb_value self)
{
    mrb_float x, y;
    mrb_value color;
    int argc = mrb_get_args(mrb, "|ffo", &x, &y, &color);

    switch (argc)
    {
        case 3:
            Self(self).draw(x, y, Util::ToColor(mrb, color));
            break;
        case 2:
            Self(self).draw(x, y);
            break;
        default:
            Self(self).draw();
            break;
    }

    return mrb_nil_value();
}

//----------------------------------------------------------
mrb_value MrbTextureRegion::draw_at(mrb_state *mrb, mrb_value self)
{
    mrb_float x, y;
    mrb_value color;
    int argc = mrb_get_args(mrb, "|ffo", &x, &y, &color);

    switch (argc)
    {
        case 3:
            Self(self).drawAt(x, y, Util::ToColor(mrb, color));
            break;
        case 2:
            Self(self).drawAt(x, y);
            break;
        default:
            Self(self).drawAt(0, 0);
            break;
    }

    return mrb_nil_value();
}

//----------------------------------------------------------
mrb_value MrbTextureRegion::flip(mrb_state *mrb, mrb_value self)
{
    return MrbTextureRegion::ToMrb(
        mrb,
        new TextureRegion(Self(self).flipped())
        );
}

//----------------------------------------------------------
mrb_value MrbTextureRegion::mirror(mrb_state *mrb, mrb_value self)
{
    return MrbTextureRegion::ToMrb(
        mrb,
        new TextureRegion(Self(self).mirrored())
        );
}

//----------------------------------------------------------
mrb_value MrbTextureRegion::rotate(mrb_state *mrb, mrb_value self)
{
    mrb_float angle;
    mrb_get_args(mrb, "f", &angle);

    return MrbTexturedQuad::ToMrb(
        mrb,
        new TexturedQuad(Self(self).rotated(angle))
        );
}

//----------------------------------------------------------
mrb_value MrbTextureRegion::rotate_at(mrb_state *mrb, mrb_value self)
{
    mrb_float x, y, angle;
    mrb_get_args(mrb, "fff", &x, &y, &angle);

    return MrbTexturedQuad::ToMrb(
        mrb,
        new TexturedQuad(Self(self).rotatedAt(x, y, angle))
        );
}

//----------------------------------------------------------
mrb_value MrbTextureRegion::resize(mrb_state *mrb, mrb_value self)
{
    mrb_float x, y;
    int argc = mrb_get_args(mrb, "ff", &x, &y);

    return MrbTextureRegion::ToMrb(
        mrb,
        new TextureRegion(Self(self).resized(x, y))
        );
}

//----------------------------------------------------------
mrb_value MrbTextureRegion::scale(mrb_state *mrb, mrb_value self)
{
    mrb_float x, y;
    int argc = mrb_get_args(mrb, "f|f", &x, &y);

    switch (argc)
    {
        case 2:
            return MrbTextureRegion::ToMrb(
                mrb,
                new TextureRegion(Self(self).scaled(x, y))
                );
        default:
            return MrbTextureRegion::ToMrb(
                mrb,
                new TextureRegion(Self(self).scaled(x))
                );
    }
}

}
