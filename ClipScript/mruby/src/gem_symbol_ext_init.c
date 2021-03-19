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

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_symbol_ext_proc_syms_2, 3, (MRB_SYM(to_s), MRB_SYM_B(capitalize), MRB_SYM(to_sym), ), const);
static const mrb_code gem_mrblib_mruby_symbol_ext_proc_iseq_2[26] = {
0x35,0x00,0x00,0x00,0x14,0x02,0x2f,0x02,0x00,0x00,0x2f,0x02,0x01,0x00,0x26,0x02,0x00,0x02,0x14,0x02,
0x2f,0x02,0x02,0x00,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_symbol_ext_proc_lv_2, 1, (MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_symbol_ext_proc_irep_2 = {
  2,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_symbol_ext_proc_iseq_2,
  NULL,gem_mrblib_mruby_symbol_ext_proc_syms_2,NULL,
  gem_mrblib_mruby_symbol_ext_proc_lv_2,
  NULL,					/* debug_info */
  26,0,3,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_symbol_ext_proc_syms_3, 3, (MRB_SYM(to_s), MRB_SYM_B(downcase), MRB_SYM(to_sym), ), const);
static const mrb_code gem_mrblib_mruby_symbol_ext_proc_iseq_3[26] = {
0x35,0x00,0x00,0x00,0x14,0x02,0x2f,0x02,0x00,0x00,0x2f,0x02,0x01,0x00,0x26,0x02,0x00,0x02,0x14,0x02,
0x2f,0x02,0x02,0x00,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_symbol_ext_proc_lv_3, 1, (MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_symbol_ext_proc_irep_3 = {
  2,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_symbol_ext_proc_iseq_3,
  NULL,gem_mrblib_mruby_symbol_ext_proc_syms_3,NULL,
  gem_mrblib_mruby_symbol_ext_proc_lv_3,
  NULL,					/* debug_info */
  26,0,3,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_symbol_ext_proc_syms_4, 3, (MRB_SYM(to_s), MRB_SYM_B(upcase), MRB_SYM(to_sym), ), const);
static const mrb_code gem_mrblib_mruby_symbol_ext_proc_iseq_4[26] = {
0x35,0x00,0x00,0x00,0x14,0x02,0x2f,0x02,0x00,0x00,0x2f,0x02,0x01,0x00,0x26,0x02,0x00,0x02,0x14,0x02,
0x2f,0x02,0x02,0x00,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_symbol_ext_proc_lv_4, 1, (MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_symbol_ext_proc_irep_4 = {
  2,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_symbol_ext_proc_iseq_4,
  NULL,gem_mrblib_mruby_symbol_ext_proc_syms_4,NULL,
  gem_mrblib_mruby_symbol_ext_proc_lv_4,
  NULL,					/* debug_info */
  26,0,3,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_symbol_ext_proc_syms_5, 6, (MRB_SYM(Symbol), MRB_SYM_Q(kind_of), MRB_SYM(to_s), MRB_SYM_B(upcase), MRB_SYM(upcase), MRB_OPSYM(cmp), ), const);
static const mrb_code gem_mrblib_mruby_symbol_ext_proc_iseq_5[61] = {
0x35,0x04,0x00,0x00,0x01,0x05,0x01,0x1f,0x06,0x00,0x2f,0x05,0x01,0x01,0x26,0x05,0x00,0x04,0x13,0x05,
0x39,0x05,0x14,0x05,0x2f,0x05,0x02,0x00,0x01,0x03,0x05,0x2f,0x05,0x03,0x00,0x01,0x05,0x01,0x2f,0x05,
0x02,0x00,0x2f,0x05,0x04,0x00,0x01,0x04,0x05,0x01,0x05,0x03,0x01,0x06,0x04,0x2f,0x05,0x05,0x01,0x39,
0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_symbol_ext_proc_lv_5, 4, (MRB_SYM(other), MRB_OPSYM(and), MRB_SYM(lhs), MRB_SYM(rhs), ), const);
static const mrb_irep gem_mrblib_mruby_symbol_ext_proc_irep_5 = {
  5,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_symbol_ext_proc_iseq_5,
  NULL,gem_mrblib_mruby_symbol_ext_proc_syms_5,NULL,
  gem_mrblib_mruby_symbol_ext_proc_lv_5,
  NULL,					/* debug_info */
  61,0,6,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_symbol_ext_proc_syms_6, 1, (MRB_SYM(casecmp), ), const);
static const mrb_code gem_mrblib_mruby_symbol_ext_proc_iseq_6[36] = {
0x35,0x04,0x00,0x00,0x14,0x04,0x01,0x05,0x01,0x2f,0x04,0x00,0x01,0x01,0x03,0x04,0x28,0x04,0x00,0x03,
0x25,0x00,0x04,0x13,0x04,0x39,0x04,0x01,0x04,0x03,0x07,0x05,0x43,0x04,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_symbol_ext_proc_lv_6, 3, (MRB_SYM(sym), MRB_OPSYM(and), MRB_SYM(c), ), const);
static const mrb_irep gem_mrblib_mruby_symbol_ext_proc_irep_6 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_symbol_ext_proc_iseq_6,
  NULL,gem_mrblib_mruby_symbol_ext_proc_syms_6,NULL,
  gem_mrblib_mruby_symbol_ext_proc_lv_6,
  NULL,					/* debug_info */
  36,0,1,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_symbol_ext_proc_syms_7, 1, (MRB_SYM(length), ), const);
static const mrb_code gem_mrblib_mruby_symbol_ext_proc_iseq_7[16] = {
0x35,0x00,0x00,0x00,0x14,0x02,0x2f,0x02,0x00,0x00,0x07,0x03,0x43,0x02,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_symbol_ext_proc_lv_7, 1, (MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_symbol_ext_proc_irep_7 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_symbol_ext_proc_iseq_7,
  NULL,gem_mrblib_mruby_symbol_ext_proc_syms_7,NULL,
  gem_mrblib_mruby_symbol_ext_proc_lv_7,
  NULL,					/* debug_info */
  16,0,1,0,0
};
static const mrb_irep *gem_mrblib_mruby_symbol_ext_proc_reps_1[6] = {
  &gem_mrblib_mruby_symbol_ext_proc_irep_2,
  &gem_mrblib_mruby_symbol_ext_proc_irep_3,
  &gem_mrblib_mruby_symbol_ext_proc_irep_4,
  &gem_mrblib_mruby_symbol_ext_proc_irep_5,
  &gem_mrblib_mruby_symbol_ext_proc_irep_6,
  &gem_mrblib_mruby_symbol_ext_proc_irep_7,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_symbol_ext_proc_syms_1, 10, (MRB_SYM(Comparable), MRB_SYM(include), MRB_SYM(intern), MRB_SYM(to_sym), MRB_SYM(capitalize), MRB_SYM(downcase), MRB_SYM(upcase), MRB_SYM(casecmp), MRB_SYM_Q(casecmp), MRB_SYM_Q(empty), ), const);
static const mrb_code gem_mrblib_mruby_symbol_ext_proc_iseq_1[65] = {
0x14,0x01,0x1f,0x02,0x00,0x2f,0x01,0x01,0x01,0x65,0x02,0x03,0x68,0x01,0x5b,0x02,0x00,0x64,0x01,0x04,
0x68,0x01,0x5b,0x02,0x01,0x64,0x01,0x05,0x68,0x01,0x5b,0x02,0x02,0x64,0x01,0x06,0x68,0x01,0x5b,0x02,
0x03,0x64,0x01,0x07,0x68,0x01,0x5b,0x02,0x04,0x64,0x01,0x08,0x68,0x01,0x5b,0x02,0x05,0x64,0x01,0x09,
0x11,0x01,0x09,0x39,0x01,};
static const mrb_irep gem_mrblib_mruby_symbol_ext_proc_irep_1 = {
  1,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_symbol_ext_proc_iseq_1,
  NULL,gem_mrblib_mruby_symbol_ext_proc_syms_1,gem_mrblib_mruby_symbol_ext_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  65,0,10,6,0
};
static const mrb_irep *gem_mrblib_mruby_symbol_ext_proc_reps_0[1] = {
  &gem_mrblib_mruby_symbol_ext_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_symbol_ext_proc_syms_0, 1, (MRB_SYM(Symbol), ), const);
static const mrb_code gem_mrblib_mruby_symbol_ext_proc_iseq_0[13] = {
0x13,0x01,0x13,0x02,0x60,0x01,0x00,0x62,0x01,0x00,0x39,0x01,0x6b,};
static const mrb_irep gem_mrblib_mruby_symbol_ext_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_symbol_ext_proc_iseq_0,
  NULL,gem_mrblib_mruby_symbol_ext_proc_syms_0,gem_mrblib_mruby_symbol_ext_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  13,0,1,1,0
};
static
const struct RProc gem_mrblib_mruby_symbol_ext_proc[] = {{
NULL,NULL,MRB_TT_PROC,7,0,{&gem_mrblib_mruby_symbol_ext_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_symbol_ext_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_symbol_ext_gem_init(mrb_state *mrb);
void mrb_mruby_symbol_ext_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_symbol_ext_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_symbol_ext_proc_init_syms(mrb);
  mrb_mruby_symbol_ext_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_symbol_ext_proc);
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

void GENERATED_TMP_mrb_mruby_symbol_ext_gem_final(mrb_state *mrb) {
  mrb_mruby_symbol_ext_gem_final(mrb);
}
