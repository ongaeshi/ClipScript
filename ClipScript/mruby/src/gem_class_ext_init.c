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

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_ext_proc_syms_2, 1, (MRB_SYM_Q(equal), ), const);
static const mrb_code gem_mrblib_mruby_class_ext_proc_iseq_2[31] = {
0x35,0x04,0x00,0x00,0x14,0x03,0x01,0x04,0x01,0x2f,0x03,0x00,0x01,0x27,0x03,0x00,0x05,0x16,0x03,0x25,
0x00,0x07,0x14,0x03,0x01,0x04,0x01,0x45,0x03,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_ext_proc_lv_2, 2, (MRB_SYM(other), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_class_ext_proc_irep_2 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_class_ext_proc_iseq_2,
  NULL,gem_mrblib_mruby_class_ext_proc_syms_2,NULL,
  gem_mrblib_mruby_class_ext_proc_lv_2,
  NULL,					/* debug_info */
  31,0,1,0,0
};
static const mrb_pool_value gem_mrblib_mruby_class_ext_proc_pool_3[1] = {
{IREP_TT_STR|(30<<2), {"\x63\x6f\x6d\x70\x61\x72\x65\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x6e\x20\x63\x6c\x61\x73\x73\x2f\x6d\x6f\x64\x75\x6c\x65"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_ext_proc_syms_3, 6, (MRB_SYM(Module), MRB_SYM_Q(is_a), MRB_SYM(TypeError), MRB_SYM(raise), MRB_SYM(ancestors), MRB_SYM_Q(include), ), const);
static const mrb_code gem_mrblib_mruby_class_ext_proc_iseq_3[82] = {
0x35,0x04,0x00,0x00,0x01,0x03,0x01,0x1f,0x04,0x00,0x2f,0x03,0x01,0x01,0x26,0x03,0x00,0x0c,0x14,0x03,
0x1f,0x04,0x02,0x51,0x05,0x00,0x2f,0x03,0x03,0x02,0x14,0x03,0x2f,0x03,0x04,0x00,0x01,0x04,0x01,0x2f,
0x03,0x05,0x01,0x27,0x03,0x00,0x07,0x15,0x03,0x39,0x03,0x25,0x00,0x1a,0x01,0x03,0x01,0x2f,0x03,0x04,
0x00,0x14,0x04,0x2f,0x03,0x05,0x01,0x27,0x03,0x00,0x07,0x16,0x03,0x39,0x03,0x25,0x00,0x02,0x13,0x03,
0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_ext_proc_lv_3, 2, (MRB_SYM(other), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_class_ext_proc_irep_3 = {
  3,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_class_ext_proc_iseq_3,
  gem_mrblib_mruby_class_ext_proc_pool_3,gem_mrblib_mruby_class_ext_proc_syms_3,NULL,
  gem_mrblib_mruby_class_ext_proc_lv_3,
  NULL,					/* debug_info */
  82,1,6,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_ext_proc_syms_4, 1, (MRB_SYM_Q(equal), ), const);
static const mrb_code gem_mrblib_mruby_class_ext_proc_iseq_4[31] = {
0x35,0x04,0x00,0x00,0x14,0x03,0x01,0x04,0x01,0x2f,0x03,0x00,0x01,0x27,0x03,0x00,0x05,0x16,0x03,0x25,
0x00,0x07,0x14,0x03,0x01,0x04,0x01,0x47,0x03,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_ext_proc_lv_4, 2, (MRB_SYM(other), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_class_ext_proc_irep_4 = {
  3,6,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_class_ext_proc_iseq_4,
  NULL,gem_mrblib_mruby_class_ext_proc_syms_4,NULL,
  gem_mrblib_mruby_class_ext_proc_lv_4,
  NULL,					/* debug_info */
  31,0,1,0,0
};
static const mrb_pool_value gem_mrblib_mruby_class_ext_proc_pool_5[1] = {
{IREP_TT_STR|(30<<2), {"\x63\x6f\x6d\x70\x61\x72\x65\x64\x20\x77\x69\x74\x68\x20\x6e\x6f\x6e\x20\x63\x6c\x61\x73\x73\x2f\x6d\x6f\x64\x75\x6c\x65"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_ext_proc_syms_5, 4, (MRB_SYM(Module), MRB_SYM_Q(is_a), MRB_SYM(TypeError), MRB_SYM(raise), ), const);
static const mrb_code gem_mrblib_mruby_class_ext_proc_iseq_5[39] = {
0x35,0x04,0x00,0x00,0x01,0x03,0x01,0x1f,0x04,0x00,0x2f,0x03,0x01,0x01,0x26,0x03,0x00,0x0c,0x14,0x03,
0x1f,0x04,0x02,0x51,0x05,0x00,0x2f,0x03,0x03,0x02,0x01,0x03,0x01,0x14,0x04,0x44,0x03,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_ext_proc_lv_5, 2, (MRB_SYM(other), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_class_ext_proc_irep_5 = {
  3,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_class_ext_proc_iseq_5,
  gem_mrblib_mruby_class_ext_proc_pool_5,gem_mrblib_mruby_class_ext_proc_syms_5,NULL,
  gem_mrblib_mruby_class_ext_proc_lv_5,
  NULL,					/* debug_info */
  39,1,4,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_ext_proc_syms_6, 3, (MRB_SYM_Q(equal), MRB_SYM(Module), MRB_SYM_Q(is_a), ), const);
static const mrb_code gem_mrblib_mruby_class_ext_proc_iseq_6[69] = {
0x35,0x04,0x00,0x00,0x14,0x04,0x01,0x05,0x01,0x2f,0x04,0x00,0x01,0x27,0x04,0x00,0x04,0x07,0x04,0x39,
0x04,0x01,0x04,0x01,0x1f,0x05,0x01,0x2f,0x04,0x02,0x01,0x26,0x04,0x00,0x04,0x13,0x04,0x39,0x04,0x14,
0x04,0x01,0x05,0x01,0x44,0x04,0x01,0x03,0x04,0x27,0x04,0x00,0x04,0x06,0x04,0x39,0x04,0x28,0x03,0x00,
0x04,0x08,0x04,0x39,0x04,0x13,0x04,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_ext_proc_lv_6, 3, (MRB_SYM(other), MRB_OPSYM(and), MRB_SYM(cmp), ), const);
static const mrb_irep gem_mrblib_mruby_class_ext_proc_irep_6 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_class_ext_proc_iseq_6,
  NULL,gem_mrblib_mruby_class_ext_proc_syms_6,NULL,
  gem_mrblib_mruby_class_ext_proc_lv_6,
  NULL,					/* debug_info */
  69,0,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_class_ext_proc_reps_1[5] = {
  &gem_mrblib_mruby_class_ext_proc_irep_2,
  &gem_mrblib_mruby_class_ext_proc_irep_3,
  &gem_mrblib_mruby_class_ext_proc_irep_4,
  &gem_mrblib_mruby_class_ext_proc_irep_5,
  &gem_mrblib_mruby_class_ext_proc_irep_6,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_ext_proc_syms_1, 5, (MRB_OPSYM(lt), MRB_OPSYM(le), MRB_OPSYM(gt), MRB_OPSYM(ge), MRB_OPSYM(cmp), ), const);
static const mrb_code gem_mrblib_mruby_class_ext_proc_iseq_1[45] = {
0x68,0x01,0x5b,0x02,0x00,0x64,0x01,0x00,0x68,0x01,0x5b,0x02,0x01,0x64,0x01,0x01,0x68,0x01,0x5b,0x02,
0x02,0x64,0x01,0x02,0x68,0x01,0x5b,0x02,0x03,0x64,0x01,0x03,0x68,0x01,0x5b,0x02,0x04,0x64,0x01,0x04,
0x11,0x01,0x04,0x39,0x01,};
static const mrb_irep gem_mrblib_mruby_class_ext_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_class_ext_proc_iseq_1,
  NULL,gem_mrblib_mruby_class_ext_proc_syms_1,gem_mrblib_mruby_class_ext_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  45,0,5,5,0
};
static const mrb_irep *gem_mrblib_mruby_class_ext_proc_reps_0[1] = {
  &gem_mrblib_mruby_class_ext_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_class_ext_proc_syms_0, 1, (MRB_SYM(Module), ), const);
static const mrb_code gem_mrblib_mruby_class_ext_proc_iseq_0[13] = {
0x13,0x01,0x13,0x02,0x60,0x01,0x00,0x62,0x01,0x00,0x39,0x01,0x6b,};
static const mrb_irep gem_mrblib_mruby_class_ext_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_class_ext_proc_iseq_0,
  NULL,gem_mrblib_mruby_class_ext_proc_syms_0,gem_mrblib_mruby_class_ext_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  13,0,1,1,0
};
static
const struct RProc gem_mrblib_mruby_class_ext_proc[] = {{
NULL,NULL,MRB_TT_PROC,7,0,{&gem_mrblib_mruby_class_ext_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_class_ext_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_class_ext_gem_init(mrb_state *mrb);
void mrb_mruby_class_ext_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_class_ext_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_class_ext_proc_init_syms(mrb);
  mrb_mruby_class_ext_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_class_ext_proc);
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

void GENERATED_TMP_mrb_mruby_class_ext_gem_final(mrb_state *mrb) {
  mrb_mruby_class_ext_gem_final(mrb);
}
