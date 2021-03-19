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

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_sprintf_proc_syms_2, 3, (MRB_SYM(Array), MRB_SYM_Q(is_a), MRB_SYM(sprintf), ), const);
static const mrb_code gem_mrblib_mruby_sprintf_proc_iseq_2[49] = {
0x35,0x04,0x00,0x00,0x01,0x03,0x01,0x1f,0x04,0x00,0x2f,0x03,0x01,0x01,0x27,0x03,0x00,0x12,0x14,0x03,
0x14,0x04,0x48,0x04,0x01,0x01,0x05,0x01,0x4a,0x04,0x2d,0x03,0x02,0x25,0x00,0x0b,0x14,0x03,0x14,0x04,
0x01,0x05,0x01,0x2f,0x03,0x02,0x02,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_sprintf_proc_lv_2, 2, (MRB_SYM(args), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_sprintf_proc_irep_2 = {
  3,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_sprintf_proc_iseq_2,
  NULL,gem_mrblib_mruby_sprintf_proc_syms_2,NULL,
  gem_mrblib_mruby_sprintf_proc_lv_2,
  NULL,					/* debug_info */
  49,0,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_sprintf_proc_reps_1[1] = {
  &gem_mrblib_mruby_sprintf_proc_irep_2,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_sprintf_proc_syms_1, 1, (MRB_OPSYM(mod), ), const);
static const mrb_code gem_mrblib_mruby_sprintf_proc_iseq_1[13] = {
0x68,0x01,0x5b,0x02,0x00,0x64,0x01,0x00,0x11,0x01,0x00,0x39,0x01,};
static const mrb_irep gem_mrblib_mruby_sprintf_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_sprintf_proc_iseq_1,
  NULL,gem_mrblib_mruby_sprintf_proc_syms_1,gem_mrblib_mruby_sprintf_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  13,0,1,1,0
};
static const mrb_irep *gem_mrblib_mruby_sprintf_proc_reps_0[1] = {
  &gem_mrblib_mruby_sprintf_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_sprintf_proc_syms_0, 1, (MRB_SYM(String), ), const);
static const mrb_code gem_mrblib_mruby_sprintf_proc_iseq_0[13] = {
0x13,0x01,0x13,0x02,0x60,0x01,0x00,0x62,0x01,0x00,0x39,0x01,0x6b,};
static const mrb_irep gem_mrblib_mruby_sprintf_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_sprintf_proc_iseq_0,
  NULL,gem_mrblib_mruby_sprintf_proc_syms_0,gem_mrblib_mruby_sprintf_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  13,0,1,1,0
};
static
const struct RProc gem_mrblib_mruby_sprintf_proc[] = {{
NULL,NULL,MRB_TT_PROC,7,0,{&gem_mrblib_mruby_sprintf_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_sprintf_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_sprintf_gem_init(mrb_state *mrb);
void mrb_mruby_sprintf_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_sprintf_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_sprintf_proc_init_syms(mrb);
  mrb_mruby_sprintf_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_sprintf_proc);
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

void GENERATED_TMP_mrb_mruby_sprintf_gem_final(mrb_state *mrb) {
  mrb_mruby_sprintf_gem_final(mrb);
}
