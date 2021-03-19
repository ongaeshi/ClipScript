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

static const mrb_pool_value gem_mrblib_mruby_compar_ext_proc_pool_2[1] = {
{IREP_TT_STR|(46<<2), {"\x6d\x69\x6e\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x73\x6d\x61\x6c\x6c\x65\x72\x20\x74\x68\x61\x6e\x20\x6d\x61\x78\x20\x61\x72\x67\x75\x6d\x65\x6e\x74"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_compar_ext_proc_syms_2, 3, (MRB_OPSYM(cmp), MRB_SYM(ArgumentError), MRB_SYM(raise), ), const);
static const mrb_code gem_mrblib_mruby_compar_ext_proc_iseq_2[105] = {
0x35,0x08,0x00,0x00,0x01,0x05,0x01,0x01,0x06,0x02,0x2f,0x05,0x00,0x01,0x07,0x06,0x46,0x05,0x27,0x05,
0x00,0x0c,0x14,0x05,0x1f,0x06,0x01,0x51,0x07,0x00,0x2f,0x05,0x02,0x02,0x14,0x05,0x01,0x06,0x01,0x2f,
0x05,0x00,0x01,0x01,0x04,0x05,0x07,0x06,0x43,0x05,0x27,0x05,0x00,0x07,0x14,0x05,0x39,0x05,0x25,0x00,
0x0d,0x01,0x05,0x04,0x07,0x06,0x44,0x05,0x27,0x05,0x00,0x02,0x39,0x01,0x14,0x05,0x01,0x06,0x02,0x2f,
0x05,0x00,0x01,0x01,0x04,0x05,0x07,0x06,0x46,0x05,0x27,0x05,0x00,0x05,0x39,0x02,0x25,0x00,0x04,0x14,
0x05,0x39,0x05,0x39,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_compar_ext_proc_lv_2, 4, (MRB_SYM(min), MRB_SYM(max), MRB_OPSYM(and), MRB_SYM(c), ), const);
static const mrb_irep gem_mrblib_mruby_compar_ext_proc_irep_2 = {
  5,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_compar_ext_proc_iseq_2,
  gem_mrblib_mruby_compar_ext_proc_pool_2,gem_mrblib_mruby_compar_ext_proc_syms_2,NULL,
  gem_mrblib_mruby_compar_ext_proc_lv_2,
  NULL,					/* debug_info */
  105,1,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_compar_ext_proc_reps_1[1] = {
  &gem_mrblib_mruby_compar_ext_proc_irep_2,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_compar_ext_proc_syms_1, 1, (MRB_SYM(clamp), ), const);
static const mrb_code gem_mrblib_mruby_compar_ext_proc_iseq_1[13] = {
0x68,0x01,0x5b,0x02,0x00,0x64,0x01,0x00,0x11,0x01,0x00,0x39,0x01,};
static const mrb_irep gem_mrblib_mruby_compar_ext_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_compar_ext_proc_iseq_1,
  NULL,gem_mrblib_mruby_compar_ext_proc_syms_1,gem_mrblib_mruby_compar_ext_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  13,0,1,1,0
};
static const mrb_irep *gem_mrblib_mruby_compar_ext_proc_reps_0[1] = {
  &gem_mrblib_mruby_compar_ext_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_compar_ext_proc_syms_0, 1, (MRB_SYM(Comparable), ), const);
static const mrb_code gem_mrblib_mruby_compar_ext_proc_iseq_0[11] = {
0x13,0x01,0x61,0x01,0x00,0x62,0x01,0x00,0x39,0x01,0x6b,};
static const mrb_irep gem_mrblib_mruby_compar_ext_proc_irep_0 = {
  1,2,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_compar_ext_proc_iseq_0,
  NULL,gem_mrblib_mruby_compar_ext_proc_syms_0,gem_mrblib_mruby_compar_ext_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  11,0,1,1,0
};
static
const struct RProc gem_mrblib_mruby_compar_ext_proc[] = {{
NULL,NULL,MRB_TT_PROC,7,0,{&gem_mrblib_mruby_compar_ext_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_compar_ext_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_compar_ext_gem_init(mrb_state *mrb);
void mrb_mruby_compar_ext_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_compar_ext_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_compar_ext_proc_init_syms(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_compar_ext_proc);
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

void GENERATED_TMP_mrb_mruby_compar_ext_gem_final(mrb_state *mrb) {
}
