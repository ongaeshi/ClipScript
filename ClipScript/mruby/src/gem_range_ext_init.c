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

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_range_ext_proc_syms_6, 1, (MRB_SYM(push), ), const);
static const mrb_code gem_mrblib_mruby_range_ext_proc_iseq_6[44] = {
0x35,0x04,0x00,0x00,0x23,0x03,0x04,0x00,0x07,0x04,0x45,0x03,0x27,0x03,0x00,0x04,0x13,0x03,0x3b,0x03,
0x23,0x03,0x05,0x00,0x01,0x04,0x01,0x2f,0x03,0x00,0x01,0x23,0x03,0x04,0x00,0x40,0x03,0x01,0x24,0x03,
0x04,0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_range_ext_proc_lv_6, 2, (MRB_SYM(i), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_range_ext_proc_irep_6 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_range_ext_proc_iseq_6,
  NULL,gem_mrblib_mruby_range_ext_proc_syms_6,NULL,
  gem_mrblib_mruby_range_ext_proc_lv_6,
  NULL,					/* debug_info */
  44,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_range_ext_proc_reps_2[1] = {
  &gem_mrblib_mruby_range_ext_proc_irep_6,
};
static const mrb_pool_value gem_mrblib_mruby_range_ext_proc_pool_2[4] = {
{IREP_TT_STR|(47<<2), {"\x63\x61\x6e\x6e\x6f\x74\x20\x67\x65\x74\x20\x74\x68\x65\x20\x66\x69\x72\x73\x74\x20\x65\x6c\x65\x6d\x65\x6e\x74\x20\x6f\x66\x20\x62\x65\x67\x69\x6e\x6c\x65\x73\x73\x20\x72\x61\x6e\x67\x65"}},
{IREP_TT_STR|(33<<2), {"\x77\x72\x6f\x6e\x67\x20\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x20\x28\x67\x69\x76\x65\x6e\x20"}},
{IREP_TT_STR|(13<<2), {"\x2c\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x31\x29"}},
{IREP_TT_STR|(37<<2), {"\x6e\x65\x67\x61\x74\x69\x76\x65\x20\x61\x72\x72\x61\x79\x20\x73\x69\x7a\x65\x20\x28\x6f\x72\x20\x73\x69\x7a\x65\x20\x74\x6f\x6f\x20\x62\x69\x67\x29"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_range_ext_proc_syms_2, 9, (MRB_SYM(begin), MRB_SYM(RangeError), MRB_SYM(raise), MRB_SYM_Q(empty), MRB_SYM(length), MRB_SYM(ArgumentError), MRB_OPSYM(aref), MRB_SYM(__to_int), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_range_ext_proc_iseq_2[148] = {
0x35,0x00,0x10,0x00,0x14,0x06,0x2f,0x06,0x00,0x00,0x28,0x06,0x00,0x03,0x25,0x00,0x0c,0x14,0x06,0x1f,
0x07,0x01,0x51,0x08,0x00,0x2f,0x06,0x02,0x02,0x01,0x06,0x01,0x2f,0x06,0x03,0x00,0x27,0x06,0x00,0x08,
0x14,0x06,0x2f,0x06,0x00,0x00,0x39,0x06,0x01,0x06,0x01,0x2f,0x06,0x04,0x00,0x08,0x07,0x43,0x06,0x26,
0x06,0x00,0x1a,0x14,0x06,0x1f,0x07,0x05,0x51,0x08,0x01,0x01,0x09,0x01,0x2f,0x09,0x04,0x00,0x53,0x08,
0x51,0x09,0x02,0x53,0x08,0x2f,0x06,0x02,0x02,0x01,0x06,0x01,0x07,0x07,0x2f,0x06,0x06,0x01,0x01,0x03,
0x06,0x2f,0x06,0x07,0x00,0x01,0x04,0x06,0x07,0x06,0x01,0x07,0x04,0x45,0x06,0x26,0x06,0x00,0x0c,0x14,
0x06,0x1f,0x07,0x05,0x51,0x08,0x03,0x2f,0x06,0x02,0x02,0x48,0x06,0x00,0x01,0x05,0x06,0x14,0x06,0x59,
0x07,0x00,0x30,0x06,0x08,0x00,0x39,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_range_ext_proc_lv_2, 5, (MRB_SYM(args), MRB_OPSYM(and), MRB_SYM(nv), MRB_SYM(n), MRB_SYM(ary), ), const);
static const mrb_irep gem_mrblib_mruby_range_ext_proc_irep_2 = {
  6,11,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_range_ext_proc_iseq_2,
  gem_mrblib_mruby_range_ext_proc_pool_2,gem_mrblib_mruby_range_ext_proc_syms_2,gem_mrblib_mruby_range_ext_proc_reps_2,
  gem_mrblib_mruby_range_ext_proc_lv_2,
  NULL,					/* debug_info */
  148,4,9,1,0
};
static const mrb_pool_value gem_mrblib_mruby_range_ext_proc_pool_3[4] = {
{IREP_TT_STR|(44<<2), {"\x63\x61\x6e\x6e\x6f\x74\x20\x67\x65\x74\x20\x74\x68\x65\x20\x6c\x61\x73\x74\x20\x65\x6c\x65\x6d\x65\x6e\x74\x20\x6f\x66\x20\x65\x6e\x64\x6c\x65\x73\x73\x20\x72\x61\x6e\x67\x65"}},
{IREP_TT_STR|(33<<2), {"\x77\x72\x6f\x6e\x67\x20\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x20\x28\x67\x69\x76\x65\x6e\x20"}},
{IREP_TT_STR|(13<<2), {"\x2c\x20\x65\x78\x70\x65\x63\x74\x65\x64\x20\x31\x29"}},
{IREP_TT_STR|(37<<2), {"\x6e\x65\x67\x61\x74\x69\x76\x65\x20\x61\x72\x72\x61\x79\x20\x73\x69\x7a\x65\x20\x28\x6f\x72\x20\x73\x69\x7a\x65\x20\x74\x6f\x6f\x20\x62\x69\x67\x29"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_range_ext_proc_syms_3, 10, (MRB_SYM(end), MRB_SYM(RangeError), MRB_SYM(raise), MRB_SYM_Q(empty), MRB_SYM(length), MRB_SYM(ArgumentError), MRB_OPSYM(aref), MRB_SYM(__to_int), MRB_SYM(to_a), MRB_SYM(last), ), const);
static const mrb_code gem_mrblib_mruby_range_ext_proc_iseq_3[146] = {
0x35,0x00,0x10,0x00,0x14,0x05,0x2f,0x05,0x00,0x00,0x28,0x05,0x00,0x03,0x25,0x00,0x0c,0x14,0x05,0x1f,
0x06,0x01,0x51,0x07,0x00,0x2f,0x05,0x02,0x02,0x01,0x05,0x01,0x2f,0x05,0x03,0x00,0x27,0x05,0x00,0x08,
0x14,0x05,0x2f,0x05,0x00,0x00,0x39,0x05,0x01,0x05,0x01,0x2f,0x05,0x04,0x00,0x08,0x06,0x43,0x05,0x26,
0x05,0x00,0x1a,0x14,0x05,0x1f,0x06,0x05,0x51,0x07,0x01,0x01,0x08,0x01,0x2f,0x08,0x04,0x00,0x53,0x07,
0x51,0x08,0x02,0x53,0x07,0x2f,0x05,0x02,0x02,0x01,0x05,0x01,0x07,0x06,0x2f,0x05,0x06,0x01,0x01,0x03,
0x05,0x2f,0x05,0x07,0x00,0x01,0x04,0x05,0x07,0x05,0x01,0x06,0x04,0x45,0x05,0x26,0x05,0x00,0x0c,0x14,
0x05,0x1f,0x06,0x05,0x51,0x07,0x03,0x2f,0x05,0x02,0x02,0x14,0x05,0x2f,0x05,0x08,0x00,0x01,0x06,0x03,
0x2f,0x05,0x09,0x01,0x39,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_range_ext_proc_lv_3, 4, (MRB_SYM(args), MRB_OPSYM(and), MRB_SYM(nv), MRB_SYM(n), ), const);
static const mrb_irep gem_mrblib_mruby_range_ext_proc_irep_3 = {
  5,10,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_range_ext_proc_iseq_3,
  gem_mrblib_mruby_range_ext_proc_pool_3,gem_mrblib_mruby_range_ext_proc_syms_3,NULL,
  gem_mrblib_mruby_range_ext_proc_lv_3,
  NULL,					/* debug_info */
  146,4,10,0,0
};
static const mrb_pool_value gem_mrblib_mruby_range_ext_proc_pool_4[1] = {
{IREP_TT_STR|(39<<2), {"\x63\x61\x6e\x6e\x6f\x74\x20\x67\x65\x74\x20\x74\x68\x65\x20\x6d\x61\x78\x69\x6d\x75\x6d\x20\x6f\x66\x20\x65\x6e\x64\x6c\x65\x73\x73\x20\x72\x61\x6e\x67\x65"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_range_ext_proc_syms_4, 10, (MRB_SYM(begin), MRB_SYM(end), MRB_SYM(RangeError), MRB_SYM(raise), MRB_SYM(Numeric), MRB_SYM_Q(kind_of), MRB_SYM_Q(exclude_end), MRB_SYM(Integer), MRB_OPSYM(not), MRB_SYM(TypeError), ), const);
static const mrb_code gem_mrblib_mruby_range_ext_proc_iseq_4[197] = {
0x35,0x00,0x00,0x01,0x14,0x05,0x2f,0x05,0x00,0x00,0x01,0x02,0x05,0x14,0x05,0x2f,0x05,0x01,0x00,0x01,
0x03,0x05,0x27,0x01,0x00,0x09,0x34,0x06,0x00,0x00,0x33,0x05,0x7f,0x39,0x05,0x28,0x03,0x00,0x03,0x25,
0x00,0x0c,0x14,0x05,0x1f,0x06,0x02,0x51,0x07,0x00,0x2f,0x05,0x03,0x02,0x01,0x05,0x02,0x1f,0x06,0x04,
0x2f,0x05,0x05,0x01,0x27,0x05,0x00,0x0a,0x01,0x05,0x03,0x1f,0x06,0x04,0x2f,0x05,0x05,0x01,0x27,0x05,
0x00,0x6a,0x14,0x05,0x2f,0x05,0x06,0x00,0x27,0x05,0x00,0x0e,0x01,0x05,0x03,0x1f,0x06,0x07,0x2f,0x05,
0x05,0x01,0x2f,0x05,0x08,0x00,0x27,0x05,0x00,0x09,0x14,0x05,0x1f,0x06,0x09,0x2f,0x05,0x03,0x01,0x01,
0x05,0x02,0x01,0x06,0x03,0x46,0x05,0x27,0x05,0x00,0x04,0x13,0x05,0x39,0x05,0x01,0x05,0x02,0x01,0x06,
0x03,0x43,0x05,0x27,0x05,0x00,0x06,0x14,0x05,0x2f,0x05,0x06,0x00,0x27,0x05,0x00,0x04,0x13,0x05,0x39,
0x05,0x01,0x05,0x03,0x01,0x04,0x05,0x14,0x05,0x2f,0x05,0x06,0x00,0x27,0x05,0x00,0x09,0x01,0x05,0x04,
0x40,0x05,0x01,0x01,0x04,0x05,0x39,0x04,0x34,0x06,0x00,0x00,0x33,0x05,0x7f,0x39,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_range_ext_proc_lv_4, 4, (MRB_SYM(block), MRB_SYM(val), MRB_SYM(last), MRB_SYM(max), ), const);
static const mrb_irep gem_mrblib_mruby_range_ext_proc_irep_4 = {
  5,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_range_ext_proc_iseq_4,
  gem_mrblib_mruby_range_ext_proc_pool_4,gem_mrblib_mruby_range_ext_proc_syms_4,NULL,
  gem_mrblib_mruby_range_ext_proc_lv_4,
  NULL,					/* debug_info */
  197,1,10,0,0
};
static const mrb_pool_value gem_mrblib_mruby_range_ext_proc_pool_5[1] = {
{IREP_TT_STR|(69<<2), {"\x63\x61\x6e\x6e\x6f\x74\x20\x67\x65\x74\x20\x74\x68\x65\x20\x6d\x69\x6e\x69\x6d\x75\x6d\x20\x6f\x66\x20\x65\x6e\x64\x6c\x65\x73\x73\x20\x72\x61\x6e\x67\x65\x20\x77\x69\x74\x68\x20\x63\x75\x73\x74\x6f\x6d\x20\x63\x6f\x6d\x70\x61\x72\x69\x73\x6f\x6e\x20\x6d\x65\x74\x68\x6f\x64"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_range_ext_proc_syms_5, 7, (MRB_SYM(begin), MRB_SYM(end), MRB_SYM(RangeError), MRB_SYM(raise), MRB_SYM(Numeric), MRB_SYM_Q(kind_of), MRB_SYM_Q(exclude_end), ), const);
static const mrb_code gem_mrblib_mruby_range_ext_proc_iseq_5[150] = {
0x35,0x00,0x00,0x01,0x14,0x05,0x2f,0x05,0x00,0x00,0x01,0x02,0x05,0x14,0x05,0x2f,0x05,0x01,0x00,0x01,
0x03,0x05,0x27,0x01,0x00,0x1c,0x28,0x03,0x00,0x03,0x25,0x00,0x0c,0x14,0x05,0x1f,0x06,0x02,0x51,0x07,
0x00,0x2f,0x05,0x03,0x02,0x34,0x06,0x00,0x00,0x33,0x05,0x7f,0x39,0x05,0x28,0x03,0x00,0x03,0x25,0x00,
0x02,0x39,0x02,0x01,0x05,0x02,0x1f,0x06,0x04,0x2f,0x05,0x05,0x01,0x27,0x05,0x00,0x0a,0x01,0x05,0x03,
0x1f,0x06,0x04,0x2f,0x05,0x05,0x01,0x27,0x05,0x00,0x32,0x01,0x05,0x02,0x01,0x06,0x03,0x46,0x05,0x27,
0x05,0x00,0x04,0x13,0x05,0x39,0x05,0x01,0x05,0x02,0x01,0x06,0x03,0x43,0x05,0x27,0x05,0x00,0x06,0x14,
0x05,0x2f,0x05,0x06,0x00,0x27,0x05,0x00,0x04,0x13,0x05,0x39,0x05,0x01,0x05,0x02,0x01,0x04,0x05,0x39,
0x05,0x34,0x06,0x00,0x00,0x33,0x05,0x7f,0x39,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_range_ext_proc_lv_5, 4, (MRB_SYM(block), MRB_SYM(val), MRB_SYM(last), MRB_SYM(min), ), const);
static const mrb_irep gem_mrblib_mruby_range_ext_proc_irep_5 = {
  5,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_range_ext_proc_iseq_5,
  gem_mrblib_mruby_range_ext_proc_pool_5,gem_mrblib_mruby_range_ext_proc_syms_5,NULL,
  gem_mrblib_mruby_range_ext_proc_lv_5,
  NULL,					/* debug_info */
  150,1,7,0,0
};
static const mrb_irep *gem_mrblib_mruby_range_ext_proc_reps_1[4] = {
  &gem_mrblib_mruby_range_ext_proc_irep_2,
  &gem_mrblib_mruby_range_ext_proc_irep_3,
  &gem_mrblib_mruby_range_ext_proc_irep_4,
  &gem_mrblib_mruby_range_ext_proc_irep_5,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_range_ext_proc_syms_1, 4, (MRB_SYM(first), MRB_SYM(last), MRB_SYM(max), MRB_SYM(min), ), const);
static const mrb_code gem_mrblib_mruby_range_ext_proc_iseq_1[37] = {
0x68,0x01,0x5b,0x02,0x00,0x64,0x01,0x00,0x68,0x01,0x5b,0x02,0x01,0x64,0x01,0x01,0x68,0x01,0x5b,0x02,
0x02,0x64,0x01,0x02,0x68,0x01,0x5b,0x02,0x03,0x64,0x01,0x03,0x11,0x01,0x03,0x39,0x01,};
static const mrb_irep gem_mrblib_mruby_range_ext_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_range_ext_proc_iseq_1,
  NULL,gem_mrblib_mruby_range_ext_proc_syms_1,gem_mrblib_mruby_range_ext_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  37,0,4,4,0
};
static const mrb_irep *gem_mrblib_mruby_range_ext_proc_reps_0[1] = {
  &gem_mrblib_mruby_range_ext_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_range_ext_proc_syms_0, 1, (MRB_SYM(Range), ), const);
static const mrb_code gem_mrblib_mruby_range_ext_proc_iseq_0[13] = {
0x13,0x01,0x13,0x02,0x60,0x01,0x00,0x62,0x01,0x00,0x39,0x01,0x6b,};
static const mrb_irep gem_mrblib_mruby_range_ext_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_range_ext_proc_iseq_0,
  NULL,gem_mrblib_mruby_range_ext_proc_syms_0,gem_mrblib_mruby_range_ext_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  13,0,1,1,0
};
static
const struct RProc gem_mrblib_mruby_range_ext_proc[] = {{
NULL,NULL,MRB_TT_PROC,7,0,{&gem_mrblib_mruby_range_ext_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_range_ext_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_range_ext_gem_init(mrb_state *mrb);
void mrb_mruby_range_ext_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_range_ext_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_range_ext_proc_init_syms(mrb);
  mrb_mruby_range_ext_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_range_ext_proc);
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

void GENERATED_TMP_mrb_mruby_range_ext_gem_final(mrb_state *mrb) {
  mrb_mruby_range_ext_gem_final(mrb);
}
