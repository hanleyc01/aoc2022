// Koka generated module: "day2", koka version: 2.4.0, platform: 64-bit
#include "day2.h"

kk_day2__res kk_day2_res(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> exn res */ 
  if (kk_string_cmp_cstr_borrow(s, "X") == 0) {
    kk_string_drop(s, _ctx);
    return kk_day2__new_L(_ctx);
  }
  if (kk_string_cmp_cstr_borrow(s, "Y") == 0) {
    kk_string_drop(s, _ctx);
    return kk_day2__new_D(_ctx);
  }
  if (kk_string_cmp_cstr_borrow(s, "Z") == 0) {
    kk_string_drop(s, _ctx);
    return kk_day2__new_W(_ctx);
  }
  {
    kk_string_drop(s, _ctx);
    kk_box_t _x32707;
    kk_string_t _x32708;
    kk_define_string_literal(, _s32709, 14, "day2.kk(50, 5)")
    _x32708 = kk_string_dup(_s32709); /*string*/
    kk_string_t _x32710;
    kk_define_string_literal(, _s32711, 3, "res")
    _x32710 = kk_string_dup(_s32711); /*string*/
    _x32707 = kk_std_core_error_pattern(_x32708, _x32710, _ctx); /*0*/
    return kk_day2__res_unbox(_x32707, _ctx);
  }
}
 
// Retrieve a `rps` from a `string`

kk_day2__rps kk_day2_rps(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> exn rps */ 
  if (kk_string_cmp_cstr_borrow(s, "A") == 0) {
    kk_string_drop(s, _ctx);
    return kk_day2__new_Rock(_ctx);
  }
  if (kk_string_cmp_cstr_borrow(s, "B") == 0) {
    kk_string_drop(s, _ctx);
    return kk_day2__new_Paper(_ctx);
  }
  if (kk_string_cmp_cstr_borrow(s, "C") == 0) {
    kk_string_drop(s, _ctx);
    return kk_day2__new_Scissors(_ctx);
  }
  {
    kk_string_drop(s, _ctx);
    kk_box_t _x32712;
    kk_string_t _x32713;
    kk_define_string_literal(, _s32714, 14, "day2.kk(39, 5)")
    _x32713 = kk_string_dup(_s32714); /*string*/
    kk_string_t _x32715;
    kk_define_string_literal(, _s32716, 3, "rps")
    _x32715 = kk_string_dup(_s32716); /*string*/
    _x32712 = kk_std_core_error_pattern(_x32713, _x32715, _ctx); /*0*/
    return kk_day2__rps_unbox(_x32712, _ctx);
  }
}

kk_std_core_types__maybe kk_day2_split_tuple(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> maybe<(string, string)> */ 
  kk_vector_t v_17122;
  kk_string_t _x32717;
  kk_define_string_literal(, _s32718, 1, " ")
  _x32717 = kk_string_dup(_s32718); /*string*/
  v_17122 = kk_string_splitv(s,_x32717,kk_context()); /*vector<string>*/
  kk_std_core__list _match_32698 = kk_std_core_vlist(v_17122, kk_std_core_types__new_None(_ctx), _ctx); /*list<1001>*/;
  if (kk_std_core__is_Cons(_match_32698)) {
    struct kk_std_core_Cons* _con32719 = kk_std_core__as_Cons(_match_32698);
    kk_box_t _box_x32359 = _con32719->head;
    kk_std_core__list _pat0 = _con32719->tail;
    if (kk_std_core__is_Cons(_pat0)) {
      struct kk_std_core_Cons* _con32721 = kk_std_core__as_Cons(_pat0);
      kk_string_t xx = kk_string_unbox(_box_x32359);
      kk_box_t _box_x32360 = _con32721->head;
      kk_std_core__list _pat1 = _con32721->tail;
      if (kk_std_core__is_Nil(_pat1)) {
        kk_string_t yy = kk_string_unbox(_box_x32360);
        if (kk_likely(kk_std_core__list_is_unique(_match_32698))) {
          if (kk_likely(kk_std_core__list_is_unique(_pat0))) {
            kk_std_core__list_free(_pat0, _ctx);
          }
          else {
            kk_string_dup(yy);
            kk_std_core__list_decref(_pat0, _ctx);
          }
          kk_std_core__list_free(_match_32698, _ctx);
        }
        else {
          kk_string_dup(xx);
          kk_string_dup(yy);
          kk_std_core__list_decref(_match_32698, _ctx);
        }
        kk_box_t _x32723;
        kk_std_core_types__tuple2_ _x32724 = kk_std_core_types__new_dash__lp__comma__rp_(kk_string_box(xx), kk_string_box(yy), _ctx); /*(1004, 1005)*/
        _x32723 = kk_std_core_types__tuple2__box(_x32724, _ctx); /*1034*/
        return kk_std_core_types__new_Just(_x32723, _ctx);
      }
    }
  }
  {
    kk_std_core__list_drop(_match_32698, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// Given two `rps`, return back important win-information (as specified in problem
// description)

kk_std_core_types__tuple2_ kk_day2_play(kk_day2__rps p1, kk_day2__rps p2, kk_context_t* _ctx) { /* (p1 : rps, p2 : rps) -> exn (int, int) */ 
  if (kk_day2__is_Rock(p1) && kk_day2__is_Scissors(p2)) {
    kk_integer_t _b_32387_32367 = kk_integer_add_small_const(kk_integer_from_small(6), 1, _ctx); /*int*/;
    kk_integer_t _b_32388_32368 = kk_integer_add_small_const(kk_integer_from_small(0), 3, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32387_32367), kk_integer_box(_b_32388_32368), _ctx);
  }
  if (kk_day2__is_Rock(p1) && kk_day2__is_Paper(p2)) {
    kk_integer_t _b_32389_32369 = kk_integer_add_small_const(kk_integer_from_small(0), 1, _ctx); /*int*/;
    kk_integer_t _b_32390_32370 = kk_integer_add_small_const(kk_integer_from_small(6), 2, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32389_32369), kk_integer_box(_b_32390_32370), _ctx);
  }
  if (kk_day2__is_Rock(p1) && kk_day2__is_Rock(p2)) {
    kk_integer_t _b_32391_32371 = kk_integer_add_small_const(kk_integer_from_small(3), 1, _ctx); /*int*/;
    kk_integer_t _b_32392_32372 = kk_integer_add_small_const(kk_integer_from_small(3), 1, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32391_32371), kk_integer_box(_b_32392_32372), _ctx);
  }
  if (kk_day2__is_Scissors(p1) && kk_day2__is_Paper(p2)) {
    kk_integer_t _b_32393_32373 = kk_integer_add_small_const(kk_integer_from_small(6), 3, _ctx); /*int*/;
    kk_integer_t _b_32394_32374 = kk_integer_add_small_const(kk_integer_from_small(0), 2, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32393_32373), kk_integer_box(_b_32394_32374), _ctx);
  }
  if (kk_day2__is_Scissors(p1) && kk_day2__is_Rock(p2)) {
    kk_integer_t _b_32395_32375 = kk_integer_add_small_const(kk_integer_from_small(0), 3, _ctx); /*int*/;
    kk_integer_t _b_32396_32376 = kk_integer_add_small_const(kk_integer_from_small(6), 1, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32395_32375), kk_integer_box(_b_32396_32376), _ctx);
  }
  if (kk_day2__is_Scissors(p1) && kk_day2__is_Scissors(p2)) {
    kk_integer_t _b_32397_32377 = kk_integer_add_small_const(kk_integer_from_small(3), 3, _ctx); /*int*/;
    kk_integer_t _b_32398_32378 = kk_integer_add_small_const(kk_integer_from_small(3), 3, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32397_32377), kk_integer_box(_b_32398_32378), _ctx);
  }
  if (kk_day2__is_Paper(p1) && kk_day2__is_Rock(p2)) {
    kk_integer_t _b_32399_32379 = kk_integer_add_small_const(kk_integer_from_small(6), 2, _ctx); /*int*/;
    kk_integer_t _b_32400_32380 = kk_integer_add_small_const(kk_integer_from_small(0), 1, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32399_32379), kk_integer_box(_b_32400_32380), _ctx);
  }
  if (kk_day2__is_Paper(p1) && kk_day2__is_Scissors(p2)) {
    kk_integer_t _b_32401_32381 = kk_integer_add_small_const(kk_integer_from_small(0), 2, _ctx); /*int*/;
    kk_integer_t _b_32402_32382 = kk_integer_add_small_const(kk_integer_from_small(6), 3, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32401_32381), kk_integer_box(_b_32402_32382), _ctx);
  }
  if (kk_day2__is_Paper(p1) && kk_day2__is_Paper(p2)) {
    kk_integer_t _b_32403_32383 = kk_integer_add_small_const(kk_integer_from_small(3), 2, _ctx); /*int*/;
    kk_integer_t _b_32404_32384 = kk_integer_add_small_const(kk_integer_from_small(3), 2, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32403_32383), kk_integer_box(_b_32404_32384), _ctx);
  }
  {
    kk_box_t _x32725;
    kk_string_t _x32726;
    kk_define_string_literal(, _s32727, 14, "day2.kk(26, 5)")
    _x32726 = kk_string_dup(_s32727); /*string*/
    kk_string_t _x32728;
    kk_define_string_literal(, _s32729, 4, "play")
    _x32728 = kk_string_dup(_s32729); /*string*/
    _x32725 = kk_std_core_error_pattern(_x32726, _x32728, _ctx); /*0*/
    return kk_std_core_types__tuple2__unbox(_x32725, _ctx);
  }
}


