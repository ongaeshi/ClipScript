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

static const mrb_code gem_mrblib_mruby_method_proc_iseq_4[4] = {
0x14,0x01,0x39,0x01,};
static const mrb_irep gem_mrblib_mruby_method_proc_irep_4 = {
  1,2,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_method_proc_iseq_4,
  NULL,NULL,NULL,
  NULL,					/* lv */
  NULL,					/* debug_info */
  4,0,0,0,0
};
static const mrb_irep *gem_mrblib_mruby_method_proc_reps_3[1] = {
  &gem_mrblib_mruby_method_proc_irep_4,
};
static const mrb_pool_value gem_mrblib_mruby_method_proc_pool_3[3] = {
{IREP_TT_STR|(18<<2), {"\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x20\x6d\x65\x74\x68\x6f\x64\x20\x27"}},
{IREP_TT_STR|(13<<2), {"\x27\x20\x66\x6f\x72\x20\x63\x6c\x61\x73\x73\x20\x27"}},
{IREP_TT_STR|(1<<2), {"\x27"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_method_proc_syms_3, 5, (MRB_SYM(method), MRB_SYM(owner), MRB_OPSYM(neq), MRB_SYM(NameError), MRB_SYM(raise), ), const);
static const mrb_code gem_mrblib_mruby_method_proc_iseq_3[78] = {
0x35,0x04,0x00,0x00,0x14,0x05,0x01,0x06,0x01,0x2f,0x05,0x00,0x01,0x01,0x03,0x05,0x14,0x05,0x67,0x05,
0x62,0x05,0x00,0x01,0x04,0x05,0x01,0x05,0x03,0x2f,0x05,0x01,0x00,0x01,0x06,0x04,0x2f,0x05,0x02,0x01,
0x27,0x05,0x00,0x20,0x14,0x05,0x1f,0x06,0x03,0x51,0x07,0x00,0x01,0x08,0x01,0x53,0x07,0x51,0x08,0x01,
0x53,0x07,0x01,0x08,0x04,0x53,0x07,0x51,0x08,0x02,0x53,0x07,0x2f,0x05,0x04,0x02,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_method_proc_lv_3, 4, (MRB_SYM(name), MRB_OPSYM(and), MRB_SYM(m), MRB_SYM(sc), ), const);
static const mrb_irep gem_mrblib_mruby_method_proc_irep_3 = {
  5,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_method_proc_iseq_3,
  gem_mrblib_mruby_method_proc_pool_3,gem_mrblib_mruby_method_proc_syms_3,gem_mrblib_mruby_method_proc_reps_3,
  gem_mrblib_mruby_method_proc_lv_3,
  NULL,					/* debug_info */
  78,3,5,1,0
};
static const mrb_irep *gem_mrblib_mruby_method_proc_reps_1[1] = {
  &gem_mrblib_mruby_method_proc_irep_3,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_method_proc_syms_1, 1, (MRB_SYM(singleton_method), ), const);
static const mrb_code gem_mrblib_mruby_method_proc_iseq_1[13] = {
0x68,0x01,0x5b,0x02,0x00,0x64,0x01,0x00,0x11,0x01,0x00,0x39,0x01,};
static const mrb_irep gem_mrblib_mruby_method_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_method_proc_iseq_1,
  NULL,gem_mrblib_mruby_method_proc_syms_1,gem_mrblib_mruby_method_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  13,0,1,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_method_proc_syms_10, 1, (MRB_SYM(call), ), const);
static const mrb_code gem_mrblib_mruby_method_proc_iseq_10[23] = {
0x35,0x00,0x10,0x01,0x23,0x03,0x02,0x00,0x13,0x04,0x01,0x05,0x01,0x4a,0x04,0x01,0x05,0x02,0x2e,0x03,
0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_method_proc_lv_10, 2, (MRB_SYM(args), MRB_SYM(b), ), const);
static const mrb_irep gem_mrblib_mruby_method_proc_irep_10 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_method_proc_iseq_10,
  NULL,gem_mrblib_mruby_method_proc_syms_10,NULL,
  gem_mrblib_mruby_method_proc_lv_10,
  NULL,					/* debug_info */
  23,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_method_proc_reps_7[1] = {
  &gem_mrblib_mruby_method_proc_irep_10,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_method_proc_syms_7, 1, (MRB_SYM(lambda), ), const);
static const mrb_code gem_mrblib_mruby_method_proc_iseq_7[17] = {
0x35,0x00,0x00,0x00,0x14,0x02,0x14,0x03,0x59,0x04,0x00,0x30,0x03,0x00,0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_method_proc_lv_7, 2, (MRB_OPSYM(and), MRB_SYM(m), ), const);
static const mrb_irep gem_mrblib_mruby_method_proc_irep_7 = {
  3,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_method_proc_iseq_7,
  NULL,gem_mrblib_mruby_method_proc_syms_7,gem_mrblib_mruby_method_proc_reps_7,
  gem_mrblib_mruby_method_proc_lv_7,
  NULL,					/* debug_info */
  17,0,1,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_method_proc_syms_14, 1, (MRB_SYM(call), ), const);
static const mrb_code gem_mrblib_mruby_method_proc_iseq_14[29] = {
0x35,0x00,0x10,0x01,0x14,0x03,0x23,0x04,0x01,0x00,0x13,0x05,0x01,0x06,0x01,0x4a,0x05,0x01,0x06,0x02,
0x2e,0x04,0x00,0x2f,0x03,0x00,0x01,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_method_proc_lv_14, 2, (MRB_SYM(args), MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_method_proc_irep_14 = {
  3,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_method_proc_iseq_14,
  NULL,gem_mrblib_mruby_method_proc_syms_14,NULL,
  gem_mrblib_mruby_method_proc_lv_14,
  NULL,					/* debug_info */
  29,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_method_proc_reps_8[1] = {
  &gem_mrblib_mruby_method_proc_irep_14,
};
static const mrb_code gem_mrblib_mruby_method_proc_iseq_8[9] = {
0x35,0x04,0x00,0x00,0x57,0x03,0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_method_proc_lv_8, 2, (MRB_SYM(other), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_method_proc_irep_8 = {
  3,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_method_proc_iseq_8,
  NULL,NULL,gem_mrblib_mruby_method_proc_reps_8,
  gem_mrblib_mruby_method_proc_lv_8,
  NULL,					/* debug_info */
  9,0,0,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_method_proc_syms_18, 1, (MRB_SYM(call), ), const);
static const mrb_code gem_mrblib_mruby_method_proc_iseq_18[29] = {
0x35,0x00,0x10,0x01,0x23,0x03,0x01,0x00,0x14,0x04,0x13,0x05,0x01,0x06,0x01,0x4a,0x05,0x01,0x06,0x02,
0x2e,0x04,0x00,0x2f,0x03,0x00,0x01,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_method_proc_lv_18, 2, (MRB_SYM(args), MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_method_proc_irep_18 = {
  3,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_method_proc_iseq_18,
  NULL,gem_mrblib_mruby_method_proc_syms_18,NULL,
  gem_mrblib_mruby_method_proc_lv_18,
  NULL,					/* debug_info */
  29,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_method_proc_reps_9[1] = {
  &gem_mrblib_mruby_method_proc_irep_18,
};
static const mrb_code gem_mrblib_mruby_method_proc_iseq_9[9] = {
0x35,0x04,0x00,0x00,0x57,0x03,0x00,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_method_proc_lv_9, 2, (MRB_SYM(other), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_method_proc_irep_9 = {
  3,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_method_proc_iseq_9,
  NULL,NULL,gem_mrblib_mruby_method_proc_reps_9,
  gem_mrblib_mruby_method_proc_lv_9,
  NULL,					/* debug_info */
  9,0,0,1,0
};
static const mrb_irep *gem_mrblib_mruby_method_proc_reps_2[3] = {
  &gem_mrblib_mruby_method_proc_irep_7,
  &gem_mrblib_mruby_method_proc_irep_8,
  &gem_mrblib_mruby_method_proc_irep_9,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_method_proc_syms_2, 3, (MRB_SYM(to_proc), MRB_OPSYM(lshift), MRB_OPSYM(rshift), ), const);
static const mrb_code gem_mrblib_mruby_method_proc_iseq_2[29] = {
0x68,0x01,0x5b,0x02,0x00,0x64,0x01,0x00,0x68,0x01,0x5b,0x02,0x01,0x64,0x01,0x01,0x68,0x01,0x5b,0x02,
0x02,0x64,0x01,0x02,0x11,0x01,0x02,0x39,0x01,};
static const mrb_irep gem_mrblib_mruby_method_proc_irep_2 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_method_proc_iseq_2,
  NULL,gem_mrblib_mruby_method_proc_syms_2,gem_mrblib_mruby_method_proc_reps_2,
  NULL,					/* lv */
  NULL,					/* debug_info */
  29,0,3,3,0
};
static const mrb_irep *gem_mrblib_mruby_method_proc_reps_0[2] = {
  &gem_mrblib_mruby_method_proc_irep_1,
  &gem_mrblib_mruby_method_proc_irep_2,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_method_proc_syms_0, 2, (MRB_SYM(Kernel), MRB_SYM(Method), ), const);
static const mrb_code gem_mrblib_mruby_method_proc_iseq_0[21] = {
0x13,0x01,0x61,0x01,0x00,0x62,0x01,0x00,0x13,0x01,0x13,0x02,0x60,0x01,0x01,0x62,0x01,0x01,0x39,0x01,
0x6b,};
static const mrb_irep gem_mrblib_mruby_method_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_method_proc_iseq_0,
  NULL,gem_mrblib_mruby_method_proc_syms_0,gem_mrblib_mruby_method_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  21,0,2,2,0
};
static
const struct RProc gem_mrblib_mruby_method_proc[] = {{
NULL,NULL,MRB_TT_PROC,7,0,{&gem_mrblib_mruby_method_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_method_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_method_gem_init(mrb_state *mrb);
void mrb_mruby_method_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_method_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_method_proc_init_syms(mrb);
  mrb_mruby_method_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_method_proc);
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

void GENERATED_TMP_mrb_mruby_method_gem_final(mrb_state *mrb) {
  mrb_mruby_method_gem_final(mrb);
}
