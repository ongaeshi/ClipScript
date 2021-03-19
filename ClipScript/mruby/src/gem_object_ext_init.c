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

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_object_ext_proc_syms_2, 3, (MRB_SYM(yield_self), MRB_SYM(to_enum), MRB_SYM(call), ), const);
static const mrb_code gem_mrblib_mruby_object_ext_proc_iseq_2[30] = {
0x35,0x00,0x00,0x01,0x26,0x01,0x00,0x0b,0x14,0x02,0x11,0x03,0x00,0x2f,0x02,0x01,0x01,0x39,0x02,0x01,
0x02,0x01,0x14,0x03,0x2f,0x02,0x02,0x01,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_object_ext_proc_lv_2, 1, (MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_object_ext_proc_irep_2 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_object_ext_proc_iseq_2,
  NULL,gem_mrblib_mruby_object_ext_proc_syms_2,NULL,
  gem_mrblib_mruby_object_ext_proc_lv_2,
  NULL,					/* debug_info */
  30,0,3,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_object_ext_proc_syms_3, 1, (MRB_SYM(call), ), const);
static const mrb_code gem_mrblib_mruby_object_ext_proc_iseq_3[18] = {
0x35,0x00,0x00,0x00,0x14,0x03,0x3c,0x02,0x00,0x00,0x2f,0x02,0x00,0x01,0x14,0x02,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_object_ext_proc_lv_3, 1, (MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_object_ext_proc_irep_3 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_object_ext_proc_iseq_3,
  NULL,gem_mrblib_mruby_object_ext_proc_syms_3,NULL,
  gem_mrblib_mruby_object_ext_proc_lv_3,
  NULL,					/* debug_info */
  18,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_object_ext_proc_reps_1[2] = {
  &gem_mrblib_mruby_object_ext_proc_irep_2,
  &gem_mrblib_mruby_object_ext_proc_irep_3,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_object_ext_proc_syms_1, 3, (MRB_SYM(yield_self), MRB_SYM(then), MRB_SYM(tap), ), const);
static const mrb_code gem_mrblib_mruby_object_ext_proc_iseq_1[24] = {
0x68,0x01,0x5b,0x02,0x00,0x64,0x01,0x00,0x65,0x01,0x00,0x68,0x01,0x5b,0x02,0x01,0x64,0x01,0x02,0x11,
0x01,0x02,0x39,0x01,};
static const mrb_irep gem_mrblib_mruby_object_ext_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_object_ext_proc_iseq_1,
  NULL,gem_mrblib_mruby_object_ext_proc_syms_1,gem_mrblib_mruby_object_ext_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  24,0,3,2,0
};
static const mrb_irep *gem_mrblib_mruby_object_ext_proc_reps_0[1] = {
  &gem_mrblib_mruby_object_ext_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_object_ext_proc_syms_0, 1, (MRB_SYM(Kernel), ), const);
static const mrb_code gem_mrblib_mruby_object_ext_proc_iseq_0[11] = {
0x13,0x01,0x61,0x01,0x00,0x62,0x01,0x00,0x39,0x01,0x6b,};
static const mrb_irep gem_mrblib_mruby_object_ext_proc_irep_0 = {
  1,2,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_object_ext_proc_iseq_0,
  NULL,gem_mrblib_mruby_object_ext_proc_syms_0,gem_mrblib_mruby_object_ext_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  11,0,1,1,0
};
static
const struct RProc gem_mrblib_mruby_object_ext_proc[] = {{
NULL,NULL,MRB_TT_PROC,7,0,{&gem_mrblib_mruby_object_ext_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_object_ext_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_object_ext_gem_init(mrb_state *mrb);
void mrb_mruby_object_ext_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_object_ext_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_object_ext_proc_init_syms(mrb);
  mrb_mruby_object_ext_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_object_ext_proc);
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

void GENERATED_TMP_mrb_mruby_object_ext_gem_final(mrb_state *mrb) {
  mrb_mruby_object_ext_gem_final(mrb);
}
