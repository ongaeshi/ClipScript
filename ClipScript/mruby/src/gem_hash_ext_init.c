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

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_24, 1, (MRB_OPSYM(aset), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_24[23] = {
0x35,0x08,0x00,0x00,0x01,0x04,0x02,0x23,0x05,0x05,0x00,0x01,0x06,0x01,0x01,0x07,0x04,0x2f,0x05,0x00,
0x02,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_24, 3, (MRB_SYM(k), MRB_SYM(v), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_24 = {
  4,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_24,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_24,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_24,
  NULL,					/* debug_info */
  23,0,1,0,0
};
static const mrb_pool_value gem_mrblib_mruby_hash_ext_proc_pool_25[4] = {
{IREP_TT_STR|(19<<2), {"\x77\x72\x6f\x6e\x67\x20\x65\x6c\x65\x6d\x65\x6e\x74\x20\x74\x79\x70\x65\x20"}},
{IREP_TT_STR|(17<<2), {"\x20\x28\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x72\x72\x61\x79\x29"}},
{IREP_TT_STR|(28<<2), {"\x69\x6e\x76\x61\x6c\x69\x64\x20\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x65\x6c\x65\x6d\x65\x6e\x74\x73\x20\x28"}},
{IREP_TT_STR|(10<<2), {"\x20\x66\x6f\x72\x20\x31\x2e\x2e\x32\x29"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_25, 9, (MRB_SYM(to_a), MRB_SYM_Q(respond_to), MRB_SYM(ArgumentError), MRB_SYM(class), MRB_SYM(raise), MRB_SYM(size), MRB_OPSYM(eqq), MRB_OPSYM(aref), MRB_OPSYM(aset), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_25[189] = {
0x35,0x04,0x00,0x00,0x01,0x05,0x01,0x11,0x06,0x00,0x2f,0x05,0x01,0x01,0x26,0x05,0x00,0x1a,0x14,0x05,
0x1f,0x06,0x02,0x51,0x07,0x00,0x01,0x08,0x01,0x2f,0x08,0x03,0x00,0x53,0x07,0x51,0x08,0x01,0x53,0x07,
0x2f,0x05,0x04,0x02,0x13,0x05,0x4d,0x06,0x05,0x00,0x01,0x03,0x06,0x4d,0x06,0x05,0x01,0x01,0x04,0x06,
0x01,0x05,0x01,0x2f,0x05,0x05,0x00,0x09,0x06,0x01,0x07,0x05,0x2f,0x06,0x06,0x01,0x26,0x06,0x00,0x03,
0x25,0x00,0x1b,0x01,0x06,0x01,0x07,0x07,0x2f,0x06,0x07,0x01,0x01,0x03,0x06,0x01,0x06,0x01,0x08,0x07,
0x2f,0x06,0x07,0x01,0x01,0x04,0x06,0x25,0x00,0x3c,0x08,0x06,0x01,0x07,0x05,0x2f,0x06,0x06,0x01,0x26,
0x06,0x00,0x03,0x25,0x00,0x0f,0x01,0x06,0x01,0x07,0x07,0x2f,0x06,0x07,0x01,0x01,0x03,0x06,0x25,0x00,
0x1d,0x14,0x06,0x1f,0x07,0x02,0x51,0x08,0x02,0x01,0x09,0x01,0x2f,0x09,0x05,0x00,0x53,0x08,0x51,0x09,
0x03,0x53,0x08,0x2f,0x06,0x04,0x02,0x25,0x00,0x00,0x01,0x05,0x04,0x23,0x06,0x05,0x00,0x01,0x07,0x03,
0x01,0x08,0x05,0x2f,0x06,0x08,0x02,0x39,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_25, 4, (MRB_SYM(i), MRB_OPSYM(and), MRB_SYM(k), MRB_SYM(v), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_25 = {
  5,11,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_25,
  gem_mrblib_mruby_hash_ext_proc_pool_25,gem_mrblib_mruby_hash_ext_proc_syms_25,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_25,
  NULL,					/* debug_info */
  189,4,9,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_26, 2, (MRB_OPSYM(aref), MRB_OPSYM(aset), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_26[42] = {
0x35,0x04,0x00,0x00,0x23,0x03,0x01,0x00,0x01,0x04,0x01,0x3e,0x04,0x01,0x2f,0x03,0x00,0x01,0x23,0x04,
0x05,0x00,0x23,0x05,0x01,0x00,0x01,0x06,0x01,0x2f,0x05,0x00,0x01,0x01,0x06,0x03,0x2f,0x04,0x01,0x02,
0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_26, 2, (MRB_SYM(i), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_26 = {
  3,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_26,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_26,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_26,
  NULL,					/* debug_info */
  42,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_2[3] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_24,
  &gem_mrblib_mruby_hash_ext_proc_irep_25,
  &gem_mrblib_mruby_hash_ext_proc_irep_26,
};
static const mrb_pool_value gem_mrblib_mruby_hash_ext_proc_pool_2[1] = {
{IREP_TT_STR|(32<<2), {"\x6f\x64\x64\x20\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x20\x66\x6f\x72\x20\x48\x61\x73\x68"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_2, 12, (MRB_SYM(length), MRB_OPSYM(aref), MRB_SYM(Hash), MRB_OPSYM(eqq), MRB_SYM(new), MRB_SYM(each), MRB_SYM(to_a), MRB_SYM_Q(respond_to), MRB_OPSYM(mod), MRB_SYM(ArgumentError), MRB_SYM(raise), MRB_SYM(step), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_2[168] = {
0x35,0x00,0x10,0x00,0x01,0x06,0x01,0x2f,0x06,0x00,0x00,0x01,0x03,0x06,0x08,0x07,0x43,0x06,0x27,0x06,
0x00,0x59,0x01,0x06,0x01,0x07,0x07,0x2f,0x06,0x01,0x01,0x01,0x04,0x06,0x1f,0x06,0x02,0x01,0x07,0x04,
0x2f,0x06,0x03,0x01,0x27,0x06,0x00,0x18,0x14,0x06,0x2f,0x06,0x04,0x00,0x01,0x05,0x06,0x01,0x06,0x04,
0x59,0x07,0x00,0x30,0x06,0x05,0x00,0x39,0x05,0x25,0x00,0x27,0x01,0x06,0x04,0x11,0x07,0x06,0x2f,0x06,
0x07,0x01,0x27,0x06,0x00,0x19,0x14,0x06,0x2f,0x06,0x04,0x00,0x01,0x05,0x06,0x01,0x06,0x04,0x2f,0x06,
0x06,0x00,0x59,0x07,0x01,0x30,0x06,0x05,0x00,0x39,0x05,0x01,0x06,0x03,0x09,0x07,0x2f,0x06,0x08,0x01,
0x07,0x07,0x43,0x06,0x26,0x06,0x00,0x0c,0x14,0x06,0x1f,0x07,0x09,0x51,0x08,0x00,0x2f,0x06,0x0a,0x02,
0x14,0x06,0x2f,0x06,0x04,0x00,0x01,0x05,0x06,0x07,0x06,0x01,0x07,0x03,0x40,0x07,0x02,0x09,0x08,0x59,
0x09,0x02,0x30,0x06,0x0b,0x02,0x39,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_2, 5, (MRB_SYM(object), MRB_OPSYM(and), MRB_SYM(length), MRB_SYM(o), MRB_SYM(h), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_2 = {
  6,10,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_2,
  gem_mrblib_mruby_hash_ext_proc_pool_2,gem_mrblib_mruby_hash_ext_proc_syms_2,gem_mrblib_mruby_hash_ext_proc_reps_2,
  gem_mrblib_mruby_hash_ext_proc_lv_2,
  NULL,					/* debug_info */
  168,1,12,3,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_55, 4, (MRB_SYM_Q(has_key), MRB_OPSYM(aref), MRB_SYM(call), MRB_OPSYM(aset), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_55[76] = {
0x35,0x04,0x00,0x00,0x14,0x03,0x01,0x04,0x01,0x2f,0x03,0x00,0x01,0x27,0x03,0x00,0x22,0x23,0x03,0x02,
0x00,0x01,0x04,0x01,0x14,0x05,0x01,0x06,0x01,0x2f,0x05,0x01,0x01,0x23,0x06,0x01,0x00,0x01,0x07,0x01,
0x2f,0x06,0x01,0x01,0x2f,0x03,0x02,0x03,0x25,0x00,0x0b,0x23,0x03,0x01,0x00,0x01,0x04,0x01,0x2f,0x03,
0x01,0x01,0x14,0x04,0x01,0x05,0x01,0x01,0x06,0x03,0x2f,0x04,0x03,0x02,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_55, 2, (MRB_SYM(k), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_55 = {
  3,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_55,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_55,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_55,
  NULL,					/* debug_info */
  76,0,4,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_56, 2, (MRB_OPSYM(aref), MRB_OPSYM(aset), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_56[29] = {
0x35,0x04,0x00,0x00,0x23,0x03,0x01,0x00,0x01,0x04,0x01,0x2f,0x03,0x00,0x01,0x14,0x04,0x01,0x05,0x01,
0x01,0x06,0x03,0x2f,0x04,0x01,0x02,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_56, 2, (MRB_SYM(k), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_56 = {
  3,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_56,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_56,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_56,
  NULL,					/* debug_info */
  29,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_3[2] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_55,
  &gem_mrblib_mruby_hash_ext_proc_irep_56,
};
static const mrb_pool_value gem_mrblib_mruby_hash_ext_proc_pool_3[2] = {
{IREP_TT_STR|(15<<2), {"\x48\x61\x73\x68\x20\x72\x65\x71\x75\x69\x72\x65\x64\x20\x28"}},
{IREP_TT_STR|(7<<2), {"\x20\x67\x69\x76\x65\x6e\x29"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_3, 6, (MRB_SYM(Hash), MRB_OPSYM(eqq), MRB_SYM(TypeError), MRB_SYM(class), MRB_SYM(raise), MRB_SYM(each_key), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_3[75] = {
0x35,0x04,0x00,0x01,0x1f,0x03,0x00,0x01,0x04,0x01,0x2f,0x03,0x01,0x01,0x26,0x03,0x00,0x1a,0x14,0x03,
0x1f,0x04,0x02,0x51,0x05,0x00,0x01,0x06,0x01,0x2f,0x06,0x03,0x00,0x53,0x05,0x51,0x06,0x01,0x53,0x05,
0x2f,0x03,0x04,0x02,0x27,0x02,0x00,0x0d,0x01,0x03,0x01,0x59,0x04,0x00,0x30,0x03,0x05,0x00,0x25,0x00,
0x0a,0x01,0x03,0x01,0x59,0x04,0x01,0x30,0x03,0x05,0x00,0x14,0x03,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_3, 2, (MRB_SYM(other), MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_3 = {
  3,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_3,
  gem_mrblib_mruby_hash_ext_proc_pool_3,gem_mrblib_mruby_hash_ext_proc_syms_3,gem_mrblib_mruby_hash_ext_proc_reps_3,
  gem_mrblib_mruby_hash_ext_proc_lv_3,
  NULL,					/* debug_info */
  75,2,6,2,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_81, 2, (MRB_OPSYM(aref), MRB_OPSYM(neq), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_81[21] = {
0x35,0x04,0x00,0x00,0x14,0x03,0x01,0x04,0x01,0x2f,0x03,0x00,0x01,0x13,0x04,0x2f,0x03,0x01,0x01,0x39,
0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_81, 2, (MRB_SYM(k), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_81 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_81,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_81,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_81,
  NULL,					/* debug_info */
  21,0,2,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_82, 2, (MRB_OPSYM(aref), MRB_OPSYM(aset), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_82[29] = {
0x35,0x04,0x00,0x00,0x14,0x03,0x01,0x04,0x01,0x2f,0x03,0x00,0x01,0x23,0x04,0x04,0x00,0x01,0x05,0x01,
0x01,0x06,0x03,0x2f,0x04,0x01,0x02,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_82, 2, (MRB_SYM(k), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_82 = {
  3,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_82,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_82,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_82,
  NULL,					/* debug_info */
  29,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_4[2] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_81,
  &gem_mrblib_mruby_hash_ext_proc_irep_82,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_4, 5, (MRB_SYM(keys), MRB_SYM(select), MRB_SYM(size), MRB_SYM(each), MRB_SYM(replace), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_4[74] = {
0x35,0x00,0x00,0x00,0x14,0x05,0x2f,0x05,0x00,0x00,0x01,0x02,0x05,0x59,0x06,0x00,0x30,0x05,0x01,0x00,
0x01,0x03,0x05,0x01,0x05,0x02,0x2f,0x05,0x02,0x00,0x01,0x06,0x03,0x2f,0x06,0x02,0x00,0x43,0x05,0x27,
0x05,0x00,0x04,0x13,0x05,0x39,0x05,0x54,0x05,0x00,0x01,0x04,0x05,0x01,0x05,0x03,0x59,0x06,0x01,0x30,
0x05,0x03,0x00,0x14,0x05,0x01,0x06,0x04,0x2f,0x05,0x04,0x01,0x39,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_4, 4, (MRB_OPSYM(and), MRB_SYM(keys), MRB_SYM(nk), MRB_SYM(h), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_4 = {
  5,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_4,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_4,gem_mrblib_mruby_hash_ext_proc_reps_4,
  gem_mrblib_mruby_hash_ext_proc_lv_4,
  NULL,					/* debug_info */
  74,0,5,2,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_107, 2, (MRB_OPSYM(aref), MRB_OPSYM(neq), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_107[21] = {
0x35,0x04,0x00,0x00,0x14,0x03,0x01,0x04,0x01,0x2f,0x03,0x00,0x01,0x13,0x04,0x2f,0x03,0x01,0x01,0x39,
0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_107, 2, (MRB_SYM(k), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_107 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_107,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_107,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_107,
  NULL,					/* debug_info */
  21,0,2,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_108, 2, (MRB_OPSYM(aref), MRB_OPSYM(aset), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_108[29] = {
0x35,0x04,0x00,0x00,0x14,0x03,0x01,0x04,0x01,0x2f,0x03,0x00,0x01,0x23,0x04,0x02,0x00,0x01,0x05,0x01,
0x01,0x06,0x03,0x2f,0x04,0x01,0x02,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_108, 2, (MRB_SYM(k), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_108 = {
  3,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_108,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_108,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_108,
  NULL,					/* debug_info */
  29,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_5[2] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_107,
  &gem_mrblib_mruby_hash_ext_proc_irep_108,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_5, 3, (MRB_SYM(keys), MRB_SYM(select), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_5[32] = {
0x35,0x00,0x00,0x00,0x54,0x03,0x00,0x01,0x02,0x03,0x14,0x03,0x2f,0x03,0x00,0x00,0x59,0x04,0x00,0x30,
0x03,0x01,0x00,0x59,0x04,0x01,0x30,0x03,0x02,0x00,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_5, 2, (MRB_OPSYM(and), MRB_SYM(h), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_5 = {
  3,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_5,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_5,gem_mrblib_mruby_hash_ext_proc_reps_5,
  gem_mrblib_mruby_hash_ext_proc_lv_5,
  NULL,					/* debug_info */
  32,0,3,2,0
};
static const mrb_pool_value gem_mrblib_mruby_hash_ext_proc_pool_6[2] = {
{IREP_TT_STR|(15<<2), {"\x4b\x65\x79\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64\x3a\x20"}},
{IREP_TT_STR|(0<<2), {""}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_6, 8, (MRB_SYM(NONE), MRB_SYM_Q(key), MRB_OPSYM(aref), MRB_SYM(call), MRB_OPSYM(neq), MRB_SYM(KeyError), MRB_SYM(inspect), MRB_SYM(raise), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_6[106] = {
0x35,0x04,0x20,0x01,0x25,0x00,0x03,0x25,0x00,0x03,0x1f,0x02,0x00,0x14,0x04,0x01,0x05,0x01,0x2f,0x04,
0x01,0x01,0x27,0x04,0x00,0x0c,0x14,0x04,0x01,0x05,0x01,0x2f,0x04,0x02,0x01,0x25,0x00,0x42,0x01,0x04,
0x03,0x27,0x04,0x00,0x0d,0x01,0x04,0x03,0x01,0x05,0x01,0x2f,0x04,0x03,0x01,0x25,0x00,0x2e,0x01,0x04,
0x02,0x1f,0x05,0x00,0x2f,0x04,0x04,0x01,0x27,0x04,0x00,0x06,0x01,0x04,0x02,0x25,0x00,0x1a,0x14,0x04,
0x1f,0x05,0x05,0x51,0x06,0x00,0x01,0x07,0x01,0x2f,0x07,0x06,0x00,0x53,0x06,0x51,0x07,0x01,0x53,0x06,
0x2f,0x04,0x07,0x02,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_6, 3, (MRB_SYM(key), MRB_SYM(none), MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_6 = {
  4,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_6,
  gem_mrblib_mruby_hash_ext_proc_pool_6,gem_mrblib_mruby_hash_ext_proc_syms_6,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_6,
  NULL,					/* debug_info */
  106,2,8,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_155, 2, (MRB_SYM(call), MRB_SYM(delete), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_155[38] = {
0x35,0x08,0x00,0x00,0x23,0x04,0x01,0x00,0x01,0x05,0x01,0x01,0x06,0x02,0x2f,0x04,0x00,0x02,0x27,0x04,
0x00,0x0c,0x14,0x04,0x01,0x05,0x01,0x2f,0x04,0x01,0x01,0x25,0x00,0x02,0x13,0x04,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_155, 3, (MRB_SYM(k), MRB_SYM(v), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_155 = {
  4,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_155,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_155,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_155,
  NULL,					/* debug_info */
  38,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_7[1] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_155,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_7, 3, (MRB_SYM(delete_if), MRB_SYM(to_enum), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_7[32] = {
0x35,0x00,0x00,0x01,0x26,0x01,0x00,0x0b,0x14,0x02,0x11,0x03,0x00,0x2f,0x02,0x01,0x01,0x39,0x02,0x14,
0x02,0x59,0x03,0x00,0x30,0x02,0x02,0x00,0x14,0x02,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_7, 1, (MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_7 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_7,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_7,gem_mrblib_mruby_hash_ext_proc_reps_7,
  gem_mrblib_mruby_hash_ext_proc_lv_7,
  NULL,					/* debug_info */
  32,0,3,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_8, 2, (MRB_SYM(to_a), MRB_SYM(flatten), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_8[27] = {
0x35,0x00,0x20,0x00,0x25,0x00,0x03,0x25,0x00,0x02,0x08,0x01,0x14,0x03,0x2f,0x03,0x00,0x00,0x01,0x04,
0x01,0x2f,0x03,0x01,0x01,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_8, 2, (MRB_SYM(level), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_8 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_8,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_8,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_8,
  NULL,					/* debug_info */
  27,0,2,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_200, 1, (MRB_OPSYM(aset), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_200[23] = {
0x35,0x08,0x00,0x00,0x01,0x04,0x01,0x23,0x05,0x02,0x00,0x01,0x06,0x02,0x01,0x07,0x04,0x2f,0x05,0x00,
0x02,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_200, 3, (MRB_SYM(k), MRB_SYM(v), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_200 = {
  4,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_200,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_200,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_200,
  NULL,					/* debug_info */
  23,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_9[1] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_200,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_9, 3, (MRB_SYM(class), MRB_SYM(new), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_9[28] = {
0x35,0x00,0x00,0x00,0x14,0x03,0x2f,0x03,0x00,0x00,0x2f,0x03,0x01,0x00,0x01,0x02,0x03,0x14,0x03,0x59,
0x04,0x00,0x30,0x03,0x02,0x00,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_9, 2, (MRB_OPSYM(and), MRB_SYM(h), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_9 = {
  3,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_9,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_9,gem_mrblib_mruby_hash_ext_proc_reps_9,
  gem_mrblib_mruby_hash_ext_proc_lv_9,
  NULL,					/* debug_info */
  28,0,3,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_223, 2, (MRB_SYM(call), MRB_SYM(delete), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_223[41] = {
0x35,0x08,0x00,0x00,0x23,0x04,0x01,0x00,0x01,0x05,0x01,0x01,0x06,0x02,0x48,0x05,0x02,0x2f,0x04,0x00,
0x01,0x27,0x04,0x00,0x05,0x13,0x04,0x25,0x00,0x09,0x14,0x04,0x01,0x05,0x01,0x2f,0x04,0x01,0x01,0x39,
0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_223, 3, (MRB_SYM(k), MRB_SYM(v), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_223 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_223,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_223,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_223,
  NULL,					/* debug_info */
  41,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_10[1] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_223,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_10, 3, (MRB_SYM(keep_if), MRB_SYM(to_enum), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_10[38] = {
0x35,0x00,0x00,0x01,0x26,0x01,0x00,0x0b,0x14,0x03,0x11,0x04,0x00,0x2f,0x03,0x01,0x01,0x39,0x03,0x48,
0x03,0x00,0x01,0x02,0x03,0x14,0x03,0x59,0x04,0x00,0x30,0x03,0x02,0x00,0x14,0x03,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_10, 2, (MRB_SYM(block), MRB_SYM(keys), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_10 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_10,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_10,gem_mrblib_mruby_hash_ext_proc_reps_10,
  gem_mrblib_mruby_hash_ext_proc_lv_10,
  NULL,					/* debug_info */
  38,0,3,1,0
};
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_246[26] = {
0x35,0x08,0x00,0x00,0x01,0x04,0x02,0x23,0x05,0x01,0x00,0x43,0x04,0x27,0x04,0x00,0x05,0x3a,0x01,0x25,
0x00,0x02,0x13,0x04,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_246, 3, (MRB_SYM(k), MRB_SYM(v), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_246 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_246,
  NULL,NULL,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_246,
  NULL,					/* debug_info */
  26,0,0,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_11[1] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_246,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_11, 1, (MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_11[17] = {
0x35,0x04,0x00,0x00,0x14,0x03,0x59,0x04,0x00,0x30,0x03,0x00,0x00,0x13,0x03,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_11, 2, (MRB_SYM(val), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_11 = {
  3,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_11,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_11,gem_mrblib_mruby_hash_ext_proc_reps_11,
  gem_mrblib_mruby_hash_ext_proc_lv_11,
  NULL,					/* debug_info */
  17,0,1,1,0
};
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_12[8] = {
0x35,0x00,0x00,0x00,0x14,0x02,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_12, 1, (MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_12 = {
  2,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_12,
  NULL,NULL,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_12,
  NULL,					/* debug_info */
  8,0,0,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_291, 2, (MRB_SYM_Q(key), MRB_OPSYM(aref), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_291[37] = {
0x35,0x08,0x00,0x00,0x23,0x04,0x01,0x00,0x01,0x05,0x01,0x2f,0x04,0x00,0x01,0x27,0x04,0x00,0x10,0x23,
0x04,0x01,0x00,0x01,0x05,0x01,0x2f,0x04,0x01,0x01,0x01,0x05,0x02,0x43,0x04,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_291, 3, (MRB_SYM(key), MRB_SYM(val), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_291 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_291,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_291,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_291,
  NULL,					/* debug_info */
  37,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_13[1] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_291,
};
static const mrb_pool_value gem_mrblib_mruby_hash_ext_proc_pool_13[2] = {
{IREP_TT_STR|(14<<2), {"\x63\x61\x6e\x27\x74\x20\x63\x6f\x6e\x76\x65\x72\x74\x20"}},
{IREP_TT_STR|(8<<2), {"\x20\x74\x6f\x20\x48\x61\x73\x68"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_13, 7, (MRB_SYM(Hash), MRB_OPSYM(eqq), MRB_SYM(TypeError), MRB_SYM(class), MRB_SYM(raise), MRB_SYM(size), MRB_SYM_Q(all), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_13[74] = {
0x35,0x04,0x00,0x00,0x1f,0x03,0x00,0x01,0x04,0x01,0x2f,0x03,0x01,0x01,0x26,0x03,0x00,0x1a,0x14,0x03,
0x1f,0x04,0x02,0x51,0x05,0x00,0x01,0x06,0x01,0x2f,0x06,0x03,0x00,0x53,0x05,0x51,0x06,0x01,0x53,0x05,
0x2f,0x03,0x04,0x02,0x14,0x03,0x2f,0x03,0x05,0x00,0x01,0x04,0x01,0x2f,0x04,0x05,0x00,0x44,0x03,0x27,
0x03,0x00,0x09,0x14,0x03,0x59,0x04,0x00,0x30,0x03,0x06,0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_13, 2, (MRB_SYM(hash), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_13 = {
  3,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_13,
  gem_mrblib_mruby_hash_ext_proc_pool_13,gem_mrblib_mruby_hash_ext_proc_syms_13,gem_mrblib_mruby_hash_ext_proc_reps_13,
  gem_mrblib_mruby_hash_ext_proc_lv_13,
  NULL,					/* debug_info */
  74,2,7,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_314, 2, (MRB_SYM_Q(key), MRB_OPSYM(aref), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_314[37] = {
0x35,0x08,0x00,0x00,0x23,0x04,0x01,0x00,0x01,0x05,0x01,0x2f,0x04,0x00,0x01,0x27,0x04,0x00,0x10,0x23,
0x04,0x01,0x00,0x01,0x05,0x01,0x2f,0x04,0x01,0x01,0x01,0x05,0x02,0x43,0x04,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_314, 3, (MRB_SYM(key), MRB_SYM(val), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_314 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_314,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_314,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_314,
  NULL,					/* debug_info */
  37,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_14[1] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_314,
};
static const mrb_pool_value gem_mrblib_mruby_hash_ext_proc_pool_14[2] = {
{IREP_TT_STR|(14<<2), {"\x63\x61\x6e\x27\x74\x20\x63\x6f\x6e\x76\x65\x72\x74\x20"}},
{IREP_TT_STR|(8<<2), {"\x20\x74\x6f\x20\x48\x61\x73\x68"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_14, 7, (MRB_SYM(Hash), MRB_OPSYM(eqq), MRB_SYM(TypeError), MRB_SYM(class), MRB_SYM(raise), MRB_SYM(size), MRB_SYM_Q(all), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_14[74] = {
0x35,0x04,0x00,0x00,0x1f,0x03,0x00,0x01,0x04,0x01,0x2f,0x03,0x01,0x01,0x26,0x03,0x00,0x1a,0x14,0x03,
0x1f,0x04,0x02,0x51,0x05,0x00,0x01,0x06,0x01,0x2f,0x06,0x03,0x00,0x53,0x05,0x51,0x06,0x01,0x53,0x05,
0x2f,0x03,0x04,0x02,0x14,0x03,0x2f,0x03,0x05,0x00,0x01,0x04,0x01,0x2f,0x04,0x05,0x00,0x45,0x03,0x27,
0x03,0x00,0x09,0x14,0x03,0x59,0x04,0x00,0x30,0x03,0x06,0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_14, 2, (MRB_SYM(hash), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_14 = {
  3,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_14,
  gem_mrblib_mruby_hash_ext_proc_pool_14,gem_mrblib_mruby_hash_ext_proc_syms_14,gem_mrblib_mruby_hash_ext_proc_reps_14,
  gem_mrblib_mruby_hash_ext_proc_lv_14,
  NULL,					/* debug_info */
  74,2,7,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_337, 2, (MRB_SYM_Q(key), MRB_OPSYM(aref), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_337[33] = {
0x35,0x08,0x00,0x00,0x14,0x04,0x01,0x05,0x01,0x2f,0x04,0x00,0x01,0x27,0x04,0x00,0x0e,0x14,0x04,0x01,
0x05,0x01,0x2f,0x04,0x01,0x01,0x01,0x05,0x02,0x43,0x04,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_337, 3, (MRB_SYM(key), MRB_SYM(val), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_337 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_337,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_337,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_337,
  NULL,					/* debug_info */
  33,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_15[1] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_337,
};
static const mrb_pool_value gem_mrblib_mruby_hash_ext_proc_pool_15[2] = {
{IREP_TT_STR|(14<<2), {"\x63\x61\x6e\x27\x74\x20\x63\x6f\x6e\x76\x65\x72\x74\x20"}},
{IREP_TT_STR|(8<<2), {"\x20\x74\x6f\x20\x48\x61\x73\x68"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_15, 7, (MRB_SYM(Hash), MRB_OPSYM(eqq), MRB_SYM(TypeError), MRB_SYM(class), MRB_SYM(raise), MRB_SYM(size), MRB_SYM_Q(all), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_15[75] = {
0x35,0x04,0x00,0x00,0x1f,0x03,0x00,0x01,0x04,0x01,0x2f,0x03,0x01,0x01,0x26,0x03,0x00,0x1a,0x14,0x03,
0x1f,0x04,0x02,0x51,0x05,0x00,0x01,0x06,0x01,0x2f,0x06,0x03,0x00,0x53,0x05,0x51,0x06,0x01,0x53,0x05,
0x2f,0x03,0x04,0x02,0x14,0x03,0x2f,0x03,0x05,0x00,0x01,0x04,0x01,0x2f,0x04,0x05,0x00,0x46,0x03,0x27,
0x03,0x00,0x0a,0x01,0x03,0x01,0x59,0x04,0x00,0x30,0x03,0x06,0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_15, 2, (MRB_SYM(hash), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_15 = {
  3,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_15,
  gem_mrblib_mruby_hash_ext_proc_pool_15,gem_mrblib_mruby_hash_ext_proc_syms_15,gem_mrblib_mruby_hash_ext_proc_reps_15,
  gem_mrblib_mruby_hash_ext_proc_lv_15,
  NULL,					/* debug_info */
  75,2,7,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_360, 2, (MRB_SYM_Q(key), MRB_OPSYM(aref), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_360[33] = {
0x35,0x08,0x00,0x00,0x14,0x04,0x01,0x05,0x01,0x2f,0x04,0x00,0x01,0x27,0x04,0x00,0x0e,0x14,0x04,0x01,
0x05,0x01,0x2f,0x04,0x01,0x01,0x01,0x05,0x02,0x43,0x04,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_360, 3, (MRB_SYM(key), MRB_SYM(val), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_360 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_360,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_360,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_360,
  NULL,					/* debug_info */
  33,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_16[1] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_360,
};
static const mrb_pool_value gem_mrblib_mruby_hash_ext_proc_pool_16[2] = {
{IREP_TT_STR|(14<<2), {"\x63\x61\x6e\x27\x74\x20\x63\x6f\x6e\x76\x65\x72\x74\x20"}},
{IREP_TT_STR|(8<<2), {"\x20\x74\x6f\x20\x48\x61\x73\x68"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_16, 7, (MRB_SYM(Hash), MRB_OPSYM(eqq), MRB_SYM(TypeError), MRB_SYM(class), MRB_SYM(raise), MRB_SYM(size), MRB_SYM_Q(all), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_16[75] = {
0x35,0x04,0x00,0x00,0x1f,0x03,0x00,0x01,0x04,0x01,0x2f,0x03,0x01,0x01,0x26,0x03,0x00,0x1a,0x14,0x03,
0x1f,0x04,0x02,0x51,0x05,0x00,0x01,0x06,0x01,0x2f,0x06,0x03,0x00,0x53,0x05,0x51,0x06,0x01,0x53,0x05,
0x2f,0x03,0x04,0x02,0x14,0x03,0x2f,0x03,0x05,0x00,0x01,0x04,0x01,0x2f,0x04,0x05,0x00,0x47,0x03,0x27,
0x03,0x00,0x0a,0x01,0x03,0x01,0x59,0x04,0x00,0x30,0x03,0x06,0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_16, 2, (MRB_SYM(hash), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_16 = {
  3,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_16,
  gem_mrblib_mruby_hash_ext_proc_pool_16,gem_mrblib_mruby_hash_ext_proc_syms_16,gem_mrblib_mruby_hash_ext_proc_reps_16,
  gem_mrblib_mruby_hash_ext_proc_lv_16,
  NULL,					/* debug_info */
  75,2,7,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_17, 3, (MRB_OPSYM(aref), MRB_SYM(size), MRB_SYM(dig), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_17[59] = {
0x35,0x04,0x10,0x00,0x14,0x05,0x01,0x06,0x01,0x2f,0x05,0x00,0x01,0x01,0x04,0x05,0x01,0x05,0x02,0x2f,
0x05,0x01,0x00,0x07,0x06,0x46,0x05,0x27,0x05,0x00,0x17,0x01,0x05,0x04,0x01,0x06,0x05,0x28,0x06,0x00,
0x0a,0x13,0x06,0x01,0x07,0x02,0x4a,0x06,0x2d,0x05,0x02,0x25,0x00,0x03,0x01,0x05,0x04,0x39,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_17, 4, (MRB_SYM(idx), MRB_SYM(args), MRB_OPSYM(and), MRB_SYM(n), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_17 = {
  5,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_17,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_17,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_17,
  NULL,					/* debug_info */
  59,0,3,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_405, 3, (MRB_SYM(call), MRB_OPSYM(aref), MRB_OPSYM(aset), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_405[43] = {
0x35,0x04,0x00,0x00,0x23,0x04,0x01,0x00,0x01,0x05,0x01,0x2f,0x04,0x00,0x01,0x01,0x03,0x04,0x14,0x04,
0x01,0x05,0x01,0x2f,0x04,0x01,0x01,0x23,0x05,0x02,0x00,0x01,0x06,0x03,0x01,0x07,0x04,0x2f,0x05,0x02,
0x02,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_405, 3, (MRB_SYM(k), MRB_OPSYM(and), MRB_SYM(new_key), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_405 = {
  4,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_405,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_405,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_405,
  NULL,					/* debug_info */
  43,0,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_18[1] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_405,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_18, 4, (MRB_SYM(transform_keys), MRB_SYM(to_enum), MRB_SYM(keys), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_18[40] = {
0x35,0x00,0x00,0x01,0x26,0x01,0x00,0x0b,0x14,0x03,0x11,0x04,0x00,0x2f,0x03,0x01,0x01,0x39,0x03,0x54,
0x03,0x00,0x01,0x02,0x03,0x14,0x03,0x2f,0x03,0x02,0x00,0x59,0x04,0x00,0x30,0x03,0x03,0x00,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_18, 2, (MRB_SYM(block), MRB_SYM(hash), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_18 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_18,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_18,gem_mrblib_mruby_hash_ext_proc_reps_18,
  gem_mrblib_mruby_hash_ext_proc_lv_18,
  NULL,					/* debug_info */
  40,0,4,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_428, 4, (MRB_OPSYM(aref), MRB_SYM(__delete), MRB_SYM(call), MRB_OPSYM(aset), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_428[64] = {
0x35,0x04,0x00,0x00,0x14,0x04,0x01,0x05,0x01,0x2f,0x04,0x00,0x01,0x01,0x03,0x04,0x14,0x04,0x01,0x05,
0x01,0x2f,0x04,0x01,0x01,0x23,0x04,0x01,0x00,0x27,0x04,0x00,0x0e,0x23,0x04,0x01,0x00,0x01,0x05,0x01,
0x2f,0x04,0x02,0x01,0x01,0x01,0x04,0x01,0x04,0x03,0x14,0x05,0x01,0x06,0x01,0x01,0x07,0x04,0x2f,0x05,
0x03,0x02,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_428, 3, (MRB_SYM(k), MRB_OPSYM(and), MRB_SYM(value), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_428 = {
  4,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_428,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_428,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_428,
  NULL,					/* debug_info */
  64,0,4,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_19[1] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_428,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_19, 4, (MRB_SYM_B(transform_keys), MRB_SYM(to_enum), MRB_SYM(keys), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_19[36] = {
0x35,0x00,0x00,0x01,0x26,0x01,0x00,0x0b,0x14,0x02,0x11,0x03,0x00,0x2f,0x02,0x01,0x01,0x39,0x02,0x14,
0x02,0x2f,0x02,0x02,0x00,0x59,0x03,0x00,0x30,0x02,0x03,0x00,0x14,0x02,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_19, 1, (MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_19 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_19,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_19,gem_mrblib_mruby_hash_ext_proc_reps_19,
  gem_mrblib_mruby_hash_ext_proc_lv_19,
  NULL,					/* debug_info */
  36,0,4,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_451, 3, (MRB_OPSYM(aref), MRB_SYM(call), MRB_OPSYM(aset), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_451[37] = {
0x35,0x04,0x00,0x00,0x14,0x04,0x01,0x05,0x01,0x2f,0x04,0x00,0x01,0x3c,0x03,0x00,0x01,0x2f,0x03,0x01,
0x01,0x23,0x04,0x02,0x00,0x01,0x05,0x01,0x01,0x06,0x03,0x2f,0x04,0x02,0x02,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_451, 2, (MRB_SYM(k), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_451 = {
  3,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_451,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_451,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_451,
  NULL,					/* debug_info */
  37,0,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_20[1] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_451,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_20, 5, (MRB_SYM_Q(block_given), MRB_SYM(transform_values), MRB_SYM(to_enum), MRB_SYM(keys), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_20[46] = {
0x35,0x00,0x00,0x01,0x14,0x03,0x2f,0x03,0x00,0x00,0x26,0x03,0x00,0x0b,0x14,0x03,0x11,0x04,0x01,0x2f,
0x03,0x02,0x01,0x39,0x03,0x54,0x03,0x00,0x01,0x02,0x03,0x14,0x03,0x2f,0x03,0x03,0x00,0x59,0x04,0x00,
0x30,0x03,0x04,0x00,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_20, 2, (MRB_SYM(b), MRB_SYM(hash), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_20 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_20,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_20,gem_mrblib_mruby_hash_ext_proc_reps_20,
  gem_mrblib_mruby_hash_ext_proc_lv_20,
  NULL,					/* debug_info */
  46,0,5,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_474, 3, (MRB_OPSYM(aref), MRB_SYM(call), MRB_OPSYM(aset), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_474[35] = {
0x35,0x04,0x00,0x00,0x14,0x04,0x01,0x05,0x01,0x2f,0x04,0x00,0x01,0x3c,0x03,0x00,0x01,0x2f,0x03,0x01,
0x01,0x14,0x04,0x01,0x05,0x01,0x01,0x06,0x03,0x2f,0x04,0x02,0x02,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_474, 2, (MRB_SYM(k), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_474 = {
  3,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_474,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_474,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_474,
  NULL,					/* debug_info */
  35,0,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_21[1] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_474,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_21, 5, (MRB_SYM_Q(block_given), MRB_SYM_B(transform_values), MRB_SYM(to_enum), MRB_SYM(keys), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_21[42] = {
0x35,0x00,0x00,0x01,0x14,0x02,0x2f,0x02,0x00,0x00,0x26,0x02,0x00,0x0b,0x14,0x02,0x11,0x03,0x01,0x2f,
0x02,0x02,0x01,0x39,0x02,0x14,0x02,0x2f,0x02,0x03,0x00,0x59,0x03,0x00,0x30,0x02,0x04,0x00,0x14,0x02,
0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_21, 1, (MRB_SYM(b), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_21 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_21,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_21,gem_mrblib_mruby_hash_ext_proc_reps_21,
  gem_mrblib_mruby_hash_ext_proc_lv_21,
  NULL,					/* debug_info */
  42,0,5,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_497, 1, (MRB_OPSYM(aref), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_497[15] = {
0x35,0x04,0x00,0x00,0x14,0x03,0x01,0x04,0x01,0x2f,0x03,0x00,0x01,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_497, 2, (MRB_SYM(x), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_497 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_497,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_497,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_497,
  NULL,					/* debug_info */
  15,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_22[1] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_497,
};
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_22[9] = {
0x35,0x00,0x00,0x00,0x57,0x02,0x00,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_22, 1, (MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_22 = {
  2,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_22,
  NULL,NULL,gem_mrblib_mruby_hash_ext_proc_reps_22,
  gem_mrblib_mruby_hash_ext_proc_lv_22,
  NULL,					/* debug_info */
  9,0,0,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_520, 1, (MRB_SYM(fetch), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_520[19] = {
0x35,0x04,0x00,0x00,0x14,0x03,0x01,0x04,0x01,0x23,0x05,0x02,0x00,0x30,0x03,0x00,0x01,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_520, 2, (MRB_SYM(k), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_520 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_520,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_520,NULL,
  gem_mrblib_mruby_hash_ext_proc_lv_520,
  NULL,					/* debug_info */
  19,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_23[1] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_520,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_23, 1, (MRB_SYM(map), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_23[16] = {
0x35,0x00,0x10,0x01,0x01,0x03,0x01,0x59,0x04,0x00,0x30,0x03,0x00,0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_lv_23, 2, (MRB_SYM(keys), MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_23 = {
  3,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_23,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_23,gem_mrblib_mruby_hash_ext_proc_reps_23,
  gem_mrblib_mruby_hash_ext_proc_lv_23,
  NULL,					/* debug_info */
  16,0,1,1,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_1[22] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_2,
  &gem_mrblib_mruby_hash_ext_proc_irep_3,
  &gem_mrblib_mruby_hash_ext_proc_irep_4,
  &gem_mrblib_mruby_hash_ext_proc_irep_5,
  &gem_mrblib_mruby_hash_ext_proc_irep_6,
  &gem_mrblib_mruby_hash_ext_proc_irep_7,
  &gem_mrblib_mruby_hash_ext_proc_irep_8,
  &gem_mrblib_mruby_hash_ext_proc_irep_9,
  &gem_mrblib_mruby_hash_ext_proc_irep_10,
  &gem_mrblib_mruby_hash_ext_proc_irep_11,
  &gem_mrblib_mruby_hash_ext_proc_irep_12,
  &gem_mrblib_mruby_hash_ext_proc_irep_13,
  &gem_mrblib_mruby_hash_ext_proc_irep_14,
  &gem_mrblib_mruby_hash_ext_proc_irep_15,
  &gem_mrblib_mruby_hash_ext_proc_irep_16,
  &gem_mrblib_mruby_hash_ext_proc_irep_17,
  &gem_mrblib_mruby_hash_ext_proc_irep_18,
  &gem_mrblib_mruby_hash_ext_proc_irep_19,
  &gem_mrblib_mruby_hash_ext_proc_irep_20,
  &gem_mrblib_mruby_hash_ext_proc_irep_21,
  &gem_mrblib_mruby_hash_ext_proc_irep_22,
  &gem_mrblib_mruby_hash_ext_proc_irep_23,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_1, 29, (MRB_SYM(each_pair), MRB_SYM(each), MRB_OPSYM(aref), MRB_SYM_B(merge), MRB_SYM(update), MRB_SYM_B(compact), MRB_SYM(compact), MRB_SYM(fetch), MRB_SYM(delete_if), MRB_SYM(flatten), MRB_SYM(invert), MRB_SYM(keep_if), MRB_SYM(key), MRB_SYM(to_h), MRB_OPSYM(lt), MRB_OPSYM(le), MRB_OPSYM(gt), MRB_OPSYM(ge), MRB_SYM(dig), MRB_SYM(transform_keys), MRB_SYM_B(transform_keys), MRB_SYM(transform_values), MRB_SYM_B(transform_values), MRB_SYM(to_proc), MRB_SYM(fetch_values), MRB_SYM(filter), MRB_SYM(select), MRB_SYM_B(filter), MRB_SYM_B(select), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_1[194] = {
0x65,0x00,0x01,0x14,0x01,0x67,0x01,0x5b,0x02,0x00,0x64,0x01,0x02,0x68,0x01,0x5b,0x02,0x01,0x64,0x01,
0x03,0x65,0x04,0x03,0x68,0x01,0x5b,0x02,0x02,0x64,0x01,0x05,0x68,0x01,0x5b,0x02,0x03,0x64,0x01,0x06,
0x68,0x01,0x5b,0x02,0x04,0x64,0x01,0x07,0x68,0x01,0x5b,0x02,0x05,0x64,0x01,0x08,0x68,0x01,0x5b,0x02,
0x06,0x64,0x01,0x09,0x68,0x01,0x5b,0x02,0x07,0x64,0x01,0x0a,0x68,0x01,0x5b,0x02,0x08,0x64,0x01,0x0b,
0x68,0x01,0x5b,0x02,0x09,0x64,0x01,0x0c,0x68,0x01,0x5b,0x02,0x0a,0x64,0x01,0x0d,0x68,0x01,0x5b,0x02,
0x0b,0x64,0x01,0x0e,0x68,0x01,0x5b,0x02,0x0c,0x64,0x01,0x0f,0x68,0x01,0x5b,0x02,0x0d,0x64,0x01,0x10,
0x68,0x01,0x5b,0x02,0x0e,0x64,0x01,0x11,0x68,0x01,0x5b,0x02,0x0f,0x64,0x01,0x12,0x68,0x01,0x5b,0x02,
0x10,0x64,0x01,0x13,0x68,0x01,0x5b,0x02,0x11,0x64,0x01,0x14,0x68,0x01,0x5b,0x02,0x12,0x64,0x01,0x15,
0x68,0x01,0x5b,0x02,0x13,0x64,0x01,0x16,0x68,0x01,0x5b,0x02,0x14,0x64,0x01,0x17,0x68,0x01,0x5b,0x02,
0x15,0x64,0x01,0x18,0x65,0x19,0x1a,0x65,0x1b,0x1c,0x13,0x01,0x39,0x01,};
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_1,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_1,gem_mrblib_mruby_hash_ext_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  194,0,29,22,0
};
static const mrb_irep *gem_mrblib_mruby_hash_ext_proc_reps_0[1] = {
  &gem_mrblib_mruby_hash_ext_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_hash_ext_proc_syms_0, 1, (MRB_SYM(Hash), ), const);
static const mrb_code gem_mrblib_mruby_hash_ext_proc_iseq_0[13] = {
0x13,0x01,0x13,0x02,0x60,0x01,0x00,0x62,0x01,0x00,0x39,0x01,0x6b,};
static const mrb_irep gem_mrblib_mruby_hash_ext_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_hash_ext_proc_iseq_0,
  NULL,gem_mrblib_mruby_hash_ext_proc_syms_0,gem_mrblib_mruby_hash_ext_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  13,0,1,1,0
};
static
const struct RProc gem_mrblib_mruby_hash_ext_proc[] = {{
NULL,NULL,MRB_TT_PROC,7,0,{&gem_mrblib_mruby_hash_ext_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_hash_ext_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_hash_ext_gem_init(mrb_state *mrb);
void mrb_mruby_hash_ext_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_hash_ext_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_hash_ext_proc_init_syms(mrb);
  mrb_mruby_hash_ext_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_hash_ext_proc);
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

void GENERATED_TMP_mrb_mruby_hash_ext_gem_final(mrb_state *mrb) {
  mrb_mruby_hash_ext_gem_final(mrb);
}
