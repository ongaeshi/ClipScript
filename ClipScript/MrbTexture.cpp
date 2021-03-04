#include "MrbTexture.hpp"

#include "MrbEmoji.hpp"
#include "MrbTexturedQuad.hpp"
#include "MrbTextureRegion.hpp"
#include "Util.hpp"
#include "mruby/string.h"

//----------------------------------------------------------
namespace siv3druby {
MrbObject<Texture>::Inner MrbTexture::fInner;

//----------------------------------------------------------
void MrbTexture::Init(mrb_state* mrb)
{
    MrbObject::Init(mrb, "Texture");

    mrb_define_method(mrb, Cc(), "initialize", initialize, MRB_ARGS_ARG(1, 1));
    mrb_define_method(mrb, Cc(), "[]", aref, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, Cc(), "height", height, MRB_ARGS_NONE());
    mrb_define_method(mrb, Cc(), "map", map, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, Cc(), "repeat", repeat, MRB_ARGS_REQ(2));
    mrb_define_method(mrb, Cc(), "uv", uv, MRB_ARGS_REQ(4));
    mrb_define_method(mrb, Cc(), "width", width, MRB_ARGS_NONE());
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
mrb_value MrbTexture::initialize(mrb_state *mrb, mrb_value self)
{
    mrb_value src;
    mrb_int desc = static_cast<int>(TextureDesc::Unmipped);
    mrb_get_args(mrb, "o|i", &src, &desc);

    Texture* obj;

    if (mrb_string_p(src)) {
        obj = new Texture(Unicode::FromUTF8(mrb_string_value_ptr(mrb, src)), static_cast<TextureDesc>(desc));
    } else if (MrbEmoji::IsInstance(mrb, src)) {
        obj = new Texture(*MrbEmoji::ToCpp(mrb, src), static_cast<TextureDesc>(desc));
    } else {
        mrb_raise(mrb, E_TYPE_ERROR, "wrong argument class");
    }

    Initialize(self, obj);
    return self;
}

//----------------------------------------------------------
mrb_value MrbTexture::aref(mrb_state *mrb, mrb_value self)
{
    mrb_float x, y, w, h;
    mrb_get_args(mrb, "ffff", &x, &y, &w, &h);

    return MrbTextureRegion::ToMrb(
        mrb,
        new TextureRegion(Self(self)(x, y, w, h))
        );
}

//----------------------------------------------------------
mrb_value MrbTexture::height(mrb_state *mrb, mrb_value self)
{
    return mrb_float_value(mrb, Self(self).height());
}

//----------------------------------------------------------
mrb_value MrbTexture::map(mrb_state *mrb, mrb_value self)
{
    mrb_float x, y;
    mrb_get_args(mrb, "ff", &x, &y);

    return MrbTextureRegion::ToMrb(
        mrb,
        new TextureRegion(Self(self).mapped(x, y))
        );
}

//----------------------------------------------------------
mrb_value MrbTexture::repeat(mrb_state *mrb, mrb_value self)
{
    mrb_float x, y;
    mrb_get_args(mrb, "ff", &x, &y);

    return MrbTextureRegion::ToMrb(
        mrb,
        new TextureRegion(Self(self).repeated(x, y))
        );
}

//----------------------------------------------------------
mrb_value MrbTexture::uv(mrb_state *mrb, mrb_value self)
{
    mrb_float u, v, w, h;
    mrb_get_args(mrb, "ffff", &u, &v, &w, &h);

    return MrbTextureRegion::ToMrb(
        mrb,
        new TextureRegion(Self(self).uv(u, v, w, h))
        );
}

//----------------------------------------------------------
mrb_value MrbTexture::width(mrb_state *mrb, mrb_value self)
{
    return mrb_float_value(mrb, Self(self).width());
}

//----------------------------------------------------------
mrb_value MrbTexture::draw(mrb_state* mrb, mrb_value self)
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
mrb_value MrbTexture::draw_at(mrb_state* mrb, mrb_value self)
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
mrb_value MrbTexture::flip(mrb_state* mrb, mrb_value self)
{
    return MrbTextureRegion::ToMrb(
        mrb,
        new TextureRegion(Self(self).flipped())
    );
}

//----------------------------------------------------------
mrb_value MrbTexture::mirror(mrb_state* mrb, mrb_value self)
{
    return MrbTextureRegion::ToMrb(
        mrb,
        new TextureRegion(Self(self).mirrored())
    );
}

//----------------------------------------------------------
mrb_value MrbTexture::rotate(mrb_state* mrb, mrb_value self)
{
    mrb_float angle;
    mrb_get_args(mrb, "f", &angle);

    return MrbTexturedQuad::ToMrb(
        mrb,
        new TexturedQuad(Self(self).rotated(angle))
    );
}

//----------------------------------------------------------
mrb_value MrbTexture::rotate_at(mrb_state* mrb, mrb_value self)
{
    mrb_float x, y, angle;
    mrb_get_args(mrb, "fff", &x, &y, &angle);

    return MrbTexturedQuad::ToMrb(
        mrb,
        new TexturedQuad(Self(self).rotatedAt(x, y, angle))
    );
}

//----------------------------------------------------------
mrb_value MrbTexture::resize(mrb_state* mrb, mrb_value self)
{
    mrb_float x, y;
    int argc = mrb_get_args(mrb, "ff", &x, &y);

    return MrbTextureRegion::ToMrb(
        mrb,
        new TextureRegion(Self(self).resized(x, y))
    );
}

//----------------------------------------------------------
mrb_value MrbTexture::scale(mrb_state* mrb, mrb_value self)
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
