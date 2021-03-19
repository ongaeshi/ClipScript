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

mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_syms_8, 2, (MRB_OPSYM(aref), MRB_SYM(call), ), const);
static const mrb_code gem_mrblib_mruby_struct_proc_iseq_8[23] = {
0x35,0x04,0x00,0x00,0x23,0x03,0x01,0x00,0x14,0x04,0x01,0x05,0x01,0x2f,0x04,0x00,0x01,0x2f,0x03,0x01,
0x01,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_lv_8, 2, (MRB_SYM(field), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_struct_proc_irep_8 = {
  3,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_struct_proc_iseq_8,
  NULL,gem_mrblib_mruby_struct_proc_syms_8,NULL,
  gem_mrblib_mruby_struct_proc_lv_8,
  NULL,					/* debug_info */
  23,0,2,0,0
};
static const mrb_irep *gem_mrblib_mruby_struct_proc_reps_2[1] = {
  &gem_mrblib_mruby_struct_proc_irep_8,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_syms_2, 3, (MRB_SYM(class), MRB_SYM(members), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_struct_proc_iseq_2[25] = {
0x35,0x00,0x00,0x01,0x14,0x02,0x2f,0x02,0x00,0x00,0x2f,0x02,0x01,0x00,0x59,0x03,0x00,0x30,0x02,0x02,
0x00,0x14,0x02,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_lv_2, 1, (MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_struct_proc_irep_2 = {
  2,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_struct_proc_iseq_2,
  NULL,gem_mrblib_mruby_struct_proc_syms_2,gem_mrblib_mruby_struct_proc_reps_2,
  gem_mrblib_mruby_struct_proc_lv_2,
  NULL,					/* debug_info */
  25,0,3,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_syms_15, 3, (MRB_SYM(to_sym), MRB_OPSYM(aref), MRB_SYM(call), ), const);
static const mrb_code gem_mrblib_mruby_struct_proc_iseq_15[30] = {
0x35,0x04,0x00,0x00,0x23,0x03,0x01,0x00,0x01,0x04,0x01,0x2f,0x04,0x00,0x00,0x14,0x05,0x01,0x06,0x01,
0x2f,0x05,0x01,0x01,0x2f,0x03,0x02,0x02,0x39,0x03,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_lv_15, 2, (MRB_SYM(field), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_struct_proc_irep_15 = {
  3,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_struct_proc_iseq_15,
  NULL,gem_mrblib_mruby_struct_proc_syms_15,NULL,
  gem_mrblib_mruby_struct_proc_lv_15,
  NULL,					/* debug_info */
  30,0,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_struct_proc_reps_3[1] = {
  &gem_mrblib_mruby_struct_proc_irep_15,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_syms_3, 3, (MRB_SYM(class), MRB_SYM(members), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_struct_proc_iseq_3[25] = {
0x35,0x00,0x00,0x01,0x14,0x02,0x2f,0x02,0x00,0x00,0x2f,0x02,0x01,0x00,0x59,0x03,0x00,0x30,0x02,0x02,
0x00,0x14,0x02,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_lv_3, 1, (MRB_SYM(block), ), const);
static const mrb_irep gem_mrblib_mruby_struct_proc_irep_3 = {
  2,4,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_struct_proc_iseq_3,
  NULL,gem_mrblib_mruby_struct_proc_syms_3,gem_mrblib_mruby_struct_proc_reps_3,
  gem_mrblib_mruby_struct_proc_lv_3,
  NULL,					/* debug_info */
  25,0,3,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_syms_22, 3, (MRB_OPSYM(aref), MRB_SYM(call), MRB_SYM(push), ), const);
static const mrb_code gem_mrblib_mruby_struct_proc_iseq_22[49] = {
0x35,0x04,0x00,0x00,0x14,0x04,0x01,0x05,0x01,0x2f,0x04,0x00,0x01,0x01,0x03,0x04,0x23,0x04,0x01,0x00,
0x01,0x05,0x03,0x2f,0x04,0x01,0x01,0x27,0x04,0x00,0x0e,0x23,0x04,0x02,0x00,0x01,0x05,0x03,0x2f,0x04,
0x02,0x01,0x25,0x00,0x02,0x13,0x04,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_lv_22, 3, (MRB_SYM(field), MRB_OPSYM(and), MRB_SYM(val), ), const);
static const mrb_irep gem_mrblib_mruby_struct_proc_irep_22 = {
  4,7,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_struct_proc_iseq_22,
  NULL,gem_mrblib_mruby_struct_proc_syms_22,NULL,
  gem_mrblib_mruby_struct_proc_lv_22,
  NULL,					/* debug_info */
  49,0,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_struct_proc_reps_4[1] = {
  &gem_mrblib_mruby_struct_proc_irep_22,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_syms_4, 3, (MRB_SYM(class), MRB_SYM(members), MRB_SYM(each), ), const);
static const mrb_code gem_mrblib_mruby_struct_proc_iseq_4[29] = {
0x35,0x00,0x00,0x01,0x48,0x03,0x00,0x01,0x02,0x03,0x14,0x03,0x2f,0x03,0x00,0x00,0x2f,0x03,0x01,0x00,
0x59,0x04,0x00,0x30,0x03,0x02,0x00,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_lv_4, 2, (MRB_SYM(block), MRB_SYM(ary), ), const);
static const mrb_irep gem_mrblib_mruby_struct_proc_irep_4 = {
  3,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_struct_proc_iseq_4,
  NULL,gem_mrblib_mruby_struct_proc_syms_4,gem_mrblib_mruby_struct_proc_reps_4,
  gem_mrblib_mruby_struct_proc_lv_4,
  NULL,					/* debug_info */
  29,0,3,1,0
};
static const mrb_pool_value gem_mrblib_mruby_struct_proc_pool_29[1] = {
{IREP_TT_STR|(1<<2), {"\x3d"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_syms_29, 3, (MRB_SYM(to_s), MRB_SYM(_inspect), MRB_SYM(push), ), const);
static const mrb_code gem_mrblib_mruby_struct_proc_iseq_29[39] = {
0x35,0x08,0x00,0x00,0x23,0x04,0x05,0x00,0x01,0x05,0x01,0x2f,0x05,0x00,0x00,0x51,0x06,0x00,0x3d,0x05,
0x01,0x06,0x02,0x23,0x07,0x01,0x00,0x2f,0x06,0x01,0x01,0x3d,0x05,0x2f,0x04,0x02,0x01,0x39,0x04,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_lv_29, 3, (MRB_SYM(k), MRB_SYM(v), MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_struct_proc_irep_29 = {
  4,9,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_struct_proc_iseq_29,
  gem_mrblib_mruby_struct_proc_pool_29,gem_mrblib_mruby_struct_proc_syms_29,NULL,
  gem_mrblib_mruby_struct_proc_lv_29,
  NULL,					/* debug_info */
  39,1,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_struct_proc_reps_5[1] = {
  &gem_mrblib_mruby_struct_proc_irep_29,
};
static const mrb_pool_value gem_mrblib_mruby_struct_proc_pool_5[6] = {
{IREP_TT_STR|(9<<2), {"\x23\x3c\x73\x74\x72\x75\x63\x74\x20"}},
{IREP_TT_STR|(5<<2), {"\x3a\x2e\x2e\x2e\x3e"}},
{IREP_TT_STR|(1<<2), {"\x23"}},
{IREP_TT_STR|(1<<2), {"\x20"}},
{IREP_TT_STR|(2<<2), {"\x2c\x20"}},
{IREP_TT_STR|(1<<2), {"\x3e"}},
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_syms_5, 7, (MRB_SYM(object_id), MRB_OPSYM(aref), MRB_SYM(class), MRB_OPSYM(aset), MRB_SYM(to_s), MRB_SYM(each_pair), MRB_SYM(join), ), const);
static const mrb_code gem_mrblib_mruby_struct_proc_iseq_5[144] = {
0x35,0x04,0x00,0x00,0x01,0x06,0x01,0x14,0x07,0x2f,0x07,0x00,0x00,0x2f,0x06,0x01,0x01,0x27,0x06,0x00,
0x12,0x51,0x06,0x00,0x14,0x07,0x2f,0x07,0x02,0x00,0x53,0x06,0x51,0x07,0x01,0x53,0x06,0x39,0x06,0x15,
0x06,0x01,0x07,0x01,0x14,0x08,0x2f,0x08,0x00,0x00,0x01,0x09,0x06,0x2f,0x07,0x03,0x02,0x14,0x06,0x2f,
0x06,0x02,0x00,0x2f,0x06,0x04,0x00,0x01,0x03,0x06,0x07,0x07,0x2f,0x06,0x01,0x01,0x51,0x07,0x02,0x43,
0x06,0x27,0x06,0x00,0x06,0x51,0x04,0x00,0x25,0x00,0x10,0x51,0x06,0x00,0x01,0x07,0x03,0x53,0x06,0x51,
0x07,0x03,0x53,0x06,0x01,0x04,0x06,0x48,0x06,0x00,0x01,0x05,0x06,0x14,0x06,0x59,0x07,0x00,0x30,0x06,
0x05,0x00,0x01,0x06,0x04,0x01,0x07,0x05,0x51,0x08,0x04,0x2f,0x07,0x06,0x01,0x3d,0x06,0x51,0x07,0x05,
0x3d,0x06,0x39,0x06,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_lv_5, 5, (MRB_SYM(recur_list), MRB_OPSYM(and), MRB_SYM(name), MRB_SYM(str), MRB_SYM(buf), ), const);
static const mrb_irep gem_mrblib_mruby_struct_proc_irep_5 = {
  6,11,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_struct_proc_iseq_5,
  gem_mrblib_mruby_struct_proc_pool_5,gem_mrblib_mruby_struct_proc_syms_5,gem_mrblib_mruby_struct_proc_reps_5,
  gem_mrblib_mruby_struct_proc_lv_5,
  NULL,					/* debug_info */
  144,6,7,1,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_syms_6, 1, (MRB_SYM(_inspect), ), const);
static const mrb_code gem_mrblib_mruby_struct_proc_iseq_6[15] = {
0x35,0x00,0x00,0x00,0x14,0x02,0x54,0x03,0x00,0x2f,0x02,0x00,0x01,0x39,0x02,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_lv_6, 1, (MRB_OPSYM(and), ), const);
static const mrb_irep gem_mrblib_mruby_struct_proc_irep_6 = {
  2,5,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_struct_proc_iseq_6,
  NULL,gem_mrblib_mruby_struct_proc_syms_6,NULL,
  gem_mrblib_mruby_struct_proc_lv_6,
  NULL,					/* debug_info */
  15,0,1,0,0
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_syms_7, 3, (MRB_OPSYM(aref), MRB_SYM(size), MRB_SYM(dig), ), const);
static const mrb_code gem_mrblib_mruby_struct_proc_iseq_7[59] = {
0x35,0x04,0x10,0x00,0x14,0x05,0x01,0x06,0x01,0x2f,0x05,0x00,0x01,0x01,0x04,0x05,0x01,0x05,0x02,0x2f,
0x05,0x01,0x00,0x07,0x06,0x46,0x05,0x27,0x05,0x00,0x17,0x01,0x05,0x04,0x01,0x06,0x05,0x28,0x06,0x00,
0x0a,0x13,0x06,0x01,0x07,0x02,0x4a,0x06,0x2d,0x05,0x02,0x25,0x00,0x03,0x01,0x05,0x04,0x39,0x05,};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_lv_7, 4, (MRB_SYM(idx), MRB_SYM(args), MRB_OPSYM(and), MRB_SYM(n), ), const);
static const mrb_irep gem_mrblib_mruby_struct_proc_irep_7 = {
  5,8,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_struct_proc_iseq_7,
  NULL,gem_mrblib_mruby_struct_proc_syms_7,NULL,
  gem_mrblib_mruby_struct_proc_lv_7,
  NULL,					/* debug_info */
  59,0,3,0,0
};
static const mrb_irep *gem_mrblib_mruby_struct_proc_reps_1[6] = {
  &gem_mrblib_mruby_struct_proc_irep_2,
  &gem_mrblib_mruby_struct_proc_irep_3,
  &gem_mrblib_mruby_struct_proc_irep_4,
  &gem_mrblib_mruby_struct_proc_irep_5,
  &gem_mrblib_mruby_struct_proc_irep_6,
  &gem_mrblib_mruby_struct_proc_irep_7,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_syms_1, 7, (MRB_SYM(each), MRB_SYM(each_pair), MRB_SYM(select), MRB_SYM(_inspect), MRB_SYM(inspect), MRB_SYM(to_s), MRB_SYM(dig), ), const);
static const mrb_code gem_mrblib_mruby_struct_proc_iseq_1[56] = {
0x68,0x01,0x5b,0x02,0x00,0x64,0x01,0x00,0x68,0x01,0x5b,0x02,0x01,0x64,0x01,0x01,0x68,0x01,0x5b,0x02,
0x02,0x64,0x01,0x02,0x68,0x01,0x5b,0x02,0x03,0x64,0x01,0x03,0x68,0x01,0x5b,0x02,0x04,0x64,0x01,0x04,
0x65,0x05,0x04,0x68,0x01,0x5b,0x02,0x05,0x64,0x01,0x06,0x11,0x01,0x06,0x39,0x01,};
static const mrb_irep gem_mrblib_mruby_struct_proc_irep_1 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_struct_proc_iseq_1,
  NULL,gem_mrblib_mruby_struct_proc_syms_1,gem_mrblib_mruby_struct_proc_reps_1,
  NULL,					/* lv */
  NULL,					/* debug_info */
  56,0,7,6,0
};
static const mrb_irep *gem_mrblib_mruby_struct_proc_reps_0[1] = {
  &gem_mrblib_mruby_struct_proc_irep_1,
};
mrb_DEFINE_SYMS_VAR(gem_mrblib_mruby_struct_proc_syms_0, 1, (MRB_SYM(Struct), ), const);
static const mrb_code gem_mrblib_mruby_struct_proc_iseq_0[13] = {
0x13,0x01,0x13,0x02,0x60,0x01,0x00,0x62,0x01,0x00,0x39,0x01,0x6b,};
static const mrb_irep gem_mrblib_mruby_struct_proc_irep_0 = {
  1,3,0,
  MRB_IREP_STATIC,gem_mrblib_mruby_struct_proc_iseq_0,
  NULL,gem_mrblib_mruby_struct_proc_syms_0,gem_mrblib_mruby_struct_proc_reps_0,
  NULL,					/* lv */
  NULL,					/* debug_info */
  13,0,1,1,0
};
static
const struct RProc gem_mrblib_mruby_struct_proc[] = {{
NULL,NULL,MRB_TT_PROC,7,0,{&gem_mrblib_mruby_struct_proc_irep_0},NULL,{NULL},
}};
static void
gem_mrblib_mruby_struct_proc_init_syms(mrb_state *mrb)
{
}
void mrb_mruby_struct_gem_init(mrb_state *mrb);
void mrb_mruby_struct_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_struct_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  gem_mrblib_mruby_struct_proc_init_syms(mrb);
  mrb_mruby_struct_gem_init(mrb);
  mrb_load_proc(mrb, gem_mrblib_mruby_struct_proc);
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

void GENERATED_TMP_mrb_mruby_struct_gem_final(mrb_state *mrb) {
  mrb_mruby_struct_gem_final(mrb);
}
