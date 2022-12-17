#pragma once
#ifndef kk_day2_H
#define kk_day2_H
// Koka generated module: "day2", koka version: 2.4.0, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core.h"
#include "std_text_parse.h"
#include "std_os_path.h"
#include "std_os_dir.h"
#include "std_os_file.h"

// type declarations

// value type day2/res
enum kk_day2__res_e {
  kk_day2_L,
  kk_day2_D,
  kk_day2_W
};
typedef uint8_t kk_day2__res;

static inline kk_day2__res kk_day2__new_L(kk_context_t* _ctx) {
  return kk_day2_L;
}
static inline kk_day2__res kk_day2__new_D(kk_context_t* _ctx) {
  return kk_day2_D;
}
static inline kk_day2__res kk_day2__new_W(kk_context_t* _ctx) {
  return kk_day2_W;
}
static inline bool kk_day2__is_L(kk_day2__res x) {
  return (x == kk_day2_L);
}
static inline bool kk_day2__is_D(kk_day2__res x) {
  return (x == kk_day2_D);
}
static inline bool kk_day2__is_W(kk_day2__res x) {
  return (x == kk_day2_W);
}
static inline kk_day2__res kk_day2__res_dup(kk_day2__res _x) {
  return _x;
}
static inline void kk_day2__res_drop(kk_day2__res _x, kk_context_t* _ctx) {
  
}
static inline kk_box_t kk_day2__res_box(kk_day2__res _x, kk_context_t* _ctx) {
  return kk_enum_box(_x);
}
static inline kk_day2__res kk_day2__res_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return (kk_day2__res)kk_enum_unbox(_x);
}

// value type day2/rps
enum kk_day2__rps_e {
  kk_day2_Rock,
  kk_day2_Paper,
  kk_day2_Scissors
};
typedef uint8_t kk_day2__rps;

static inline kk_day2__rps kk_day2__new_Rock(kk_context_t* _ctx) {
  return kk_day2_Rock;
}
static inline kk_day2__rps kk_day2__new_Paper(kk_context_t* _ctx) {
  return kk_day2_Paper;
}
static inline kk_day2__rps kk_day2__new_Scissors(kk_context_t* _ctx) {
  return kk_day2_Scissors;
}
static inline bool kk_day2__is_Rock(kk_day2__rps x) {
  return (x == kk_day2_Rock);
}
static inline bool kk_day2__is_Paper(kk_day2__rps x) {
  return (x == kk_day2_Paper);
}
static inline bool kk_day2__is_Scissors(kk_day2__rps x) {
  return (x == kk_day2_Scissors);
}
static inline kk_day2__rps kk_day2__rps_dup(kk_day2__rps _x) {
  return _x;
}
static inline void kk_day2__rps_drop(kk_day2__rps _x, kk_context_t* _ctx) {
  
}
static inline kk_box_t kk_day2__rps_box(kk_day2__rps _x, kk_context_t* _ctx) {
  return kk_enum_box(_x);
}
static inline kk_day2__rps kk_day2__rps_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return (kk_day2__rps)kk_enum_unbox(_x);
}

// value declarations
 
// Automatically generated. Tests for the `L` constructor of the `:res` type.

