/*
 * This file is loading the irep
 * Ruby GEM code.
 *
 * IMPORTANT:
 *   This file was generated!
 *   All manual changes will get lost.
 */
#include <stdlib.h>
#include <mruby.h>
#include <mruby/proc.h>
#include <mruby/presym.h>

#define mrb_BRACED(...) {__VA_ARGS__}
#define mrb_DEFINE_SYMS_VAR(name, len, syms, qualifier) \
  static qualifier mrb_sym name[len] = mrb_BRACED syms

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_3, 3, (MRB_SYM(Lazy), MRB_SYM(Enumerator), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_3[18] = {
0x35,0x00,0x00,0x00,0x1f,0x02,0x01,0x21,0x02,0x00,0x14,0x03,0x2f,0x02,0x02,0x01,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_3, 1, (MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_3 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_3,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_3,NULL,
  gem_mrblib_mruby_enum_lazy_proc_lv_3,
  NULL,					/* debug_info */
  18,0,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_1[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_3,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_1, 1, (MRB_SYM(lazy), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_1[13] = {
0x68,0x01,0x5b,0x02,0x00,0x64,0x01,0x00,0x11,0x01,0x00,0x39,0x01,};
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_1,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_1,gem_mrblib_mruby_enum_lazy_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  13,0,1,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_21, 2, (MRB_SYM(call), MRB_OPSYM(lshift), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_21[43] = {
0x35,0x04,0x00,0x00,0x23,0x03,0x02,0x01,0x27,0x03,0x00,0x12,0x23,0x03,0x02,0x01,0x23,0x04,0x01,0x00,
0x01,0x05,0x01,0x2f,0x03,0x00,0x02,0x25,0x00,0x0b,0x23,0x03,0x01,0x00,0x01,0x04,0x01,0x2f,0x03,0x01,
0x01,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_21, 2, (MRB_SYM(x), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_21 = {
  3,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_21,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_21,NULL,
  gem_mrblib_mruby_enum_lazy_proc_lv_21,
  NULL,					/* debug_info */
  43,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_20[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_21,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_20, 2, (MRB_SYM(each), MRB_SYM(StopIteration), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_20[55] = {
0x35,0x04,0x00,0x00,0x23,0x03,0x01,0x00,0x59,0x04,0x00,0x30,0x03,0x00,0x00,0x25,0x00,0x16,0x2a,0x03,
0x1f,0x04,0x01,0x2b,0x03,0x04,0x26,0x04,0x00,0x03,0x25,0x00,0x05,0x13,0x03,0x25,0x00,0x02,0x2c,0x03,
0x39,0x03,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x0f,0x00,0x00,0x00,0x12,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_20, 2, (MRB_SYM(yielder), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_20 = {
  3,5,1,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_20,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_20,gem_mrblib_mruby_enum_lazy_proc_reps_20,
  gem_mrblib_mruby_enum_lazy_proc_lv_20,
  NULL,					/* debug_info */
  42,0,2,1,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_7[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_20,
};
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_7[16] = {
0x35,0x04,0x00,0x01,0x34,0x04,0x00,0x00,0x59,0x04,0x00,0x33,0x03,0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_7, 2, (MRB_SYM(obj), MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_7 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_7,
  NULL,NULL,gem_mrblib_mruby_enum_lazy_proc_reps_7,
  gem_mrblib_mruby_enum_lazy_proc_lv_7,
  NULL,					/* debug_info */
  16,0,0,1,0
};
static const mrb_pool_value gem_mrblib_mruby_enum_lazy_proc_pool_8[2] = {
{IREP_TT_STR|(17<<2), {"\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x20\x6d\x65\x74\x68\x6f\x64\x20"}},
{IREP_TT_STR|(0<<2), {""}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_8, 9, (MRB_SYM(each), MRB_SYM_Q(respond_to), MRB_SYM(ArgumentError), MRB_SYM(raise), MRB_SYM(Lazy), MRB_SYM(new), MRB_SYM_E(obj), MRB_SYM_E(meth), MRB_SYM_E(args), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_8[103] = {
0x35,0x00,0x30,0x01,0x25,0x00,0x03,0x25,0x00,0x03,0x11,0x01,0x00,0x14,0x05,0x01,0x06,0x01,0x2f,0x05,
0x01,0x01,0x26,0x05,0x00,0x16,0x14,0x05,0x1f,0x06,0x02,0x51,0x07,0x00,0x01,0x08,0x01,0x53,0x07,0x51,
0x08,0x01,0x53,0x07,0x2f,0x05,0x03,0x02,0x1f,0x05,0x04,0x14,0x06,0x01,0x07,0x03,0x30,0x05,0x05,0x01,
0x01,0x04,0x05,0x14,0x05,0x01,0x06,0x04,0x01,0x07,0x05,0x2f,0x06,0x06,0x01,0x01,0x05,0x01,0x01,0x06,
0x04,0x01,0x07,0x05,0x2f,0x06,0x07,0x01,0x01,0x05,0x02,0x01,0x06,0x04,0x01,0x07,0x05,0x2f,0x06,0x08,
0x01,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_8, 4, (MRB_SYM(meth), MRB_SYM(args), MRB_SYM(block), MRB_SYM(lz), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_8 = {
  5,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_8,
  gem_mrblib_mruby_enum_lazy_proc_pool_8,gem_mrblib_mruby_enum_lazy_proc_syms_8,NULL,
  gem_mrblib_mruby_enum_lazy_proc_lv_8,
  NULL,					/* debug_info */
  103,2,9,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_48, 2, (MRB_SYM(call), MRB_OPSYM(lshift), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_48[24] = {
0x35,0x08,0x00,0x00,0x01,0x04,0x01,0x23,0x05,0x01,0x00,0x01,0x06,0x02,0x2f,0x05,0x00,0x01,0x2f,0x04,
0x01,0x01,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_48, 3, (MRB_SYM(yielder), MRB_SYM(val), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_48 = {
  4,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_48,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_48,NULL,
  gem_mrblib_mruby_enum_lazy_proc_lv_48,
  NULL,					/* debug_info */
  24,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_9[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_48,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_9, 2, (MRB_SYM(Lazy), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_9[18] = {
0x35,0x00,0x00,0x01,0x1f,0x02,0x00,0x14,0x03,0x59,0x04,0x00,0x30,0x02,0x01,0x01,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_9, 1, (MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_9 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_9,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_9,gem_mrblib_mruby_enum_lazy_proc_reps_9,
  gem_mrblib_mruby_enum_lazy_proc_lv_9,
  NULL,					/* debug_info */
  18,0,2,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_62, 2, (MRB_SYM(call), MRB_OPSYM(lshift), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_62[36] = {
0x35,0x08,0x00,0x00,0x23,0x04,0x01,0x00,0x01,0x05,0x02,0x2f,0x04,0x00,0x01,0x27,0x04,0x00,0x0d,0x01,
0x04,0x01,0x01,0x05,0x02,0x2f,0x04,0x01,0x01,0x25,0x00,0x02,0x13,0x04,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_62, 3, (MRB_SYM(yielder), MRB_SYM(val), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_62 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_62,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_62,NULL,
  gem_mrblib_mruby_enum_lazy_proc_lv_62,
  NULL,					/* debug_info */
  36,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_10[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_62,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_10, 2, (MRB_SYM(Lazy), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_10[18] = {
0x35,0x00,0x00,0x01,0x1f,0x02,0x00,0x14,0x03,0x59,0x04,0x00,0x30,0x02,0x01,0x01,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_10, 1, (MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_10 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_10,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_10,gem_mrblib_mruby_enum_lazy_proc_reps_10,
  gem_mrblib_mruby_enum_lazy_proc_lv_10,
  NULL,					/* debug_info */
  18,0,2,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_76, 2, (MRB_SYM(call), MRB_OPSYM(lshift), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_76[36] = {
0x35,0x08,0x00,0x00,0x23,0x04,0x01,0x00,0x01,0x05,0x02,0x2f,0x04,0x00,0x01,0x27,0x04,0x00,0x05,0x13,
0x04,0x25,0x00,0x0a,0x01,0x04,0x01,0x01,0x05,0x02,0x2f,0x04,0x01,0x01,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_76, 3, (MRB_SYM(yielder), MRB_SYM(val), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_76 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_76,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_76,NULL,
  gem_mrblib_mruby_enum_lazy_proc_lv_76,
  NULL,					/* debug_info */
  36,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_11[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_76,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_11, 2, (MRB_SYM(Lazy), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_11[18] = {
0x35,0x00,0x00,0x01,0x1f,0x02,0x00,0x14,0x03,0x59,0x04,0x00,0x30,0x02,0x01,0x01,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_11, 1, (MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_11 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_11,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_11,gem_mrblib_mruby_enum_lazy_proc_reps_11,
  gem_mrblib_mruby_enum_lazy_proc_lv_11,
  NULL,					/* debug_info */
  18,0,2,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_90, 2, (MRB_OPSYM(eqq), MRB_OPSYM(lshift), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_90[36] = {
0x35,0x08,0x00,0x00,0x23,0x04,0x01,0x00,0x01,0x05,0x02,0x2f,0x04,0x00,0x01,0x27,0x04,0x00,0x0d,0x01,
0x04,0x01,0x01,0x05,0x02,0x2f,0x04,0x01,0x01,0x25,0x00,0x02,0x13,0x04,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_90, 3, (MRB_SYM(yielder), MRB_SYM(val), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_90 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_90,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_90,NULL,
  gem_mrblib_mruby_enum_lazy_proc_lv_90,
  NULL,					/* debug_info */
  36,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_12[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_90,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_12, 2, (MRB_SYM(Lazy), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_12[18] = {
0x35,0x04,0x00,0x00,0x1f,0x03,0x00,0x14,0x04,0x59,0x05,0x00,0x30,0x03,0x01,0x01,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_12, 2, (MRB_SYM(pattern), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_12 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_12,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_12,gem_mrblib_mruby_enum_lazy_proc_reps_12,
  gem_mrblib_mruby_enum_lazy_proc_lv_12,
  NULL,					/* debug_info */
  18,0,2,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_104, 1, (MRB_OPSYM(lshift), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_104[44] = {
0x35,0x08,0x00,0x00,0x23,0x04,0x03,0x00,0x23,0x05,0x01,0x00,0x44,0x04,0x27,0x04,0x00,0x0e,0x23,0x04,
0x03,0x00,0x3e,0x04,0x01,0x24,0x04,0x03,0x00,0x25,0x00,0x0a,0x01,0x04,0x01,0x01,0x05,0x02,0x2f,0x04,
0x00,0x01,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_104, 3, (MRB_SYM(yielder), MRB_SYM(val), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_104 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_104,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_104,NULL,
  gem_mrblib_mruby_enum_lazy_proc_lv_104,
  NULL,					/* debug_info */
  44,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_13[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_104,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_13, 2, (MRB_SYM(Lazy), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_13[20] = {
0x35,0x04,0x00,0x00,0x07,0x03,0x1f,0x04,0x00,0x14,0x05,0x59,0x06,0x00,0x30,0x04,0x01,0x01,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_13, 3, (MRB_SYM(n), MRB_OPSYM(and), MRB_SYM(dropped), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_13 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_13,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_13,gem_mrblib_mruby_enum_lazy_proc_reps_13,
  gem_mrblib_mruby_enum_lazy_proc_lv_13,
  NULL,					/* debug_info */
  20,0,2,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_118, 3, (MRB_SYM(call), MRB_OPSYM(not), MRB_OPSYM(lshift), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_118[67] = {
0x35,0x08,0x00,0x00,0x23,0x04,0x02,0x00,0x27,0x04,0x00,0x2b,0x23,0x04,0x01,0x00,0x01,0x05,0x02,0x2f,
0x04,0x00,0x01,0x2f,0x04,0x01,0x00,0x27,0x04,0x00,0x13,0x01,0x04,0x01,0x01,0x05,0x02,0x2f,0x04,0x02,
0x01,0x16,0x04,0x24,0x04,0x02,0x00,0x25,0x00,0x02,0x13,0x04,0x25,0x00,0x0a,0x01,0x04,0x01,0x01,0x05,
0x02,0x2f,0x04,0x02,0x01,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_118, 3, (MRB_SYM(yielder), MRB_SYM(val), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_118 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_118,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_118,NULL,
  gem_mrblib_mruby_enum_lazy_proc_lv_118,
  NULL,					/* debug_info */
  67,0,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_14[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_118,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_14, 2, (MRB_SYM(Lazy), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_14[20] = {
0x35,0x00,0x00,0x01,0x15,0x02,0x1f,0x03,0x00,0x14,0x04,0x59,0x05,0x00,0x30,0x03,0x01,0x01,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_14, 2, (MRB_SYM(block), MRB_SYM(dropping), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_14 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_14,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_14,gem_mrblib_mruby_enum_lazy_proc_reps_14,
  gem_mrblib_mruby_enum_lazy_proc_lv_14,
  NULL,					/* debug_info */
  20,0,2,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_132, 2, (MRB_SYM(StopIteration), MRB_SYM(raise), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_132[15] = {
0x35,0x00,0x00,0x00,0x14,0x02,0x1f,0x03,0x00,0x2f,0x02,0x01,0x01,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_132, 1, (MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_132 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_132,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_132,NULL,
  gem_mrblib_mruby_enum_lazy_proc_lv_132,
  NULL,					/* debug_info */
  15,0,2,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_133, 3, (MRB_OPSYM(lshift), MRB_SYM(StopIteration), MRB_SYM(raise), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_133[55] = {
0x35,0x08,0x00,0x00,0x01,0x04,0x01,0x01,0x05,0x02,0x2f,0x04,0x00,0x01,0x23,0x04,0x03,0x00,0x3e,0x04,
0x01,0x24,0x04,0x03,0x00,0x23,0x04,0x03,0x00,0x23,0x05,0x01,0x00,0x47,0x04,0x27,0x04,0x00,0x0c,0x14,
0x04,0x1f,0x05,0x01,0x2f,0x04,0x02,0x01,0x25,0x00,0x02,0x13,0x04,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_133, 3, (MRB_SYM(yielder), MRB_SYM(val), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_133 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_133,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_133,NULL,
  gem_mrblib_mruby_enum_lazy_proc_lv_133,
  NULL,					/* debug_info */
  55,0,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_15[2] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_132,
  &gem_mrblib_mruby_enum_lazy_proc_irep_133,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_15, 2, (MRB_SYM(Lazy), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_15[45] = {
0x35,0x04,0x00,0x00,0x01,0x04,0x01,0x07,0x05,0x43,0x04,0x27,0x04,0x00,0x0e,0x1f,0x04,0x00,0x14,0x05,
0x59,0x06,0x00,0x30,0x04,0x01,0x01,0x39,0x04,0x07,0x03,0x1f,0x04,0x00,0x14,0x05,0x59,0x06,0x01,0x30,
0x04,0x01,0x01,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_15, 3, (MRB_SYM(n), MRB_OPSYM(and), MRB_SYM(taken), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_15 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_15,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_15,gem_mrblib_mruby_enum_lazy_proc_reps_15,
  gem_mrblib_mruby_enum_lazy_proc_lv_15,
  NULL,					/* debug_info */
  45,0,2,2,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_149, 4, (MRB_SYM(call), MRB_OPSYM(lshift), MRB_SYM(StopIteration), MRB_SYM(raise), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_149[43] = {
0x35,0x08,0x00,0x00,0x23,0x04,0x01,0x00,0x01,0x05,0x02,0x2f,0x04,0x00,0x01,0x27,0x04,0x00,0x0d,0x01,
0x04,0x01,0x01,0x05,0x02,0x2f,0x04,0x01,0x01,0x25,0x00,0x09,0x14,0x04,0x1f,0x05,0x02,0x2f,0x04,0x03,
0x01,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_149, 3, (MRB_SYM(yielder), MRB_SYM(val), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_149 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_149,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_149,NULL,
  gem_mrblib_mruby_enum_lazy_proc_lv_149,
  NULL,					/* debug_info */
  43,0,4,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_16[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_149,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_16, 2, (MRB_SYM(Lazy), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_16[18] = {
0x35,0x00,0x00,0x01,0x1f,0x02,0x00,0x14,0x03,0x59,0x04,0x00,0x30,0x02,0x01,0x01,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_16, 1, (MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_16 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_16,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_16,gem_mrblib_mruby_enum_lazy_proc_reps_16,
  gem_mrblib_mruby_enum_lazy_proc_lv_16,
  NULL,					/* debug_info */
  18,0,2,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_164, 1, (MRB_OPSYM(lshift), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_164[17] = {
0x35,0x04,0x00,0x00,0x23,0x03,0x01,0x00,0x01,0x04,0x01,0x2f,0x03,0x00,0x01,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_164, 2, (MRB_SYM(x), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_164 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_164,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_164,NULL,
  gem_mrblib_mruby_enum_lazy_proc_lv_164,
  NULL,					/* debug_info */
  17,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_163[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_164,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_163, 2, (MRB_SYM(call), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_163[27] = {
0x35,0x08,0x00,0x00,0x23,0x05,0x01,0x00,0x01,0x06,0x02,0x2f,0x05,0x00,0x01,0x01,0x04,0x05,0x59,0x06,
0x00,0x30,0x05,0x01,0x00,0x39,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_163, 4, (MRB_SYM(yielder), MRB_SYM(val), MRB_OPSYM(and), MRB_SYM(ary), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_163 = {
  5,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_163,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_163,gem_mrblib_mruby_enum_lazy_proc_reps_163,
  gem_mrblib_mruby_enum_lazy_proc_lv_163,
  NULL,					/* debug_info */
  27,0,2,1,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_17[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_163,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_17, 2, (MRB_SYM(Lazy), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_17[18] = {
0x35,0x00,0x00,0x01,0x1f,0x02,0x00,0x14,0x03,0x59,0x04,0x00,0x30,0x02,0x01,0x01,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_17, 1, (MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_17 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_17,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_17,gem_mrblib_mruby_enum_lazy_proc_reps_17,
  gem_mrblib_mruby_enum_lazy_proc_lv_17,
  NULL,					/* debug_info */
  18,0,2,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_179, 1, (MRB_SYM(next), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_179[13] = {
0x35,0x04,0x00,0x00,0x01,0x03,0x01,0x2f,0x03,0x00,0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_179, 2, (MRB_SYM(e), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_179 = {
  3,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_179,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_179,NULL,
  gem_mrblib_mruby_enum_lazy_proc_lv_179,
  NULL,					/* debug_info */
  13,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_178[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_179,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_178, 3, (MRB_SYM(map), MRB_SYM(call), MRB_OPSYM(lshift), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_178[59] = {
0x35,0x08,0x00,0x00,0x23,0x05,0x03,0x00,0x59,0x06,0x00,0x30,0x05,0x00,0x00,0x01,0x04,0x05,0x23,0x05,
0x02,0x00,0x27,0x05,0x00,0x15,0x01,0x05,0x01,0x23,0x06,0x02,0x00,0x01,0x07,0x04,0x2f,0x06,0x01,0x01,
0x2f,0x05,0x02,0x01,0x25,0x00,0x0a,0x01,0x05,0x01,0x01,0x06,0x04,0x2f,0x05,0x02,0x01,0x39,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_178, 4, (MRB_SYM(yielder), MRB_SYM(val), MRB_OPSYM(and), MRB_SYM(ary), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_178 = {
  5,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_178,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_178,gem_mrblib_mruby_enum_lazy_proc_reps_178,
  gem_mrblib_mruby_enum_lazy_proc_lv_178,
  NULL,					/* debug_info */
  59,0,3,1,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_18[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_178,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_18, 2, (MRB_SYM(Lazy), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_18[31] = {
0x35,0x00,0x10,0x01,0x14,0x04,0x48,0x04,0x01,0x01,0x05,0x01,0x3d,0x04,0x01,0x03,0x04,0x1f,0x04,0x00,
0x14,0x05,0x59,0x06,0x00,0x30,0x04,0x01,0x01,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_18, 3, (MRB_SYM(args), MRB_SYM(block), MRB_SYM(enums), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_18 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_18,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_18,gem_mrblib_mruby_enum_lazy_proc_reps_18,
  gem_mrblib_mruby_enum_lazy_proc_lv_18,
  NULL,					/* debug_info */
  31,0,2,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_193, 4, (MRB_SYM(call), MRB_SYM_Q(include), MRB_OPSYM(lshift), MRB_OPSYM(aset), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_193[87] = {
0x35,0x08,0x00,0x00,0x23,0x05,0x01,0x00,0x27,0x05,0x00,0x11,0x23,0x05,0x01,0x00,0x01,0x06,0x02,0x2f,
0x05,0x00,0x01,0x01,0x04,0x05,0x25,0x00,0x06,0x01,0x05,0x02,0x01,0x04,0x05,0x23,0x05,0x02,0x00,0x01,
0x06,0x04,0x2f,0x05,0x01,0x01,0x27,0x05,0x00,0x05,0x13,0x05,0x25,0x00,0x1e,0x01,0x05,0x01,0x01,0x06,
0x02,0x2f,0x05,0x02,0x01,0x01,0x05,0x02,0x23,0x06,0x02,0x00,0x01,0x07,0x04,0x01,0x08,0x05,0x2f,0x06,
0x03,0x02,0x01,0x05,0x05,0x39,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_193, 4, (MRB_SYM(yielder), MRB_SYM(val), MRB_OPSYM(and), MRB_SYM(v), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_193 = {
  5,10,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_193,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_193,NULL,
  gem_mrblib_mruby_enum_lazy_proc_lv_193,
  NULL,					/* debug_info */
  87,0,4,0,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_19[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_193,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_19, 2, (MRB_SYM(Lazy), MRB_SYM(new), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_19[24] = {
0x35,0x00,0x00,0x01,0x54,0x03,0x00,0x01,0x02,0x03,0x1f,0x03,0x00,0x14,0x04,0x59,0x05,0x00,0x30,0x03,
0x01,0x01,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_lv_19, 2, (MRB_SYM(block), MRB_SYM(hash), ), const);
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_19 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_19,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_19,gem_mrblib_mruby_enum_lazy_proc_reps_19,
  gem_mrblib_mruby_enum_lazy_proc_lv_19,
  NULL,					/* debug_info */
  24,0,2,1,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_6[13] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_7,
  &gem_mrblib_mruby_enum_lazy_proc_irep_8,
  &gem_mrblib_mruby_enum_lazy_proc_irep_9,
  &gem_mrblib_mruby_enum_lazy_proc_irep_10,
  &gem_mrblib_mruby_enum_lazy_proc_irep_11,
  &gem_mrblib_mruby_enum_lazy_proc_irep_12,
  &gem_mrblib_mruby_enum_lazy_proc_irep_13,
  &gem_mrblib_mruby_enum_lazy_proc_irep_14,
  &gem_mrblib_mruby_enum_lazy_proc_irep_15,
  &gem_mrblib_mruby_enum_lazy_proc_irep_16,
  &gem_mrblib_mruby_enum_lazy_proc_irep_17,
  &gem_mrblib_mruby_enum_lazy_proc_irep_18,
  &gem_mrblib_mruby_enum_lazy_proc_irep_19,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_6, 19, (MRB_SYM(initialize), MRB_SYM(to_enum), MRB_SYM(enum_for), MRB_SYM(map), MRB_SYM(collect), MRB_SYM(select), MRB_SYM(find_all), MRB_SYM(reject), MRB_SYM(grep), MRB_SYM(drop), MRB_SYM(drop_while), MRB_SYM(take), MRB_SYM(take_while), MRB_SYM(flat_map), MRB_SYM(collect_concat), MRB_SYM(zip), MRB_SYM(uniq), MRB_SYM(force), MRB_SYM(to_a), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_6[123] = {
0x68,0x01,0x5b,0x02,0x00,0x64,0x01,0x00,0x68,0x01,0x5b,0x02,0x01,0x64,0x01,0x01,0x65,0x02,0x01,0x68,
0x01,0x5b,0x02,0x02,0x64,0x01,0x03,0x65,0x04,0x03,0x68,0x01,0x5b,0x02,0x03,0x64,0x01,0x05,0x65,0x06,
0x05,0x68,0x01,0x5b,0x02,0x04,0x64,0x01,0x07,0x68,0x01,0x5b,0x02,0x05,0x64,0x01,0x08,0x68,0x01,0x5b,
0x02,0x06,0x64,0x01,0x09,0x68,0x01,0x5b,0x02,0x07,0x64,0x01,0x0a,0x68,0x01,0x5b,0x02,0x08,0x64,0x01,
0x0b,0x68,0x01,0x5b,0x02,0x09,0x64,0x01,0x0c,0x68,0x01,0x5b,0x02,0x0a,0x64,0x01,0x0d,0x65,0x0e,0x0d,
0x68,0x01,0x5b,0x02,0x0b,0x64,0x01,0x0f,0x68,0x01,0x5b,0x02,0x0c,0x64,0x01,0x10,0x65,0x11,0x12,0x13,
0x01,0x39,0x01,};
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_6 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_6,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_6,gem_mrblib_mruby_enum_lazy_proc_reps_6,
  NULL,					/* lv */
  NULL,					/* debug_info */
  123,0,19,13,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_2[1] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_6,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_2, 2, (MRB_SYM(Enumerator), MRB_SYM(Lazy), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_2[13] = {
0x13,0x01,0x1f,0x02,0x00,0x60,0x01,0x01,0x62,0x01,0x00,0x39,0x01,};
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_2 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_2,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_2,gem_mrblib_mruby_enum_lazy_proc_reps_2,
  NULL,					/* lv */
  NULL,					/* debug_info */
  13,0,2,1,0
};
static const mrb_irep *gem_mrblib_mruby_enum_lazy_proc_reps_0[2] = {
  &gem_mrblib_mruby_enum_lazy_proc_irep_1,
  &gem_mrblib_mruby_enum_lazy_proc_irep_2,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_enum_lazy_proc_syms_0, 2, (MRB_SYM(Enumerable), MRB_SYM(Enumerator), ), const);
static const mrb_code gem_mrblib_mruby_enum_lazy_proc_iseq_0[21] = {
0x13,0x01,0x61,0x01,0x00,0x62,0x01,0x00,0x13,0x01,0x13,0x02,0x60,0x01,0x01,0x62,0x01,0x01,0x39,0x01,
0x6b,};
static const mrb_irep gem_mrblib_mruby_enum_lazy_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_enum_lazy_proc_iseq_0,
  NULL,gem_mrblib_mruby_enum_lazy_proc_syms_0,gem_mrblib_mruby_enum_lazy_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  21,0,2,2,0
};
static
const struct RProc gem_mrblib_mruby_enum_lazy_proc[] = {{
NULL,NULL,MRB_TT_PROC,7,0,{&gem_mrblib_mruby_enum_lazy_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_enum_lazy_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_enum_lazy_gem_init(mrb_state *mrb);
void mrb_mruby_enum_lazy_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_enum_lazy_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_enum_lazy_proc_init_syms(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_enum_lazy_proc);
  if (mrb->exc) {
    mrb_print_error(mrb);
    mrb_close(mrb);
    exit(EXIT_FAILURE);
  }
  struct REnv *e = mrb_vm_ci_env(mrb->c->cibase);
  mrb_vm_ci_env_set(mrb->c->cibase, NULL);
  mrb_env_unshare(mrb, e);
  mrb_gc_arena_restore(mrb, ai);
}

void GENERATED_TMP_mrb_mruby_enum_lazy_gem_final(mrb_state *mrb) {
}
