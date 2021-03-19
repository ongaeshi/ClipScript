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

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_syms_2, 1, (MRB_SYM(call), ), const);
static const mrb_code gem_mrblib_mruby_proc_ext_proc_iseq_2[18] = {
0x35,0x00,0x10,0x00,0x14,0x03,0x13,0x04,0x01,0x05,0x01,0x4a,0x04,0x2d,0x03,0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_lv_2, 2, (MRB_SYM(args), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_proc_ext_proc_irep_2 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_proc_ext_proc_iseq_2,
  NULL,gem_mrblib_mruby_proc_ext_proc_syms_2,NULL,
  gem_mrblib_mruby_proc_ext_proc_lv_2,
  NULL,					/* debug_info */
  18,0,1,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_syms_3, 1, (MRB_SYM(call), ), const);
static const mrb_code gem_mrblib_mruby_proc_ext_proc_iseq_3[18] = {
0x35,0x00,0x10,0x00,0x14,0x03,0x13,0x04,0x01,0x05,0x01,0x4a,0x04,0x2d,0x03,0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_lv_3, 2, (MRB_SYM(args), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_proc_ext_proc_irep_3 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_proc_ext_proc_iseq_3,
  NULL,gem_mrblib_mruby_proc_ext_proc_syms_3,NULL,
  gem_mrblib_mruby_proc_ext_proc_lv_3,
  NULL,					/* debug_info */
  18,0,1,0,0
};
static const mrb_code gem_mrblib_mruby_proc_ext_proc_iseq_4[8] = {
0x35,0x00,0x00,0x00,0x14,0x02,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_lv_4, 1, (MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_proc_ext_proc_irep_4 = {
  2,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_proc_ext_proc_iseq_4,
  NULL,NULL,NULL,
  gem_mrblib_mruby_proc_ext_proc_lv_4,
  NULL,					/* debug_info */
  8,0,0,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_syms_26, 1, (MRB_OPSYM(minus), ), const);
static const mrb_code gem_mrblib_mruby_proc_ext_proc_iseq_26[33] = {
0x35,0x04,0x00,0x00,0x01,0x03,0x01,0x07,0x04,0x44,0x03,0x27,0x03,0x00,0x0d,0x01,0x03,0x01,0x2f,0x03,
0x00,0x00,0x40,0x03,0x01,0x25,0x00,0x03,0x01,0x03,0x01,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_lv_26, 2, (MRB_SYM(a), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_proc_ext_proc_irep_26 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_proc_ext_proc_iseq_26,
  NULL,gem_mrblib_mruby_proc_ext_proc_syms_26,NULL,
  gem_mrblib_mruby_proc_ext_proc_lv_26,
  NULL,					/* debug_info */
  33,0,1,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_syms_30, 2, (MRB_SYM(size), MRB_OPSYM(aref), ), const);
static const mrb_code gem_mrblib_mruby_proc_ext_proc_iseq_30[60] = {
0x35,0x00,0x10,0x00,0x23,0x04,0x01,0x00,0x01,0x05,0x01,0x3d,0x04,0x01,0x03,0x04,0x2f,0x04,0x00,0x00,
0x23,0x05,0x01,0x01,0x47,0x04,0x27,0x04,0x00,0x11,0x23,0x04,0x06,0x01,0x13,0x05,0x01,0x06,0x03,0x4a,
0x05,0x2d,0x04,0x01,0x25,0x00,0x0b,0x23,0x04,0x07,0x01,0x01,0x05,0x03,0x2f,0x04,0x01,0x01,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_lv_30, 3, (MRB_SYM(args), MRB_OPSYM(and), MRB_SYM(new_args), ), const);
static const mrb_irep gem_mrblib_mruby_proc_ext_proc_irep_30 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_proc_ext_proc_iseq_30,
  NULL,gem_mrblib_mruby_proc_ext_proc_syms_30,NULL,
  gem_mrblib_mruby_proc_ext_proc_lv_30,
  NULL,					/* debug_info */
  60,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_proc_ext_proc_reps_27[1] = {
  &gem_mrblib_mruby_proc_ext_proc_irep_30,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_syms_27, 1, (MRB_SYM(__send__), ), const);
static const mrb_code gem_mrblib_mruby_proc_ext_proc_iseq_27[31] = {
0x35,0x00,0x20,0x00,0x25,0x00,0x03,0x25,0x00,0x06,0x48,0x03,0x00,0x01,0x01,0x03,0x14,0x03,0x23,0x04,
0x03,0x00,0x59,0x05,0x00,0x30,0x03,0x00,0x01,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_lv_27, 2, (MRB_SYM(given_args), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_proc_ext_proc_irep_27 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_proc_ext_proc_iseq_27,
  NULL,gem_mrblib_mruby_proc_ext_proc_syms_27,gem_mrblib_mruby_proc_ext_proc_reps_27,
  gem_mrblib_mruby_proc_ext_proc_lv_27,
  NULL,					/* debug_info */
  31,0,1,1,0
};
static const mrb_irep *gem_mrblib_mruby_proc_ext_proc_reps_5[2] = {
  &gem_mrblib_mruby_proc_ext_proc_irep_26,
  &gem_mrblib_mruby_proc_ext_proc_irep_27,
};
static const mrb_pool_value gem_mrblib_mruby_proc_ext_proc_pool_5[3] = {
{IREP_TT_STR|(27<<2), {"\x77\x72\x6f\x6e\x67\x20\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x20\x28"}},
{IREP_TT_STR|(5<<2), {"\x20\x66\x6f\x72\x20"}},
{IREP_TT_STR|(1<<2), {"\x29"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_syms_5, 9, (MRB_SYM(arity), MRB_SYM(proc), MRB_SYM(lambda), MRB_OPSYM(aref), MRB_SYM_Q(lambda), MRB_OPSYM(neq), MRB_SYM(ArgumentError), MRB_SYM(raise), MRB_SYM(call), ), const);
static const mrb_code gem_mrblib_mruby_proc_ext_proc_iseq_5[177] = {
0x35,0x00,0x20,0x00,0x25,0x00,0x03,0x25,0x00,0x09,0x14,0x08,0x2f,0x08,0x00,0x00,0x01,0x01,0x08,0x11,
0x03,0x01,0x14,0x08,0x59,0x09,0x00,0x30,0x08,0x02,0x00,0x01,0x04,0x08,0x01,0x09,0x01,0x2f,0x08,0x03,
0x01,0x01,0x01,0x08,0x14,0x08,0x2f,0x08,0x04,0x00,0x27,0x08,0x00,0x67,0x11,0x03,0x02,0x14,0x08,0x2f,
0x08,0x00,0x00,0x01,0x05,0x08,0x07,0x09,0x47,0x08,0x27,0x08,0x00,0x0a,0x01,0x08,0x01,0x01,0x09,0x05,
0x2f,0x08,0x05,0x01,0x26,0x08,0x00,0x1a,0x01,0x08,0x05,0x07,0x09,0x44,0x08,0x27,0x08,0x00,0x0f,0x01,
0x08,0x04,0x01,0x09,0x05,0x2f,0x08,0x03,0x01,0x01,0x09,0x01,0x46,0x08,0x27,0x08,0x00,0x27,0x14,0x08,
0x1f,0x09,0x06,0x51,0x0a,0x00,0x01,0x0b,0x01,0x53,0x0a,0x51,0x0b,0x01,0x53,0x0a,0x01,0x0b,0x04,0x01,
0x0c,0x05,0x2f,0x0b,0x03,0x01,0x53,0x0a,0x51,0x0b,0x02,0x53,0x0a,0x2f,0x08,0x07,0x02,0x14,0x06,0x14,
0x08,0x59,0x09,0x01,0x30,0x08,0x01,0x00,0x01,0x07,0x08,0x2f,0x08,0x08,0x00,0x39,0x08,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_lv_5, 7, (MRB_SYM(arity), MRB_OPSYM(and), MRB_SYM(type), MRB_SYM(abs), MRB_SYM(self_arity), MRB_SYM(pproc), MRB_SYM(make_curry), ), const);
static const mrb_irep gem_mrblib_mruby_proc_ext_proc_irep_5 = {
  8,14,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_proc_ext_proc_iseq_5,
  gem_mrblib_mruby_proc_ext_proc_pool_5,gem_mrblib_mruby_proc_ext_proc_syms_5,gem_mrblib_mruby_proc_ext_proc_reps_5,
  gem_mrblib_mruby_proc_ext_proc_lv_5,
  NULL,					/* debug_info */
  177,3,9,2,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_syms_37, 1, (MRB_SYM(call), ), const);
static const mrb_code gem_mrblib_mruby_proc_ext_proc_iseq_37[29] = {
0x35,0x00,0x10,0x01,0x14,0x03,0x23,0x04,0x01,0x00,0x13,0x05,0x01,0x06,0x01,0x4a,0x05,0x01,0x06,0x02,
0x2e,0x04,0x00,0x2f,0x03,0x00,0x01,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_lv_37, 2, (MRB_SYM(args), MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_proc_ext_proc_irep_37 = {
  3,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_proc_ext_proc_iseq_37,
  NULL,gem_mrblib_mruby_proc_ext_proc_syms_37,NULL,
  gem_mrblib_mruby_proc_ext_proc_lv_37,
  NULL,					/* debug_info */
  29,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_proc_ext_proc_reps_6[1] = {
  &gem_mrblib_mruby_proc_ext_proc_irep_37,
};
static const mrb_code gem_mrblib_mruby_proc_ext_proc_iseq_6[9] = {
0x35,0x04,0x00,0x00,0x57,0x03,0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_lv_6, 2, (MRB_SYM(other), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_proc_ext_proc_irep_6 = {
  3,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_proc_ext_proc_iseq_6,
  NULL,NULL,gem_mrblib_mruby_proc_ext_proc_reps_6,
  gem_mrblib_mruby_proc_ext_proc_lv_6,
  NULL,					/* debug_info */
  9,0,0,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_syms_44, 1, (MRB_SYM(call), ), const);
static const mrb_code gem_mrblib_mruby_proc_ext_proc_iseq_44[29] = {
0x35,0x00,0x10,0x01,0x23,0x03,0x01,0x00,0x14,0x04,0x13,0x05,0x01,0x06,0x01,0x4a,0x05,0x01,0x06,0x02,
0x2e,0x04,0x00,0x2f,0x03,0x00,0x01,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_lv_44, 2, (MRB_SYM(args), MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_proc_ext_proc_irep_44 = {
  3,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_proc_ext_proc_iseq_44,
  NULL,gem_mrblib_mruby_proc_ext_proc_syms_44,NULL,
  gem_mrblib_mruby_proc_ext_proc_lv_44,
  NULL,					/* debug_info */
  29,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_proc_ext_proc_reps_7[1] = {
  &gem_mrblib_mruby_proc_ext_proc_irep_44,
};
static const mrb_code gem_mrblib_mruby_proc_ext_proc_iseq_7[9] = {
0x35,0x04,0x00,0x00,0x57,0x03,0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_lv_7, 2, (MRB_SYM(other), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_proc_ext_proc_irep_7 = {
  3,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_proc_ext_proc_iseq_7,
  NULL,NULL,gem_mrblib_mruby_proc_ext_proc_reps_7,
  gem_mrblib_mruby_proc_ext_proc_lv_7,
  NULL,					/* debug_info */
  9,0,0,1,0
};
static const mrb_irep *gem_mrblib_mruby_proc_ext_proc_reps_1[6] = {
  &gem_mrblib_mruby_proc_ext_proc_irep_2,
  &gem_mrblib_mruby_proc_ext_proc_irep_3,
  &gem_mrblib_mruby_proc_ext_proc_irep_4,
  &gem_mrblib_mruby_proc_ext_proc_irep_5,
  &gem_mrblib_mruby_proc_ext_proc_irep_6,
  &gem_mrblib_mruby_proc_ext_proc_irep_7,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_syms_1, 6, (MRB_OPSYM(eqq), MRB_SYM(yield), MRB_SYM(to_proc), MRB_SYM(curry), MRB_OPSYM(lshift), MRB_OPSYM(rshift), ), const);
static const mrb_code gem_mrblib_mruby_proc_ext_proc_iseq_1[53] = {
0x68,0x01,0x5b,0x02,0x00,0x64,0x01,0x00,0x68,0x01,0x5b,0x02,0x01,0x64,0x01,0x01,0x68,0x01,0x5b,0x02,
0x02,0x64,0x01,0x02,0x68,0x01,0x5b,0x02,0x03,0x64,0x01,0x03,0x68,0x01,0x5b,0x02,0x04,0x64,0x01,0x04,
0x68,0x01,0x5b,0x02,0x05,0x64,0x01,0x05,0x11,0x01,0x05,0x39,0x01,};
static const mrb_irep gem_mrblib_mruby_proc_ext_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_proc_ext_proc_iseq_1,
  NULL,gem_mrblib_mruby_proc_ext_proc_syms_1,gem_mrblib_mruby_proc_ext_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  53,0,6,6,0
};
static const mrb_irep *gem_mrblib_mruby_proc_ext_proc_reps_0[1] = {
  &gem_mrblib_mruby_proc_ext_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_proc_ext_proc_syms_0, 1, (MRB_SYM(Proc), ), const);
static const mrb_code gem_mrblib_mruby_proc_ext_proc_iseq_0[13] = {
0x13,0x01,0x13,0x02,0x60,0x01,0x00,0x62,0x01,0x00,0x39,0x01,0x6b,};
static const mrb_irep gem_mrblib_mruby_proc_ext_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_proc_ext_proc_iseq_0,
  NULL,gem_mrblib_mruby_proc_ext_proc_syms_0,gem_mrblib_mruby_proc_ext_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  13,0,1,1,0
};
static
const struct RProc gem_mrblib_mruby_proc_ext_proc[] = {{
NULL,NULL,MRB_TT_PROC,7,0,{&gem_mrblib_mruby_proc_ext_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_proc_ext_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_proc_ext_gem_init(mrb_state *mrb);
void mrb_mruby_proc_ext_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_proc_ext_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_proc_ext_proc_init_syms(mrb);
  mrb_mruby_proc_ext_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_proc_ext_proc);
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

void GENERATED_TMP_mrb_mruby_proc_ext_gem_final(mrb_state *mrb) {
  mrb_mruby_proc_ext_gem_final(mrb);
}
