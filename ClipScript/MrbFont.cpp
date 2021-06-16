#include "MrbFont.hpp"

#include "MrbDrawableText.hpp"
#include "mruby/range.h"
#include "mruby/string.h"

//----------------------------------------------------------
namespace siv3druby {
MrbObject<Font>::Inner MrbFont::fInner;

//----------------------------------------------------------
void MrbFont::Init(mrb_state* mrb)
{
    MrbObject::Init(mrb, "Font");

    mrb_define_method(mrb, Cc(), "initialize", initialize, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, Cc(), "[]", aref, MRB_ARGS_ARG(1, 1));
}

//----------------------------------------------------------
mrb_value MrbFont::initialize(mrb_state *mrb, mrb_value self)
{
    mrb_int size;
    mrb_get_args(mrb, "i", &size);

    Initialize(self, new Font(size));
    return self;
}

//----------------------------------------------------------
mrb_value MrbFont::aref(mrb_state *mrb, mrb_value self)
{
    mrb_value str, offset = mrb_nil_value(), length = mrb_nil_value();
    mrb_get_args(mrb, "S|oo", &str, &offset, &length);

    auto cstr = mrb_string_value_ptr(mrb, str);
    auto strUtf32 = Unicode::FromUTF8(cstr);

    if (!mrb_nil_p(offset)) {
        if (!mrb_nil_p(length)) {
            strUtf32 = strUtf32.substr(mrb_integer(offset), mrb_integer(length));
        } else {
            strUtf32 = strUtf32.substr(mrb_integer(offset));
        }

        String padding;

        for (int i = 0; i < mrb_integer(offset); i++) {
            padding.append(U" ");
        }

        strUtf32 = padding + strUtf32;
    } else if (!mrb_nil_p(length)) {
        strUtf32 = strUtf32.substr(0, mrb_integer(length));
    }
    
    auto dstr = new DrawableText(Self(self)(strUtf32));
    return MrbDrawableText::ToMrb(mrb, dstr);
}

}