// lift anonymous function
struct kk_day2_play2_fun32730__t {
  struct kk_function_s _base;
};
static kk_string_t kk_day2_play2_fun32730(kk_function_t _fself, kk_day2__res r0, kk_context_t* _ctx);
static kk_function_t kk_day2_new_play2_fun32730(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_play2_fun32730, _ctx)
  return kk_function_dup(_fself);
}

static kk_string_t kk_day2_play2_fun32730(kk_function_t _fself, kk_day2__res r0, kk_context_t* _ctx) {
  kk_unused(_fself);
  if (kk_day2__is_L(r0)) {
    kk_define_string_literal(, _s32731, 1, "L")
    return kk_string_dup(_s32731);
  }
  if (kk_day2__is_D(r0)) {
    kk_define_string_literal(, _s32732, 1, "D")
    return kk_string_dup(_s32732);
  }
  {
    kk_define_string_literal(, _s32733, 1, "W")
    return kk_string_dup(_s32733);
  }
}


// lift anonymous function
struct kk_day2_play2_fun32740__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_play2_fun32740(kk_function_t _fself, kk_box_t _b_32409, kk_context_t* _ctx);
static kk_function_t kk_day2_new_play2_fun32740(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_play2_fun32740, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2_play2_fun32740(kk_function_t _fself, kk_box_t _b_32409, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_day2__rps m_32457 = kk_day2__rps_unbox(_b_32409, _ctx); /*day2/rps*/;
  kk_string_t _x32741;
  if (kk_day2__is_Rock(m_32457)) {
    kk_define_string_literal(, _s32743, 4, "Rock")
    _x32741 = kk_string_dup(_s32743); /*string*/
    goto _match32742;
  }
  if (kk_day2__is_Paper(m_32457)) {
    kk_define_string_literal(, _s32744, 5, "Paper")
    _x32741 = kk_string_dup(_s32744); /*string*/
    goto _match32742;
  }
  {
    kk_define_string_literal(, _s32745, 8, "Scissors")
    _x32741 = kk_string_dup(_s32745); /*string*/
  }
  _match32742: ;
  return kk_string_box(_x32741);
}


// lift anonymous function
struct kk_day2_play2_fun32752__t {
  struct kk_function_s _base;
  kk_function_t _b_32415_32410;
};
static kk_box_t kk_day2_play2_fun32752(kk_function_t _fself, kk_box_t _b_32412, kk_context_t* _ctx);
static kk_function_t kk_day2_new_play2_fun32752(kk_function_t _b_32415_32410, kk_context_t* _ctx) {
  struct kk_day2_play2_fun32752__t* _self = kk_function_alloc_as(struct kk_day2_play2_fun32752__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day2_play2_fun32752, kk_context());
  _self->_b_32415_32410 = _b_32415_32410;
  return &_self->_base;
}

static kk_box_t kk_day2_play2_fun32752(kk_function_t _fself, kk_box_t _b_32412, kk_context_t* _ctx) {
  struct kk_day2_play2_fun32752__t* _self = kk_function_as(struct kk_day2_play2_fun32752__t*, _fself);
  kk_function_t _b_32415_32410 = _self->_b_32415_32410; /* (r0 : day2/res) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_32415_32410);}, {}, _ctx)
  kk_string_t _x32753;
  kk_day2__res _x32754 = kk_day2__res_unbox(_b_32412, _ctx); /*day2/res*/
  _x32753 = kk_function_call(kk_string_t, (kk_function_t, kk_day2__res, kk_context_t*), _b_32415_32410, (_b_32415_32410, _x32754, _ctx)); /*string*/
  return kk_string_box(_x32753);
}

kk_std_core_types__tuple2_ kk_day2_play2(kk_day2__rps p, kk_day2__res r, kk_context_t* _ctx) { /* (p : rps, r : res) -> <console,exn> (int, int) */ 
  kk_unit_t __ = kk_Unit;
  kk_function_t _b_32415_32410 = kk_day2_new_play2_fun32730(_ctx); /*(r0 : day2/res) -> string*/;
  kk_day2__res _b_32416_32411 = r; /*day2/res*/;
  kk_string_t _x32734;
  kk_string_t _x32735;
  kk_define_string_literal(, _s32736, 2, "( ")
  _x32735 = kk_string_dup(_s32736); /*string*/
  kk_string_t _x32737;
  kk_string_t _x32738;
  kk_box_t _x32739 = kk_std_core_hnd__open_none1(kk_day2_new_play2_fun32740(_ctx), kk_day2__rps_box(p, _ctx), _ctx); /*1001*/
  _x32738 = kk_string_unbox(_x32739); /*string*/
  kk_string_t _x32746;
  kk_string_t _x32747;
  kk_define_string_literal(, _s32748, 2, ", ")
  _x32747 = kk_string_dup(_s32748); /*string*/
  kk_string_t _x32749;
  kk_string_t _x32750;
  kk_box_t _x32751 = kk_std_core_hnd__open_none1(kk_day2_new_play2_fun32752(_b_32415_32410, _ctx), kk_day2__res_box(_b_32416_32411, _ctx), _ctx); /*1001*/
  _x32750 = kk_string_unbox(_x32751); /*string*/
  kk_string_t _x32755;
  kk_define_string_literal(, _s32756, 2, " )")
  _x32755 = kk_string_dup(_s32756); /*string*/
  _x32749 = kk_std_core__lp__plus__plus__1_rp_(_x32750, _x32755, _ctx); /*string*/
  _x32746 = kk_std_core__lp__plus__plus__1_rp_(_x32747, _x32749, _ctx); /*string*/
  _x32737 = kk_std_core__lp__plus__plus__1_rp_(_x32738, _x32746, _ctx); /*string*/
  _x32734 = kk_std_core__lp__plus__plus__1_rp_(_x32735, _x32737, _ctx); /*string*/
  kk_std_core_printsln(_x32734, _ctx);
  if (kk_day2__is_Rock(p) && kk_day2__is_W(r)) {
    kk_integer_t _b_32437_32417 = kk_integer_add_small_const(kk_integer_from_small(6), 2, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32437_32417), kk_integer_box(kk_integer_from_small(0)), _ctx);
  }
  if (kk_day2__is_Rock(p) && kk_day2__is_L(r)) {
    kk_integer_t _b_32439_32419 = kk_integer_add_small_const(kk_integer_from_small(0), 3, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32439_32419), kk_integer_box(kk_integer_from_small(0)), _ctx);
  }
  if (kk_day2__is_Rock(p) && kk_day2__is_D(r)) {
    kk_integer_t _b_32441_32421 = kk_integer_add_small_const(kk_integer_from_small(3), 1, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32441_32421), kk_integer_box(kk_integer_from_small(0)), _ctx);
  }
  if (kk_day2__is_Scissors(p) && kk_day2__is_W(r)) {
    kk_integer_t _b_32443_32423 = kk_integer_add_small_const(kk_integer_from_small(6), 1, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32443_32423), kk_integer_box(kk_integer_from_small(0)), _ctx);
  }
  if (kk_day2__is_Scissors(p) && kk_day2__is_L(r)) {
    kk_integer_t _b_32445_32425 = kk_integer_add_small_const(kk_integer_from_small(0), 2, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32445_32425), kk_integer_box(kk_integer_from_small(0)), _ctx);
  }
  if (kk_day2__is_Scissors(p) && kk_day2__is_D(r)) {
    kk_integer_t _b_32447_32427 = kk_integer_add_small_const(kk_integer_from_small(3), 3, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32447_32427), kk_integer_box(kk_integer_from_small(0)), _ctx);
  }
  if (kk_day2__is_Paper(p) && kk_day2__is_W(r)) {
    kk_integer_t _b_32449_32429 = kk_integer_add_small_const(kk_integer_from_small(6), 3, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32449_32429), kk_integer_box(kk_integer_from_small(0)), _ctx);
  }
  if (kk_day2__is_Paper(p) && kk_day2__is_L(r)) {
    kk_integer_t _b_32451_32431 = kk_integer_add_small_const(kk_integer_from_small(0), 1, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32451_32431), kk_integer_box(kk_integer_from_small(0)), _ctx);
  }
  if (kk_day2__is_Paper(p) && kk_day2__is_D(r)) {
    kk_integer_t _b_32453_32433 = kk_integer_add_small_const(kk_integer_from_small(3), 2, _ctx); /*int*/;
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_integer_box(_b_32453_32433), kk_integer_box(kk_integer_from_small(0)), _ctx);
  }
  {
    kk_box_t _x32757;
    kk_string_t _x32758;
    kk_define_string_literal(, _s32759, 14, "day2.kk(69, 5)")
    _x32758 = kk_string_dup(_s32759); /*string*/
    kk_string_t _x32760;
    kk_define_string_literal(, _s32761, 5, "play2")
    _x32760 = kk_string_dup(_s32761); /*string*/
    _x32757 = kk_std_core_error_pattern(_x32758, _x32760, _ctx); /*0*/
    return kk_std_core_types__tuple2__unbox(_x32757, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day2__mlift32286_main_fun32766__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_day2__mlift32286_main_fun32766(kk_function_t _fself, kk_integer_t _x132764, kk_integer_t _x232765, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32286_main_fun32766(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32286_main_fun32766, _ctx)
  return kk_function_dup(_fself);
}

static kk_integer_t kk_day2__mlift32286_main_fun32766(kk_function_t _fself, kk_integer_t _x132764, kk_integer_t _x232765, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core__lp__plus__4_rp_(_x132764, _x232765, _ctx);
}


// lift anonymous function
struct kk_day2__mlift32286_main_fun32770__t {
  struct kk_function_s _base;
  kk_function_t _b_32467_32462;
};
static kk_box_t kk_day2__mlift32286_main_fun32770(kk_function_t _fself, kk_box_t _b_32463, kk_box_t _b_32464, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32286_main_fun32770(kk_function_t _b_32467_32462, kk_context_t* _ctx) {
  struct kk_day2__mlift32286_main_fun32770__t* _self = kk_function_alloc_as(struct kk_day2__mlift32286_main_fun32770__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day2__mlift32286_main_fun32770, kk_context());
  _self->_b_32467_32462 = _b_32467_32462;
  return &_self->_base;
}

static kk_box_t kk_day2__mlift32286_main_fun32770(kk_function_t _fself, kk_box_t _b_32463, kk_box_t _b_32464, kk_context_t* _ctx) {
  struct kk_day2__mlift32286_main_fun32770__t* _self = kk_function_as(struct kk_day2__mlift32286_main_fun32770__t*, _fself);
  kk_function_t _b_32467_32462 = _self->_b_32467_32462; /* (x : int, y : int) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_32467_32462);}, {}, _ctx)
  kk_integer_t _x32771;
  kk_integer_t _x32772 = kk_integer_unbox(_b_32463); /*int*/
  kk_integer_t _x32773 = kk_integer_unbox(_b_32464); /*int*/
  _x32771 = kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _b_32467_32462, (_b_32467_32462, _x32772, _x32773, _ctx)); /*int*/
  return kk_integer_box(_x32771);
}

kk_unit_t kk_day2__mlift32286_main(kk_std_core__list _y_32275, kk_context_t* _ctx) { /* (list<(int, int)>) -> <console,exn,fsys> () */ 
  kk_std_core_types__tuple2_ _this_32295 = kk_std_core_unzip(_y_32275, _ctx); /*(list<int>, list<int>)*/;
  kk_std_core__list _b_32465_32460;
  {
    kk_box_t _box_x32458 = _this_32295.fst;
    kk_box_t _box_x32459 = _this_32295.snd;
    kk_std_core__list _x = kk_std_core__list_unbox(_box_x32458, NULL);
    kk_std_core__list_dup(_x);
    kk_std_core_types__tuple2__drop(_this_32295, _ctx);
    _b_32465_32460 = _x; /*list<int>*/
  }
  kk_integer_t _b_32466_32461 = kk_integer_from_small(0); /*int*/;
  kk_function_t _b_32467_32462 = kk_day2__new_mlift32286_main_fun32766(_ctx); /*(x : int, y : int) -> int*/;
  kk_string_t _x32767;
  kk_integer_t _x32768;
  kk_box_t _x32769 = kk_std_core_foldl(_b_32465_32460, kk_integer_box(_b_32466_32461), kk_day2__new_mlift32286_main_fun32770(_b_32467_32462, _ctx), _ctx); /*1002*/
  _x32768 = kk_integer_unbox(_x32769); /*int*/
  _x32767 = kk_std_core_show(_x32768, _ctx); /*string*/
  kk_std_core_printsln(_x32767, _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_day2__mlift32288_main_fun32781__t {
  struct kk_function_s _base;
  kk_day2__rps _c_32270;
};
static kk_box_t kk_day2__mlift32288_main_fun32781(kk_function_t _fself, kk_box_t _b_32479, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32288_main_fun32781(kk_day2__rps _c_32270, kk_context_t* _ctx) {
  struct kk_day2__mlift32288_main_fun32781__t* _self = kk_function_alloc_as(struct kk_day2__mlift32288_main_fun32781__t, 1, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day2__mlift32288_main_fun32781, kk_context());
  _self->_c_32270 = _c_32270;
  return &_self->_base;
}

static kk_box_t kk_day2__mlift32288_main_fun32781(kk_function_t _fself, kk_box_t _b_32479, kk_context_t* _ctx) {
  struct kk_day2__mlift32288_main_fun32781__t* _self = kk_function_as(struct kk_day2__mlift32288_main_fun32781__t*, _fself);
  kk_day2__rps _c_32270 = _self->_c_32270; /* day2/rps */
  kk_drop_match(_self, {kk_day2__rps_dup(_c_32270);}, {}, _ctx)
  kk_day2__res _c_32487_32272 = kk_day2__res_unbox(_b_32479, _ctx); /*day2/res*/;
  kk_day2__rps _b_32483_32476 = _c_32270; /*day2/rps*/;
  kk_day2__res _b_32484_32477 = _c_32487_32272; /*day2/res*/;
  kk_std_core_types__tuple2_ _x32782 = kk_std_core_types__new_dash__lp__comma__rp_(kk_day2__rps_box(_b_32483_32476, _ctx), kk_day2__res_box(_b_32484_32477, _ctx), _ctx); /*(1004, 1005)*/
  return kk_std_core_types__tuple2__box(_x32782, _ctx);
}

kk_std_core_types__tuple2_ kk_day2__mlift32288_main(kk_string_t s2_32255, kk_day2__rps _c_32270, kk_context_t* _ctx) { /* (s2.32255 : string, rps) -> (rps, res) */ 
  kk_day2__res x_32296;
  if (kk_string_cmp_cstr_borrow(s2_32255, "X") == 0) {
    kk_string_drop(s2_32255, _ctx);
    x_32296 = kk_day2__new_L(_ctx); /*day2/res*/
    goto _match32774;
  }
  if (kk_string_cmp_cstr_borrow(s2_32255, "Y") == 0) {
    kk_string_drop(s2_32255, _ctx);
    x_32296 = kk_day2__new_D(_ctx); /*day2/res*/
    goto _match32774;
  }
  if (kk_string_cmp_cstr_borrow(s2_32255, "Z") == 0) {
    kk_string_drop(s2_32255, _ctx);
    x_32296 = kk_day2__new_W(_ctx); /*day2/res*/
    goto _match32774;
  }
  {
    kk_string_drop(s2_32255, _ctx);
    kk_box_t _x32775;
    kk_string_t _x32776;
    kk_define_string_literal(, _s32777, 14, "day2.kk(50, 5)")
    _x32776 = kk_string_dup(_s32777); /*string*/
    kk_string_t _x32778;
    kk_define_string_literal(, _s32779, 3, "res")
    _x32778 = kk_string_dup(_s32779); /*string*/
    _x32775 = kk_std_core_error_pattern(_x32776, _x32778, _ctx); /*0*/
    x_32296 = kk_day2__res_unbox(_x32775, _ctx); /*day2/res*/
  }
  _match32774: ;
  if (kk_yielding(kk_context())) {
    kk_box_t _x32780 = kk_std_core_hnd_yield_extend(kk_day2__new_mlift32288_main_fun32781(_c_32270, _ctx), _ctx); /*1001*/
    return kk_std_core_types__tuple2__unbox(_x32780, _ctx);
  }
  {
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_day2__rps_box(_c_32270, _ctx), kk_day2__res_box(x_32296, _ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day2__mlift32289_main_fun32783__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2__mlift32289_main_fun32783(kk_function_t _fself, kk_box_t _b_32494, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32289_main_fun32783(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32289_main_fun32783, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2__mlift32289_main_fun32783(kk_function_t _fself, kk_box_t _b_32494, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2_ _x32784;
  kk_day2__rps _x32785;
  kk_std_core_types__tuple2_ _match_32696;
  kk_box_t _x32786 = kk_box_dup(_b_32494); /*1001*/
  _match_32696 = kk_std_core_types__tuple2__unbox(_x32786, _ctx); /*(day2/rps, day2/res)*/
  {
    kk_box_t _box_x32488 = _match_32696.fst;
    kk_box_t _box_x32489 = _match_32696.snd;
    kk_day2__rps _x = kk_day2__rps_unbox(_box_x32488, NULL);
    kk_std_core_types__tuple2__drop(_match_32696, _ctx);
    _x32785 = _x; /*day2/rps*/
  }
  kk_day2__res _x32789;
  kk_std_core_types__tuple2_ _match_32695 = kk_std_core_types__tuple2__unbox(_b_32494, _ctx); /*(day2/rps, day2/res)*/;
  {
    kk_box_t _box_x32490 = _match_32695.fst;
    kk_box_t _box_x32491 = _match_32695.snd;
    kk_day2__res _x0 = kk_day2__res_unbox(_box_x32491, NULL);
    kk_std_core_types__tuple2__drop(_match_32695, _ctx);
    _x32789 = _x0; /*day2/res*/
  }
  _x32784 = kk_day2_play2(_x32785, _x32789, _ctx); /*(int, int)*/
  return kk_std_core_types__tuple2__box(_x32784, _ctx);
}


// lift anonymous function
struct kk_day2__mlift32289_main_fun32793__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2__mlift32289_main_fun32793(kk_function_t _fself, kk_box_t _b_32499, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32289_main_fun32793(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32289_main_fun32793, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2__mlift32289_main_fun32793(kk_function_t _fself, kk_box_t _b_32499, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x32794 = kk_Unit;
  kk_std_core__list _x32795 = kk_std_core__list_unbox(_b_32499, _ctx); /*list<(int, int)>*/
  kk_day2__mlift32286_main(_x32795, _ctx);
  return kk_unit_box(_x32794);
}


// lift anonymous function
struct kk_day2__mlift32289_main_fun32800__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_day2__mlift32289_main_fun32800(kk_function_t _fself, kk_integer_t _x132798, kk_integer_t _x232799, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32289_main_fun32800(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32289_main_fun32800, _ctx)
  return kk_function_dup(_fself);
}

static kk_integer_t kk_day2__mlift32289_main_fun32800(kk_function_t _fself, kk_integer_t _x132798, kk_integer_t _x232799, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core__lp__plus__4_rp_(_x132798, _x232799, _ctx);
}


// lift anonymous function
struct kk_day2__mlift32289_main_fun32804__t {
  struct kk_function_s _base;
  kk_function_t _b_32510_32504;
};
static kk_box_t kk_day2__mlift32289_main_fun32804(kk_function_t _fself, kk_box_t _b_32505, kk_box_t _b_32506, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32289_main_fun32804(kk_function_t _b_32510_32504, kk_context_t* _ctx) {
  struct kk_day2__mlift32289_main_fun32804__t* _self = kk_function_alloc_as(struct kk_day2__mlift32289_main_fun32804__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day2__mlift32289_main_fun32804, kk_context());
  _self->_b_32510_32504 = _b_32510_32504;
  return &_self->_base;
}

static kk_box_t kk_day2__mlift32289_main_fun32804(kk_function_t _fself, kk_box_t _b_32505, kk_box_t _b_32506, kk_context_t* _ctx) {
  struct kk_day2__mlift32289_main_fun32804__t* _self = kk_function_as(struct kk_day2__mlift32289_main_fun32804__t*, _fself);
  kk_function_t _b_32510_32504 = _self->_b_32510_32504; /* (x : int, y : int) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_32510_32504);}, {}, _ctx)
  kk_integer_t _x32805;
  kk_integer_t _x32806 = kk_integer_unbox(_b_32505); /*int*/
  kk_integer_t _x32807 = kk_integer_unbox(_b_32506); /*int*/
  _x32805 = kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _b_32510_32504, (_b_32510_32504, _x32806, _x32807, _ctx)); /*int*/
  return kk_integer_box(_x32805);
}

kk_unit_t kk_day2__mlift32289_main(kk_std_core__list _y_32273, kk_context_t* _ctx) { /* (list<(rps, res)>) -> <exn,console,fsys> () */ 
  kk_std_core__list x_32300 = kk_std_core_map_5(_y_32273, kk_day2__new_mlift32289_main_fun32783(_ctx), _ctx); /*list<(int, int)>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_32300, _ctx);
    kk_box_t _x32792 = kk_std_core_hnd_yield_extend(kk_day2__new_mlift32289_main_fun32793(_ctx), _ctx); /*1001*/
    kk_unit_unbox(_x32792); return kk_Unit;
  }
  {
    kk_std_core_types__tuple2_ _this_32295 = kk_std_core_unzip(x_32300, _ctx); /*(list<int>, list<int>)*/;
    kk_std_core__list _b_32508_32502;
    {
      kk_box_t _box_x32500 = _this_32295.fst;
      kk_box_t _box_x32501 = _this_32295.snd;
      kk_std_core__list _x1 = kk_std_core__list_unbox(_box_x32500, NULL);
      kk_std_core__list_dup(_x1);
      kk_std_core_types__tuple2__drop(_this_32295, _ctx);
      _b_32508_32502 = _x1; /*list<int>*/
    }
    kk_integer_t _b_32509_32503 = kk_integer_from_small(0); /*int*/;
    kk_function_t _b_32510_32504 = kk_day2__new_mlift32289_main_fun32800(_ctx); /*(x : int, y : int) -> int*/;
    kk_string_t _x32801;
    kk_integer_t _x32802;
    kk_box_t _x32803 = kk_std_core_foldl(_b_32508_32502, kk_integer_box(_b_32509_32503), kk_day2__new_mlift32289_main_fun32804(_b_32510_32504, _ctx), _ctx); /*1002*/
    _x32802 = kk_integer_unbox(_x32803); /*int*/
    _x32801 = kk_std_core_show(_x32802, _ctx); /*string*/
    kk_std_core_printsln(_x32801, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day2__mlift32290_main_fun32808__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2__mlift32290_main_fun32808(kk_function_t _fself, kk_box_t _b_32523, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32290_main_fun32808(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32290_main_fun32808, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day2__mlift32290_main_fun32818__t {
  struct kk_function_s _base;
  kk_box_t _b_32523;
};
static kk_std_core_types__tuple2_ kk_day2__mlift32290_main_fun32818(kk_function_t _fself, kk_day2__rps _c_32270, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32290_main_fun32818(kk_box_t _b_32523, kk_context_t* _ctx) {
  struct kk_day2__mlift32290_main_fun32818__t* _self = kk_function_alloc_as(struct kk_day2__mlift32290_main_fun32818__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day2__mlift32290_main_fun32818, kk_context());
  _self->_b_32523 = _b_32523;
  return &_self->_base;
}

static kk_std_core_types__tuple2_ kk_day2__mlift32290_main_fun32818(kk_function_t _fself, kk_day2__rps _c_32270, kk_context_t* _ctx) {
  struct kk_day2__mlift32290_main_fun32818__t* _self = kk_function_as(struct kk_day2__mlift32290_main_fun32818__t*, _fself);
  kk_box_t _b_32523 = _self->_b_32523; /* 1001 */
  kk_drop_match(_self, {kk_box_dup(_b_32523);}, {}, _ctx)
  kk_string_t _x32819;
  kk_std_core_types__tuple2_ _match_32692 = kk_std_core_types__tuple2__unbox(_b_32523, _ctx); /*(string, string)*/;
  {
    kk_box_t _box_x32517 = _match_32692.fst;
    kk_box_t _box_x32518 = _match_32692.snd;
    kk_string_t _x0 = kk_string_unbox(_box_x32518);
    kk_string_dup(_x0);
    kk_std_core_types__tuple2__drop(_match_32692, _ctx);
    _x32819 = _x0; /*string*/
  }
  return kk_day2__mlift32288_main(_x32819, _c_32270, _ctx);
}


// lift anonymous function
struct kk_day2__mlift32290_main_fun32824__t {
  struct kk_function_s _base;
  kk_function_t next0;
};
static kk_box_t kk_day2__mlift32290_main_fun32824(kk_function_t _fself, kk_box_t _b_32520, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32290_main_fun32824(kk_function_t next0, kk_context_t* _ctx) {
  struct kk_day2__mlift32290_main_fun32824__t* _self = kk_function_alloc_as(struct kk_day2__mlift32290_main_fun32824__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day2__mlift32290_main_fun32824, kk_context());
  _self->next0 = next0;
  return &_self->_base;
}

static kk_box_t kk_day2__mlift32290_main_fun32824(kk_function_t _fself, kk_box_t _b_32520, kk_context_t* _ctx) {
  struct kk_day2__mlift32290_main_fun32824__t* _self = kk_function_as(struct kk_day2__mlift32290_main_fun32824__t*, _fself);
  kk_function_t next0 = _self->next0; /* (day2/rps) -> (day2/rps, day2/res) */
  kk_drop_match(_self, {kk_function_dup(next0);}, {}, _ctx)
  kk_std_core_types__tuple2_ _x32825;
  kk_day2__rps _x32826 = kk_day2__rps_unbox(_b_32520, _ctx); /*day2/rps*/
  _x32825 = kk_function_call(kk_std_core_types__tuple2_, (kk_function_t, kk_day2__rps, kk_context_t*), next0, (next0, _x32826, _ctx)); /*(day2/rps, day2/res)*/
  return kk_std_core_types__tuple2__box(_x32825, _ctx);
}
static kk_box_t kk_day2__mlift32290_main_fun32808(kk_function_t _fself, kk_box_t _b_32523, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_day2__rps x1;
  kk_std_core_types__tuple2_ _match_32693;
  kk_box_t _x32809 = kk_box_dup(_b_32523); /*1001*/
  _match_32693 = kk_std_core_types__tuple2__unbox(_x32809, _ctx); /*(string, string)*/
  {
    kk_box_t _box_x32511 = _match_32693.fst;
    kk_box_t _box_x32512 = _match_32693.snd;
    kk_string_t _x = kk_string_unbox(_box_x32511);
    kk_string_dup(_x);
    kk_std_core_types__tuple2__drop(_match_32693, _ctx);
    if (kk_string_cmp_cstr_borrow(_x, "A") == 0) {
      kk_string_drop(_x, _ctx);
      x1 = kk_day2__new_Rock(_ctx); /*day2/rps*/
      goto _match32812;
    }
    if (kk_string_cmp_cstr_borrow(_x, "B") == 0) {
      kk_string_drop(_x, _ctx);
      x1 = kk_day2__new_Paper(_ctx); /*day2/rps*/
      goto _match32812;
    }
    if (kk_string_cmp_cstr_borrow(_x, "C") == 0) {
      kk_string_drop(_x, _ctx);
      x1 = kk_day2__new_Scissors(_ctx); /*day2/rps*/
      goto _match32812;
    }
    {
      kk_string_drop(_x, _ctx);
      kk_box_t _x32813;
      kk_string_t _x32814;
      kk_define_string_literal(, _s32815, 14, "day2.kk(39, 5)")
      _x32814 = kk_string_dup(_s32815); /*string*/
      kk_string_t _x32816;
      kk_define_string_literal(, _s32817, 3, "rps")
      _x32816 = kk_string_dup(_s32817); /*string*/
      _x32813 = kk_std_core_error_pattern(_x32814, _x32816, _ctx); /*0*/
      x1 = kk_day2__rps_unbox(_x32813, _ctx); /*day2/rps*/
    }
    _match32812: ;
  }
  kk_function_t next0 = kk_day2__new_mlift32290_main_fun32818(_b_32523, _ctx); /*(day2/rps) -> (day2/rps, day2/res)*/;
  kk_std_core_types__tuple2_ _x32822;
  if (kk_yielding(kk_context())) {
    kk_box_t _x32823 = kk_std_core_hnd_yield_extend(kk_day2__new_mlift32290_main_fun32824(next0, _ctx), _ctx); /*1001*/
    _x32822 = kk_std_core_types__tuple2__unbox(_x32823, _ctx); /*(day2/rps, day2/res)*/
  }
  else {
    _x32822 = kk_function_call(kk_std_core_types__tuple2_, (kk_function_t, kk_day2__rps, kk_context_t*), next0, (next0, x1, _ctx)); /*(day2/rps, day2/res)*/
  }
  return kk_std_core_types__tuple2__box(_x32822, _ctx);
}


// lift anonymous function
struct kk_day2__mlift32290_main_fun32828__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2__mlift32290_main_fun32828(kk_function_t _fself, kk_box_t _b_32529, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32290_main_fun32828(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32290_main_fun32828, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2__mlift32290_main_fun32828(kk_function_t _fself, kk_box_t _b_32529, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x32829 = kk_Unit;
  kk_std_core__list _x32830 = kk_std_core__list_unbox(_b_32529, _ctx); /*list<(day2/rps, day2/res)>*/
  kk_day2__mlift32289_main(_x32830, _ctx);
  return kk_unit_box(_x32829);
}

kk_unit_t kk_day2__mlift32290_main(kk_std_core__list _y_32268, kk_context_t* _ctx) { /* (list<(string, string)>) -> <exn,console,fsys> () */ 
  kk_std_core__list x_32304 = kk_std_core_map_5(_y_32268, kk_day2__new_mlift32290_main_fun32808(_ctx), _ctx); /*list<(day2/rps, day2/res)>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_32304, _ctx);
    kk_box_t _x32827 = kk_std_core_hnd_yield_extend(kk_day2__new_mlift32290_main_fun32828(_ctx), _ctx); /*1001*/
    kk_unit_unbox(_x32827); return kk_Unit;
  }
  {
    kk_day2__mlift32289_main(x_32304, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day2__mlift32291_main_fun32831__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2__mlift32291_main_fun32831(kk_function_t _fself, kk_box_t _b_32534, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32291_main_fun32831(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32291_main_fun32831, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2__mlift32291_main_fun32831(kk_function_t _fself, kk_box_t _b_32534, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x32832 = kk_std_core_types__maybe_unbox(_b_32534, _ctx); /*maybe<(string, string)>*/
  return kk_std_core_unjust(_x32832, _ctx);
}


// lift anonymous function
struct kk_day2__mlift32291_main_fun32834__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2__mlift32291_main_fun32834(kk_function_t _fself, kk_box_t _b_32539, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32291_main_fun32834(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32291_main_fun32834, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2__mlift32291_main_fun32834(kk_function_t _fself, kk_box_t _b_32539, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x32835 = kk_Unit;
  kk_std_core__list _x32836 = kk_std_core__list_unbox(_b_32539, _ctx); /*list<(string, string)>*/
  kk_day2__mlift32290_main(_x32836, _ctx);
  return kk_unit_box(_x32835);
}

kk_unit_t kk_day2__mlift32291_main(kk_std_core__list _y_32267, kk_context_t* _ctx) { /* (list<maybe<(string, string)>>) -> <exn,console,fsys> () */ 
  kk_std_core__list x_32308 = kk_std_core_map_5(_y_32267, kk_day2__new_mlift32291_main_fun32831(_ctx), _ctx); /*list<(string, string)>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_32308, _ctx);
    kk_box_t _x32833 = kk_std_core_hnd_yield_extend(kk_day2__new_mlift32291_main_fun32834(_ctx), _ctx); /*1001*/
    kk_unit_unbox(_x32833); return kk_Unit;
  }
  {
    kk_day2__mlift32290_main(x_32308, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day2__mlift32292_main_fun32837__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2__mlift32292_main_fun32837(kk_function_t _fself, kk_box_t _b_32546, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32292_main_fun32837(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32292_main_fun32837, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day2__mlift32292_main_fun32838__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2__mlift32292_main_fun32838(kk_function_t _fself, kk_box_t _b_32543, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32292_main_fun32838(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32292_main_fun32838, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2__mlift32292_main_fun32838(kk_function_t _fself, kk_box_t _b_32543, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x32839;
  kk_string_t _x32840 = kk_string_unbox(_b_32543); /*string*/
  _x32839 = kk_day2_split_tuple(_x32840, _ctx); /*maybe<(string, string)>*/
  return kk_std_core_types__maybe_box(_x32839, _ctx);
}
static kk_box_t kk_day2__mlift32292_main_fun32837(kk_function_t _fself, kk_box_t _b_32546, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_hnd__open_none1(kk_day2__new_mlift32292_main_fun32838(_ctx), _b_32546, _ctx);
}


// lift anonymous function
struct kk_day2__mlift32292_main_fun32842__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2__mlift32292_main_fun32842(kk_function_t _fself, kk_box_t _b_32553, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32292_main_fun32842(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32292_main_fun32842, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2__mlift32292_main_fun32842(kk_function_t _fself, kk_box_t _b_32553, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x32843 = kk_Unit;
  kk_std_core__list _x32844 = kk_std_core__list_unbox(_b_32553, _ctx); /*list<maybe<(string, string)>>*/
  kk_day2__mlift32291_main(_x32844, _ctx);
  return kk_unit_box(_x32843);
}

kk_unit_t kk_day2__mlift32292_main(kk_std_core__list _y_32266, kk_context_t* _ctx) { /* (list<string>) -> <exn,console,fsys> () */ 
  kk_std_core__list x_32310 = kk_std_core_map_5(_y_32266, kk_day2__new_mlift32292_main_fun32837(_ctx), _ctx); /*list<maybe<(string, string)>>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_32310, _ctx);
    kk_box_t _x32841 = kk_std_core_hnd_yield_extend(kk_day2__new_mlift32292_main_fun32842(_ctx), _ctx); /*1001*/
    kk_unit_unbox(_x32841); return kk_Unit;
  }
  {
    kk_day2__mlift32291_main(x_32310, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day2__mlift32293_main_fun32845__t {
  struct kk_function_s _base;
};
static bool kk_day2__mlift32293_main_fun32845(kk_function_t _fself, kk_box_t _b_32557, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32293_main_fun32845(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32293_main_fun32845, _ctx)
  return kk_function_dup(_fself);
}

static bool kk_day2__mlift32293_main_fun32845(kk_function_t _fself, kk_box_t _b_32557, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x32846 = kk_string_unbox(_b_32557); /*string*/
  return kk_std_core_is_notempty_1(_x32846, _ctx);
}


// lift anonymous function
struct kk_day2__mlift32293_main_fun32848__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2__mlift32293_main_fun32848(kk_function_t _fself, kk_box_t _b_32561, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32293_main_fun32848(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32293_main_fun32848, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2__mlift32293_main_fun32848(kk_function_t _fself, kk_box_t _b_32561, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x32849 = kk_Unit;
  kk_std_core__list _x32850 = kk_std_core__list_unbox(_b_32561, _ctx); /*list<string>*/
  kk_day2__mlift32292_main(_x32850, _ctx);
  return kk_unit_box(_x32849);
}

kk_unit_t kk_day2__mlift32293_main(kk_std_core__list _y_32265, kk_context_t* _ctx) { /* (list<string>) -> <exn,console,fsys> () */ 
  kk_std_core__list x_32312 = kk_std_core_filter(_y_32265, kk_day2__new_mlift32293_main_fun32845(_ctx), _ctx); /*list<string>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_32312, _ctx);
    kk_box_t _x32847 = kk_std_core_hnd_yield_extend(kk_day2__new_mlift32293_main_fun32848(_ctx), _ctx); /*1001*/
    kk_unit_unbox(_x32847); return kk_Unit;
  }
  {
    kk_day2__mlift32292_main(x_32312, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day2__mlift32294_main_fun32852__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2__mlift32294_main_fun32852(kk_function_t _fself, kk_box_t _b_32565, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32294_main_fun32852(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32294_main_fun32852, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2__mlift32294_main_fun32852(kk_function_t _fself, kk_box_t _b_32565, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_vector_t v_17126;
  kk_string_t _x32853 = kk_string_unbox(_b_32565); /*string*/
  kk_string_t _x32854;
  kk_define_string_literal(, _s32855, 1, "\n")
  _x32854 = kk_string_dup(_s32855); /*string*/
  v_17126 = kk_string_splitv(_x32853,_x32854,kk_context()); /*vector<string>*/
  kk_std_core__list _x32856 = kk_std_core_vlist(v_17126, kk_std_core_types__new_None(_ctx), _ctx); /*list<1001>*/
  return kk_std_core__list_box(_x32856, _ctx);
}


// lift anonymous function
struct kk_day2__mlift32294_main_fun32857__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2__mlift32294_main_fun32857(kk_function_t _fself, kk_box_t _b_32571, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32294_main_fun32857(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32294_main_fun32857, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2__mlift32294_main_fun32857(kk_function_t _fself, kk_box_t _b_32571, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x32858;
  kk_string_t _x32859 = kk_string_unbox(_b_32571); /*string*/
  _x32858 = kk_std_core_trim(_x32859, _ctx); /*string*/
  return kk_string_box(_x32858);
}


// lift anonymous function
struct kk_day2__mlift32294_main_fun32861__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2__mlift32294_main_fun32861(kk_function_t _fself, kk_box_t _b_32575, kk_context_t* _ctx);
static kk_function_t kk_day2__new_mlift32294_main_fun32861(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__mlift32294_main_fun32861, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2__mlift32294_main_fun32861(kk_function_t _fself, kk_box_t _b_32575, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x32862 = kk_Unit;
  kk_std_core__list _x32863 = kk_std_core__list_unbox(_b_32575, _ctx); /*list<string>*/
  kk_day2__mlift32293_main(_x32863, _ctx);
  return kk_unit_box(_x32862);
}

kk_unit_t kk_day2__mlift32294_main(kk_string_t _y_32264, kk_context_t* _ctx) { /* (string) -> <exn,fsys> () */ 
  kk_std_core__list conts;
  kk_box_t _x32851 = kk_std_core_hnd__open_none1(kk_day2__new_mlift32294_main_fun32852(_ctx), kk_string_box(_y_32264), _ctx); /*1001*/
  conts = kk_std_core__list_unbox(_x32851, _ctx); /*list<string>*/
  kk_std_core__list x_32314 = kk_std_core_map_5(conts, kk_day2__new_mlift32294_main_fun32857(_ctx), _ctx); /*list<string>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_32314, _ctx);
    kk_box_t _x32860 = kk_std_core_hnd_yield_extend(kk_day2__new_mlift32294_main_fun32861(_ctx), _ctx); /*1001*/
    kk_unit_unbox(_x32860); return kk_Unit;
  }
  {
    kk_day2__mlift32293_main(x_32314, _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_day2_main_fun32866__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_main_fun32866(kk_function_t _fself, kk_box_t _b_32579, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32866(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32866, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2_main_fun32866(kk_function_t _fself, kk_box_t _b_32579, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x32867;
  kk_string_t _x32868 = kk_string_unbox(_b_32579); /*string*/
  _x32867 = kk_std_os_path_path(_x32868, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x32867, _ctx);
}


// lift anonymous function
struct kk_day2_main_fun32873__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_main_fun32873(kk_function_t _fself, kk_box_t _b_32583, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32873(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32873, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2_main_fun32873(kk_function_t _fself, kk_box_t _b_32583, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x32874 = kk_Unit;
  kk_string_t _x32875 = kk_string_unbox(_b_32583); /*string*/
  kk_day2__mlift32294_main(_x32875, _ctx);
  return kk_unit_box(_x32874);
}


// lift anonymous function
struct kk_day2_main_fun32877__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_main_fun32877(kk_function_t _fself, kk_box_t _b_32586, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32877(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32877, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2_main_fun32877(kk_function_t _fself, kk_box_t _b_32586, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_vector_t v_17126;
  kk_string_t _x32878 = kk_string_unbox(_b_32586); /*string*/
  kk_string_t _x32879;
  kk_define_string_literal(, _s32880, 1, "\n")
  _x32879 = kk_string_dup(_s32880); /*string*/
  v_17126 = kk_string_splitv(_x32878,_x32879,kk_context()); /*vector<string>*/
  kk_std_core__list _x32881 = kk_std_core_vlist(v_17126, kk_std_core_types__new_None(_ctx), _ctx); /*list<1001>*/
  return kk_std_core__list_box(_x32881, _ctx);
}


// lift anonymous function
struct kk_day2_main_fun32882__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_main_fun32882(kk_function_t _fself, kk_box_t _b_32592, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32882(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32882, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2_main_fun32882(kk_function_t _fself, kk_box_t _b_32592, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x32883;
  kk_string_t _x32884 = kk_string_unbox(_b_32592); /*string*/
  _x32883 = kk_std_core_trim(_x32884, _ctx); /*string*/
  return kk_string_box(_x32883);
}


// lift anonymous function
struct kk_day2_main_fun32886__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_main_fun32886(kk_function_t _fself, kk_box_t _b_32596, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32886(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32886, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2_main_fun32886(kk_function_t _fself, kk_box_t _b_32596, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x32887 = kk_Unit;
  kk_std_core__list _x32888 = kk_std_core__list_unbox(_b_32596, _ctx); /*list<string>*/
  kk_day2__mlift32293_main(_x32888, _ctx);
  return kk_unit_box(_x32887);
}


// lift anonymous function
struct kk_day2_main_fun32889__t {
  struct kk_function_s _base;
};
static bool kk_day2_main_fun32889(kk_function_t _fself, kk_box_t _b_32599, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32889(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32889, _ctx)
  return kk_function_dup(_fself);
}

static bool kk_day2_main_fun32889(kk_function_t _fself, kk_box_t _b_32599, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x32890 = kk_string_unbox(_b_32599); /*string*/
  return kk_std_core_is_notempty_1(_x32890, _ctx);
}


// lift anonymous function
struct kk_day2_main_fun32892__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_main_fun32892(kk_function_t _fself, kk_box_t _b_32603, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32892(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32892, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2_main_fun32892(kk_function_t _fself, kk_box_t _b_32603, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x32893 = kk_Unit;
  kk_std_core__list _x32894 = kk_std_core__list_unbox(_b_32603, _ctx); /*list<string>*/
  kk_day2__mlift32292_main(_x32894, _ctx);
  return kk_unit_box(_x32893);
}


// lift anonymous function
struct kk_day2_main_fun32895__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_main_fun32895(kk_function_t _fself, kk_box_t _b_32609, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32895(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32895, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day2_main_fun32896__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_main_fun32896(kk_function_t _fself, kk_box_t _b_32606, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32896(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32896, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2_main_fun32896(kk_function_t _fself, kk_box_t _b_32606, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x32897;
  kk_string_t _x32898 = kk_string_unbox(_b_32606); /*string*/
  _x32897 = kk_day2_split_tuple(_x32898, _ctx); /*maybe<(string, string)>*/
  return kk_std_core_types__maybe_box(_x32897, _ctx);
}
static kk_box_t kk_day2_main_fun32895(kk_function_t _fself, kk_box_t _b_32609, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_hnd__open_none1(kk_day2_new_main_fun32896(_ctx), _b_32609, _ctx);
}


// lift anonymous function
struct kk_day2_main_fun32900__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_main_fun32900(kk_function_t _fself, kk_box_t _b_32616, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32900(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32900, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2_main_fun32900(kk_function_t _fself, kk_box_t _b_32616, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x32901 = kk_Unit;
  kk_std_core__list _x32902 = kk_std_core__list_unbox(_b_32616, _ctx); /*list<maybe<(string, string)>>*/
  kk_day2__mlift32291_main(_x32902, _ctx);
  return kk_unit_box(_x32901);
}


// lift anonymous function
struct kk_day2_main_fun32903__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_main_fun32903(kk_function_t _fself, kk_box_t _b_32620, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32903(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32903, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2_main_fun32903(kk_function_t _fself, kk_box_t _b_32620, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x32904 = kk_std_core_types__maybe_unbox(_b_32620, _ctx); /*maybe<(string, string)>*/
  return kk_std_core_unjust(_x32904, _ctx);
}


// lift anonymous function
struct kk_day2_main_fun32906__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_main_fun32906(kk_function_t _fself, kk_box_t _b_32625, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32906(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32906, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2_main_fun32906(kk_function_t _fself, kk_box_t _b_32625, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x32907 = kk_Unit;
  kk_std_core__list _x32908 = kk_std_core__list_unbox(_b_32625, _ctx); /*list<(string, string)>*/
  kk_day2__mlift32290_main(_x32908, _ctx);
  return kk_unit_box(_x32907);
}


// lift anonymous function
struct kk_day2_main_fun32909__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_main_fun32909(kk_function_t _fself, kk_box_t _b_32638, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32909(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32909, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day2_main_fun32919__t {
  struct kk_function_s _base;
  kk_box_t _b_32638;
};
static kk_std_core_types__tuple2_ kk_day2_main_fun32919(kk_function_t _fself, kk_day2__rps _c_32270, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32919(kk_box_t _b_32638, kk_context_t* _ctx) {
  struct kk_day2_main_fun32919__t* _self = kk_function_alloc_as(struct kk_day2_main_fun32919__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day2_main_fun32919, kk_context());
  _self->_b_32638 = _b_32638;
  return &_self->_base;
}

static kk_std_core_types__tuple2_ kk_day2_main_fun32919(kk_function_t _fself, kk_day2__rps _c_32270, kk_context_t* _ctx) {
  struct kk_day2_main_fun32919__t* _self = kk_function_as(struct kk_day2_main_fun32919__t*, _fself);
  kk_box_t _b_32638 = _self->_b_32638; /* 1001 */
  kk_drop_match(_self, {kk_box_dup(_b_32638);}, {}, _ctx)
  kk_string_t _x32920;
  kk_std_core_types__tuple2_ _match_32684 = kk_std_core_types__tuple2__unbox(_b_32638, _ctx); /*(string, string)*/;
  {
    kk_box_t _box_x32632 = _match_32684.fst;
    kk_box_t _box_x32633 = _match_32684.snd;
    kk_string_t _x0 = kk_string_unbox(_box_x32633);
    kk_string_dup(_x0);
    kk_std_core_types__tuple2__drop(_match_32684, _ctx);
    _x32920 = _x0; /*string*/
  }
  return kk_day2__mlift32288_main(_x32920, _c_32270, _ctx);
}


// lift anonymous function
struct kk_day2_main_fun32925__t {
  struct kk_function_s _base;
  kk_function_t next5;
};
static kk_box_t kk_day2_main_fun32925(kk_function_t _fself, kk_box_t _b_32635, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32925(kk_function_t next5, kk_context_t* _ctx) {
  struct kk_day2_main_fun32925__t* _self = kk_function_alloc_as(struct kk_day2_main_fun32925__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day2_main_fun32925, kk_context());
  _self->next5 = next5;
  return &_self->_base;
}

static kk_box_t kk_day2_main_fun32925(kk_function_t _fself, kk_box_t _b_32635, kk_context_t* _ctx) {
  struct kk_day2_main_fun32925__t* _self = kk_function_as(struct kk_day2_main_fun32925__t*, _fself);
  kk_function_t next5 = _self->next5; /* (day2/rps) -> (day2/rps, day2/res) */
  kk_drop_match(_self, {kk_function_dup(next5);}, {}, _ctx)
  kk_std_core_types__tuple2_ _x32926;
  kk_day2__rps _x32927 = kk_day2__rps_unbox(_b_32635, _ctx); /*day2/rps*/
  _x32926 = kk_function_call(kk_std_core_types__tuple2_, (kk_function_t, kk_day2__rps, kk_context_t*), next5, (next5, _x32927, _ctx)); /*(day2/rps, day2/res)*/
  return kk_std_core_types__tuple2__box(_x32926, _ctx);
}
static kk_box_t kk_day2_main_fun32909(kk_function_t _fself, kk_box_t _b_32638, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_day2__rps x6;
  kk_std_core_types__tuple2_ _match_32685;
  kk_box_t _x32910 = kk_box_dup(_b_32638); /*1001*/
  _match_32685 = kk_std_core_types__tuple2__unbox(_x32910, _ctx); /*(string, string)*/
  {
    kk_box_t _box_x32626 = _match_32685.fst;
    kk_box_t _box_x32627 = _match_32685.snd;
    kk_string_t _x = kk_string_unbox(_box_x32626);
    kk_string_dup(_x);
    kk_std_core_types__tuple2__drop(_match_32685, _ctx);
    if (kk_string_cmp_cstr_borrow(_x, "A") == 0) {
      kk_string_drop(_x, _ctx);
      x6 = kk_day2__new_Rock(_ctx); /*day2/rps*/
      goto _match32913;
    }
    if (kk_string_cmp_cstr_borrow(_x, "B") == 0) {
      kk_string_drop(_x, _ctx);
      x6 = kk_day2__new_Paper(_ctx); /*day2/rps*/
      goto _match32913;
    }
    if (kk_string_cmp_cstr_borrow(_x, "C") == 0) {
      kk_string_drop(_x, _ctx);
      x6 = kk_day2__new_Scissors(_ctx); /*day2/rps*/
      goto _match32913;
    }
    {
      kk_string_drop(_x, _ctx);
      kk_box_t _x32914;
      kk_string_t _x32915;
      kk_define_string_literal(, _s32916, 14, "day2.kk(39, 5)")
      _x32915 = kk_string_dup(_s32916); /*string*/
      kk_string_t _x32917;
      kk_define_string_literal(, _s32918, 3, "rps")
      _x32917 = kk_string_dup(_s32918); /*string*/
      _x32914 = kk_std_core_error_pattern(_x32915, _x32917, _ctx); /*0*/
      x6 = kk_day2__rps_unbox(_x32914, _ctx); /*day2/rps*/
    }
    _match32913: ;
  }
  kk_function_t next5 = kk_day2_new_main_fun32919(_b_32638, _ctx); /*(day2/rps) -> (day2/rps, day2/res)*/;
  kk_std_core_types__tuple2_ _x32923;
  if (kk_yielding(kk_context())) {
    kk_box_t _x32924 = kk_std_core_hnd_yield_extend(kk_day2_new_main_fun32925(next5, _ctx), _ctx); /*1001*/
    _x32923 = kk_std_core_types__tuple2__unbox(_x32924, _ctx); /*(day2/rps, day2/res)*/
  }
  else {
    _x32923 = kk_function_call(kk_std_core_types__tuple2_, (kk_function_t, kk_day2__rps, kk_context_t*), next5, (next5, x6, _ctx)); /*(day2/rps, day2/res)*/
  }
  return kk_std_core_types__tuple2__box(_x32923, _ctx);
}


// lift anonymous function
struct kk_day2_main_fun32929__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_main_fun32929(kk_function_t _fself, kk_box_t _b_32644, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32929(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32929, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2_main_fun32929(kk_function_t _fself, kk_box_t _b_32644, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x32930 = kk_Unit;
  kk_std_core__list _x32931 = kk_std_core__list_unbox(_b_32644, _ctx); /*list<(day2/rps, day2/res)>*/
  kk_day2__mlift32289_main(_x32931, _ctx);
  return kk_unit_box(_x32930);
}


// lift anonymous function
struct kk_day2_main_fun32932__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_main_fun32932(kk_function_t _fself, kk_box_t _b_32651, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32932(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32932, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2_main_fun32932(kk_function_t _fself, kk_box_t _b_32651, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2_ _x32933;
  kk_day2__rps _x32934;
  kk_std_core_types__tuple2_ _match_32682;
  kk_box_t _x32935 = kk_box_dup(_b_32651); /*1001*/
  _match_32682 = kk_std_core_types__tuple2__unbox(_x32935, _ctx); /*(day2/rps, day2/res)*/
  {
    kk_box_t _box_x32645 = _match_32682.fst;
    kk_box_t _box_x32646 = _match_32682.snd;
    kk_day2__rps _x1 = kk_day2__rps_unbox(_box_x32645, NULL);
    kk_std_core_types__tuple2__drop(_match_32682, _ctx);
    _x32934 = _x1; /*day2/rps*/
  }
  kk_day2__res _x32938;
  kk_std_core_types__tuple2_ _match_32681 = kk_std_core_types__tuple2__unbox(_b_32651, _ctx); /*(day2/rps, day2/res)*/;
  {
    kk_box_t _box_x32647 = _match_32681.fst;
    kk_box_t _box_x32648 = _match_32681.snd;
    kk_day2__res _x2 = kk_day2__res_unbox(_box_x32648, NULL);
    kk_std_core_types__tuple2__drop(_match_32681, _ctx);
    _x32938 = _x2; /*day2/res*/
  }
  _x32933 = kk_day2_play2(_x32934, _x32938, _ctx); /*(int, int)*/
  return kk_std_core_types__tuple2__box(_x32933, _ctx);
}


// lift anonymous function
struct kk_day2_main_fun32942__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day2_main_fun32942(kk_function_t _fself, kk_box_t _b_32656, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32942(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32942, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day2_main_fun32942(kk_function_t _fself, kk_box_t _b_32656, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x32943 = kk_Unit;
  kk_std_core__list _x32944 = kk_std_core__list_unbox(_b_32656, _ctx); /*list<(int, int)>*/
  kk_day2__mlift32286_main(_x32944, _ctx);
  return kk_unit_box(_x32943);
}


// lift anonymous function
struct kk_day2_main_fun32949__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_day2_main_fun32949(kk_function_t _fself, kk_integer_t _x132947, kk_integer_t _x232948, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32949(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2_main_fun32949, _ctx)
  return kk_function_dup(_fself);
}

static kk_integer_t kk_day2_main_fun32949(kk_function_t _fself, kk_integer_t _x132947, kk_integer_t _x232948, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core__lp__plus__4_rp_(_x132947, _x232948, _ctx);
}


// lift anonymous function
struct kk_day2_main_fun32953__t {
  struct kk_function_s _base;
  kk_function_t _b_32673_32661;
};
static kk_box_t kk_day2_main_fun32953(kk_function_t _fself, kk_box_t _b_32662, kk_box_t _b_32663, kk_context_t* _ctx);
static kk_function_t kk_day2_new_main_fun32953(kk_function_t _b_32673_32661, kk_context_t* _ctx) {
  struct kk_day2_main_fun32953__t* _self = kk_function_alloc_as(struct kk_day2_main_fun32953__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day2_main_fun32953, kk_context());
  _self->_b_32673_32661 = _b_32673_32661;
  return &_self->_base;
}

static kk_box_t kk_day2_main_fun32953(kk_function_t _fself, kk_box_t _b_32662, kk_box_t _b_32663, kk_context_t* _ctx) {
  struct kk_day2_main_fun32953__t* _self = kk_function_as(struct kk_day2_main_fun32953__t*, _fself);
  kk_function_t _b_32673_32661 = _self->_b_32673_32661; /* (x : int, y : int) -> int */
  kk_drop_match(_self, {kk_function_dup(_b_32673_32661);}, {}, _ctx)
  kk_integer_t _x32954;
  kk_integer_t _x32955 = kk_integer_unbox(_b_32662); /*int*/
  kk_integer_t _x32956 = kk_integer_unbox(_b_32663); /*int*/
  _x32954 = kk_function_call(kk_integer_t, (kk_function_t, kk_integer_t, kk_integer_t, kk_context_t*), _b_32673_32661, (_b_32673_32661, _x32955, _x32956, _ctx)); /*int*/
  return kk_integer_box(_x32954);
}

kk_unit_t kk_day2_main(kk_context_t* _ctx) { /* () -> <console,exn,fsys> () */ 
  kk_string_t x_32316;
  kk_std_os_path__path _x32864;
  kk_box_t _x32865;
  kk_box_t _x32869;
  kk_string_t _x32870;
  kk_define_string_literal(, _s32871, 8, "data.txt")
  _x32870 = kk_string_dup(_s32871); /*string*/
  _x32869 = kk_string_box(_x32870); /*1000*/
  _x32865 = kk_std_core_hnd__open_none1(kk_day2_new_main_fun32866(_ctx), _x32869, _ctx); /*1001*/
  _x32864 = kk_std_os_path__path_unbox(_x32865, _ctx); /*std/os/path/path*/
  x_32316 = kk_std_os_file_read_text_file(_x32864, _ctx); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_32316, _ctx);
    kk_box_t _x32872 = kk_std_core_hnd_yield_extend(kk_day2_new_main_fun32873(_ctx), _ctx); /*1001*/
    kk_unit_unbox(_x32872); return kk_Unit;
  }
  {
    kk_std_core__list conts;
    kk_box_t _x32876 = kk_std_core_hnd__open_none1(kk_day2_new_main_fun32877(_ctx), kk_string_box(x_32316), _ctx); /*1001*/
    conts = kk_std_core__list_unbox(_x32876, _ctx); /*list<string>*/
    kk_std_core__list x0_32319 = kk_std_core_map_5(conts, kk_day2_new_main_fun32882(_ctx), _ctx); /*list<string>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x0_32319, _ctx);
      kk_box_t _x32885 = kk_std_core_hnd_yield_extend(kk_day2_new_main_fun32886(_ctx), _ctx); /*1001*/
      kk_unit_unbox(_x32885); return kk_Unit;
    }
    {
      kk_std_core__list x1_32322 = kk_std_core_filter(x0_32319, kk_day2_new_main_fun32889(_ctx), _ctx); /*list<string>*/;
      if (kk_yielding(kk_context())) {
        kk_std_core__list_drop(x1_32322, _ctx);
        kk_box_t _x32891 = kk_std_core_hnd_yield_extend(kk_day2_new_main_fun32892(_ctx), _ctx); /*1001*/
        kk_unit_unbox(_x32891); return kk_Unit;
      }
      {
        kk_std_core__list x2_32325 = kk_std_core_map_5(x1_32322, kk_day2_new_main_fun32895(_ctx), _ctx); /*list<maybe<(string, string)>>*/;
        if (kk_yielding(kk_context())) {
          kk_std_core__list_drop(x2_32325, _ctx);
          kk_box_t _x32899 = kk_std_core_hnd_yield_extend(kk_day2_new_main_fun32900(_ctx), _ctx); /*1001*/
          kk_unit_unbox(_x32899); return kk_Unit;
        }
        {
          kk_std_core__list x3_32328 = kk_std_core_map_5(x2_32325, kk_day2_new_main_fun32903(_ctx), _ctx); /*list<(string, string)>*/;
          if (kk_yielding(kk_context())) {
            kk_std_core__list_drop(x3_32328, _ctx);
            kk_box_t _x32905 = kk_std_core_hnd_yield_extend(kk_day2_new_main_fun32906(_ctx), _ctx); /*1001*/
            kk_unit_unbox(_x32905); return kk_Unit;
          }
          {
            kk_std_core__list x4_32331 = kk_std_core_map_5(x3_32328, kk_day2_new_main_fun32909(_ctx), _ctx); /*list<(day2/rps, day2/res)>*/;
            if (kk_yielding(kk_context())) {
              kk_std_core__list_drop(x4_32331, _ctx);
              kk_box_t _x32928 = kk_std_core_hnd_yield_extend(kk_day2_new_main_fun32929(_ctx), _ctx); /*1001*/
              kk_unit_unbox(_x32928); return kk_Unit;
            }
            {
              kk_std_core__list x7_32336 = kk_std_core_map_5(x4_32331, kk_day2_new_main_fun32932(_ctx), _ctx); /*list<(int, int)>*/;
              if (kk_yielding(kk_context())) {
                kk_std_core__list_drop(x7_32336, _ctx);
                kk_box_t _x32941 = kk_std_core_hnd_yield_extend(kk_day2_new_main_fun32942(_ctx), _ctx); /*1001*/
                kk_unit_unbox(_x32941); return kk_Unit;
              }
              {
                kk_std_core_types__tuple2_ _this3_32341 = kk_std_core_unzip(x7_32336, _ctx); /*(list<int>, list<int>)*/;
                kk_std_core__list _b_32671_32659;
                {
                  kk_box_t _box_x32657 = _this3_32341.fst;
                  kk_box_t _box_x32658 = _this3_32341.snd;
                  kk_std_core__list _x3 = kk_std_core__list_unbox(_box_x32657, NULL);
                  kk_std_core__list_dup(_x3);
                  kk_std_core_types__tuple2__drop(_this3_32341, _ctx);
                  _b_32671_32659 = _x3; /*list<int>*/
                }
                kk_integer_t _b_32672_32660 = kk_integer_from_small(0); /*int*/;
                kk_function_t _b_32673_32661 = kk_day2_new_main_fun32949(_ctx); /*(x : int, y : int) -> int*/;
                kk_string_t _x32950;
                kk_integer_t _x32951;
                kk_box_t _x32952 = kk_std_core_foldl(_b_32671_32659, kk_integer_box(_b_32672_32660), kk_day2_new_main_fun32953(_b_32673_32661, _ctx), _ctx); /*1002*/
                _x32951 = kk_integer_unbox(_x32952); /*int*/
                _x32950 = kk_std_core_show(_x32951, _ctx); /*string*/
                kk_std_core_printsln(_x32950, _ctx); return kk_Unit;
              }
            }
          }
        }
      }
    }
  }
}


// lift anonymous function
struct kk_day2__hmain_fun32957__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_day2__hmain_fun32957(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_day2__new_hmain_fun32957(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day2__hmain_fun32957, _ctx)
  return kk_function_dup(_fself);
}

static kk_unit_t kk_day2__hmain_fun32957(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_day2_main(_ctx);
}

kk_unit_t kk_day2__hmain(kk_context_t* _ctx) { /* () -> <console,fsys> () */ 
  kk_std_core__default_exn(kk_day2__new_hmain_fun32957(_ctx), _ctx); return kk_Unit;
}

// main exit
static void _kk_main_exit(void) {
  kk_context_t* _ctx = kk_get_context();
  kk_day2__done(_ctx);
}

// main entry
int main(int argc, char** argv) {
  kk_assert(sizeof(size_t)==8 && sizeof(void*)==8);
  kk_context_t* _ctx = kk_main_start(argc, argv);
  kk_day2__init(_ctx);
  atexit(&_kk_main_exit);
  kk_day2__hmain(_ctx);
  kk_day2__done(_ctx);
  kk_main_end(_ctx);
  return 0;
}

// initialization
void kk_day2__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core__init(_ctx);
  kk_std_text_parse__init(_ctx);
  kk_std_os_path__init(_ctx);
  kk_std_os_dir__init(_ctx);
  kk_std_os_file__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_day2__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_os_file__done(_ctx);
  kk_std_os_dir__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_text_parse__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
