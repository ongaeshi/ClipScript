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

static const mrb_pool_value gem_mrblib_mruby_print_proc_pool_2[1] = {
{IREP_TT_STR|(1<<2), {"\x0a"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_syms_2, 5, (MRB_SYM(size), MRB_OPSYM(aref), MRB_SYM(inspect), MRB_SYM(__printstr__), MRB_SYM(__svalue), ), const);
static const mrb_code gem_mrblib_mruby_print_proc_iseq_2[78] = {
0x35,0x00,0x10,0x00,0x07,0x03,0x01,0x05,0x01,0x2f,0x05,0x00,0x00,0x01,0x04,0x05,0x25,0x00,0x26,0x14,
0x05,0x01,0x06,0x01,0x01,0x07,0x03,0x2f,0x06,0x01,0x01,0x2f,0x06,0x02,0x00,0x2f,0x05,0x03,0x01,0x14,
0x05,0x51,0x06,0x00,0x2f,0x05,0x03,0x01,0x01,0x05,0x03,0x3e,0x05,0x01,0x01,0x03,0x05,0x01,0x05,0x03,
0x01,0x06,0x04,0x44,0x05,0x26,0x05,0xff,0xce,0x01,0x05,0x01,0x2f,0x05,0x04,0x00,0x39,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_lv_2, 4, (MRB_SYM(args), MRB_OPSYM(and), MRB_SYM(i), MRB_SYM(len), ), const);
static const mrb_irep gem_mrblib_mruby_print_proc_irep_2 = {
  5,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_print_proc_iseq_2,
  gem_mrblib_mruby_print_proc_pool_2,gem_mrblib_mruby_print_proc_syms_2,NULL,
  gem_mrblib_mruby_print_proc_lv_2,
  NULL,					/* debug_info */
  78,1,5,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_syms_3, 2, (MRB_SYM(sprintf), MRB_SYM(__printstr__), ), const);
static const mrb_code gem_mrblib_mruby_print_proc_iseq_3[26] = {
0x35,0x00,0x10,0x00,0x14,0x03,0x14,0x04,0x13,0x05,0x01,0x06,0x01,0x4a,0x05,0x2d,0x04,0x00,0x2f,0x03,
0x01,0x01,0x13,0x03,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_lv_3, 2, (MRB_SYM(args), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_print_proc_irep_3 = {
  3,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_print_proc_iseq_3,
  NULL,gem_mrblib_mruby_print_proc_syms_3,NULL,
  gem_mrblib_mruby_print_proc_lv_3,
  NULL,					/* debug_info */
  26,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_print_proc_reps_1[2] = {
  &gem_mrblib_mruby_print_proc_irep_2,
  &gem_mrblib_mruby_print_proc_irep_3,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_syms_1, 2, (MRB_SYM(p), MRB_SYM(printf), ), const);
static const mrb_code gem_mrblib_mruby_print_proc_iseq_1[21] = {
0x68,0x01,0x5b,0x02,0x00,0x64,0x01,0x00,0x68,0x01,0x5b,0x02,0x01,0x64,0x01,0x01,0x11,0x01,0x01,0x39,
0x01,};
static const mrb_irep gem_mrblib_mruby_print_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_print_proc_iseq_1,
  NULL,gem_mrblib_mruby_print_proc_syms_1,gem_mrblib_mruby_print_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  21,0,2,2,0
};
static const mrb_irep *gem_mrblib_mruby_print_proc_reps_0[1] = {
  &gem_mrblib_mruby_print_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_print_proc_syms_0, 1, (MRB_SYM(Kernel), ), const);
static const mrb_code gem_mrblib_mruby_print_proc_iseq_0[11] = {
0x13,0x01,0x61,0x01,0x00,0x62,0x01,0x00,0x39,0x01,0x6b,};
static const mrb_irep gem_mrblib_mruby_print_proc_irep_0 = {
  1,2,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_print_proc_iseq_0,
  NULL,gem_mrblib_mruby_print_proc_syms_0,gem_mrblib_mruby_print_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  11,0,1,1,0
};
static
const struct RProc gem_mrblib_mruby_print_proc[] = {{
NULL,NULL,MRB_TT_PROC,7,0,{&gem_mrblib_mruby_print_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_print_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_print_gem_init(mrb_state *mrb);
void mrb_mruby_print_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_print_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_print_proc_init_syms(mrb);
  mrb_mruby_print_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_print_proc);
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

void GENERATED_TMP_mrb_mruby_print_gem_final(mrb_state *mrb) {
  mrb_mruby_print_gem_final(mrb);
}
