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

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_toplevel_ext_proc_syms_1, 2, (MRB_SYM(class), MRB_SYM(include), ), const);
static const mrb_code gem_mrblib_mruby_toplevel_ext_proc_iseq_1[22] = {
0x35,0x00,0x10,0x00,0x14,0x03,0x2f,0x03,0x00,0x00,0x13,0x04,0x01,0x05,0x01,0x4a,0x04,0x2d,0x03,0x01,
0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_toplevel_ext_proc_lv_1, 2, (MRB_SYM(modules), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_toplevel_ext_proc_irep_1 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_toplevel_ext_proc_iseq_1,
  NULL,gem_mrblib_mruby_toplevel_ext_proc_syms_1,NULL,
  gem_mrblib_mruby_toplevel_ext_proc_lv_1,
  NULL,					/* debug_info */
  22,0,2,0,0
};
static const mrb_code gem_mrblib_mruby_toplevel_ext_proc_iseq_2[8] = {
0x35,0x00,0x10,0x00,0x13,0x03,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_toplevel_ext_proc_lv_2, 2, (MRB_SYM(methods), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_toplevel_ext_proc_irep_2 = {
  3,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_toplevel_ext_proc_iseq_2,
  NULL,NULL,NULL,
  gem_mrblib_mruby_toplevel_ext_proc_lv_2,
  NULL,					/* debug_info */
  8,0,0,0,0
};
static const mrb_code gem_mrblib_mruby_toplevel_ext_proc_iseq_3[8] = {
0x35,0x00,0x10,0x00,0x13,0x03,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_toplevel_ext_proc_lv_3, 2, (MRB_SYM(methods), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_toplevel_ext_proc_irep_3 = {
  3,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_toplevel_ext_proc_iseq_3,
  NULL,NULL,NULL,
  gem_mrblib_mruby_toplevel_ext_proc_lv_3,
  NULL,					/* debug_info */
  8,0,0,0,0
};
static const mrb_code gem_mrblib_mruby_toplevel_ext_proc_iseq_4[8] = {
0x35,0x00,0x10,0x00,0x13,0x03,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_toplevel_ext_proc_lv_4, 2, (MRB_SYM(methods), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_toplevel_ext_proc_irep_4 = {
  3,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_toplevel_ext_proc_iseq_4,
  NULL,NULL,NULL,
  gem_mrblib_mruby_toplevel_ext_proc_lv_4,
  NULL,					/* debug_info */
  8,0,0,0,0
};
static const mrb_irep *gem_mrblib_mruby_toplevel_ext_proc_reps_0[4] = {
  &gem_mrblib_mruby_toplevel_ext_proc_irep_1,
  &gem_mrblib_mruby_toplevel_ext_proc_irep_2,
  &gem_mrblib_mruby_toplevel_ext_proc_irep_3,
  &gem_mrblib_mruby_toplevel_ext_proc_irep_4,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_toplevel_ext_proc_syms_0, 4, (MRB_SYM(include), MRB_SYM(private), MRB_SYM(protected), MRB_SYM(public), ), const);
static const mrb_code gem_mrblib_mruby_toplevel_ext_proc_iseq_0[46] = {
0x14,0x01,0x67,0x01,0x5b,0x02,0x00,0x64,0x01,0x00,0x14,0x01,0x67,0x01,0x5b,0x02,0x01,0x64,0x01,0x01,
0x14,0x01,0x67,0x01,0x5b,0x02,0x02,0x64,0x01,0x02,0x14,0x01,0x67,0x01,0x5b,0x02,0x03,0x64,0x01,0x03,
0x11,0x01,0x03,0x39,0x01,0x6b,};
static const mrb_irep gem_mrblib_mruby_toplevel_ext_proc_irep_0 = {
  1,2,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_toplevel_ext_proc_iseq_0,
  NULL,gem_mrblib_mruby_toplevel_ext_proc_syms_0,gem_mrblib_mruby_toplevel_ext_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  46,0,4,4,0
};
static
const struct RProc gem_mrblib_mruby_toplevel_ext_proc[] = {{
NULL,NULL,MRB_TT_PROC,7,0,{&gem_mrblib_mruby_toplevel_ext_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_toplevel_ext_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_toplevel_ext_gem_init(mrb_state *mrb);
void mrb_mruby_toplevel_ext_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_toplevel_ext_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_toplevel_ext_proc_init_syms(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_toplevel_ext_proc);
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

void GENERATED_TMP_mrb_mruby_toplevel_ext_gem_final(mrb_state *mrb) {
}