static inline bool kk_day2_is_l(kk_day2__res res0, kk_context_t* _ctx) { /* (res : res) -> bool */ 
  if (kk_day2__is_L(res0)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `D` constructor of the `:res` type.

static inline bool kk_day2_is_d(kk_day2__res res0, kk_context_t* _ctx) { /* (res : res) -> bool */ 
  if (kk_day2__is_D(res0)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `W` constructor of the `:res` type.

static inline bool kk_day2_is_w(kk_day2__res res0, kk_context_t* _ctx) { /* (res : res) -> bool */ 
  if (kk_day2__is_W(res0)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Rock` constructor of the `:rps` type.

static inline bool kk_day2_is_rock(kk_day2__rps rps0, kk_context_t* _ctx) { /* (rps : rps) -> bool */ 
  if (kk_day2__is_Rock(rps0)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Paper` constructor of the `:rps` type.

static inline bool kk_day2_is_paper(kk_day2__rps rps0, kk_context_t* _ctx) { /* (rps : rps) -> bool */ 
  if (kk_day2__is_Paper(rps0)) {
    return true;
  }
  {
    return false;
  }
}
 
// Automatically generated. Tests for the `Scissors` constructor of the `:rps` type.

static inline bool kk_day2_is_scissors(kk_day2__rps rps0, kk_context_t* _ctx) { /* (rps : rps) -> bool */ 
  if (kk_day2__is_Scissors(rps0)) {
    return true;
  }
  {
    return false;
  }
}

static inline kk_string_t kk_day2_show(kk_day2__rps m, kk_context_t* _ctx) { /* (m : rps) -> string */ 
  if (kk_day2__is_Rock(m)) {
    kk_define_string_literal(, _s32701, 4, "Rock")
    return kk_string_dup(_s32701);
  }
  if (kk_day2__is_Paper(m)) {
    kk_define_string_literal(, _s32702, 5, "Paper")
    return kk_string_dup(_s32702);
  }
  {
    kk_define_string_literal(, _s32703, 8, "Scissors")
    return kk_string_dup(_s32703);
  }
}

static inline kk_string_t kk_day2_show_1(kk_day2__res r, kk_context_t* _ctx) { /* (r : res) -> string */ 
  if (kk_day2__is_L(r)) {
    kk_define_string_literal(, _s32704, 1, "L")
    return kk_string_dup(_s32704);
  }
  if (kk_day2__is_D(r)) {
    kk_define_string_literal(, _s32705, 1, "D")
    return kk_string_dup(_s32705);
  }
  {
    kk_define_string_literal(, _s32706, 1, "W")
    return kk_string_dup(_s32706);
  }
}

kk_day2__res kk_day2_res(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> exn res */ 

kk_day2__rps kk_day2_rps(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> exn rps */ 

kk_std_core_types__maybe kk_day2_split_tuple(kk_string_t s, kk_context_t* _ctx); /* (s : string) -> maybe<(string, string)> */ 

static inline bool kk_day2__lp__eq__eq__rp_(kk_std_core_types__maybe x, kk_std_core_types__maybe y, kk_context_t* _ctx) { /* forall<a> (x : maybe<a>, y : maybe<a>) -> bool */ 
  if (kk_std_core_types__is_Nothing(x) && kk_std_core_types__is_Nothing(y)) {
    return true;
  }
  {
    kk_std_core_types__maybe_drop(y, _ctx);
    kk_std_core_types__maybe_drop(x, _ctx);
    return false;
  }
}

static inline kk_box_t kk_day2_curry(kk_function_t f, kk_box_t x, kk_box_t y, kk_context_t* _ctx) { /* forall<a,b,c> (f : (a, b) -> c, x : a, y : b) -> c */ 
  return kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), f, (f, x, y, _ctx));
}

kk_std_core_types__tuple2_ kk_day2_play(kk_day2__rps p1, kk_day2__rps p2, kk_context_t* _ctx); /* (p1 : rps, p2 : rps) -> exn (int, int) */ 

kk_std_core_types__tuple2_ kk_day2_play2(kk_day2__rps p, kk_day2__res r, kk_context_t* _ctx); /* (p : rps, r : res) -> <console,exn> (int, int) */ 

kk_unit_t kk_day2__mlift32286_main(kk_std_core__list _y_32275, kk_context_t* _ctx); /* (list<(int, int)>) -> <console,exn,fsys> () */ 
 
// monadic lift

static inline kk_std_core_types__tuple2_ kk_day2__mlift32287_main(kk_day2__rps _c_32270, kk_day2__res _c_32272, kk_context_t* _ctx) { /* (rps, res) -> (rps, res) */ 
  return kk_std_core_types__new_dash__lp__comma__rp_(kk_day2__rps_box(_c_32270, _ctx), kk_day2__res_box(_c_32272, _ctx), _ctx);
}

kk_std_core_types__tuple2_ kk_day2__mlift32288_main(kk_string_t s2_32255, kk_day2__rps _c_32270, kk_context_t* _ctx); /* (s2.32255 : string, rps) -> (rps, res) */ 

kk_unit_t kk_day2__mlift32289_main(kk_std_core__list _y_32273, kk_context_t* _ctx); /* (list<(rps, res)>) -> <exn,console,fsys> () */ 

kk_unit_t kk_day2__mlift32290_main(kk_std_core__list _y_32268, kk_context_t* _ctx); /* (list<(string, string)>) -> <exn,console,fsys> () */ 

kk_unit_t kk_day2__mlift32291_main(kk_std_core__list _y_32267, kk_context_t* _ctx); /* (list<maybe<(string, string)>>) -> <exn,console,fsys> () */ 

kk_unit_t kk_day2__mlift32292_main(kk_std_core__list _y_32266, kk_context_t* _ctx); /* (list<string>) -> <exn,console,fsys> () */ 

kk_unit_t kk_day2__mlift32293_main(kk_std_core__list _y_32265, kk_context_t* _ctx); /* (list<string>) -> <exn,console,fsys> () */ 

kk_unit_t kk_day2__mlift32294_main(kk_string_t _y_32264, kk_context_t* _ctx); /* (string) -> <exn,fsys> () */ 

kk_unit_t kk_day2_main(kk_context_t* _ctx); /* () -> <console,exn,fsys> () */ 

kk_unit_t kk_day2__hmain(kk_context_t* _ctx); /* () -> <console,fsys> () */ 

void kk_day2__init(kk_context_t* _ctx);


void kk_day2__done(kk_context_t* _ctx);

#endif // header
