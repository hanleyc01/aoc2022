// Koka generated module: "list-extra", koka version: 2.4.0, platform: 64-bit
#include "list_dash_extra.h"
 
// Get an item out of a list, but if the index is out of bounds of the list
// it returns `Nothing`

kk_std_core_types__maybe kk_list_dash_extra_get(kk_std_core__list ls, kk_integer_t index, kk_context_t* _ctx) { /* forall<a> (ls : list<a>, index : int) -> maybe<a> */ 
  kk__tailcall: ;
  bool _match_329 = kk_integer_eq_borrow(index,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_329) {
    kk_integer_drop(index, _ctx);
    if (kk_std_core__is_Cons(ls)) {
      struct kk_std_core_Cons* _con334 = kk_std_core__as_Cons(ls);
      kk_box_t x = _con334->head;
      kk_std_core__list _pat00 = _con334->tail;
      if (kk_likely(kk_std_core__list_is_unique(ls))) {
        kk_std_core__list_drop(_pat00, _ctx);
        kk_std_core__list_free(ls, _ctx);
      }
      else {
        kk_box_dup(x);
        kk_std_core__list_decref(ls, _ctx);
      }
      return kk_std_core_types__new_Just(x, _ctx);
    }
    {
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  if (kk_std_core__is_Nil(ls)) {
    kk_integer_drop(index, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
  {
    struct kk_std_core_Cons* _con335 = kk_std_core__as_Cons(ls);
    kk_box_t _pat3 = _con335->head;
    kk_std_core__list xx = _con335->tail;
    if (kk_likely(kk_std_core__list_is_unique(ls))) {
      kk_box_drop(_pat3, _ctx);
      kk_std_core__list_free(ls, _ctx);
    }
    else {
      kk_std_core__list_dup(xx);
      kk_std_core__list_decref(ls, _ctx);
    }
    { // tailcall
      kk_integer_t _x336 = kk_integer_add_small_const(index, -1, _ctx); /*int*/
      ls = xx;
      index = _x336;
      goto kk__tailcall;
    }
  }
}
 
// Inserts an element at an index

kk_std_core__list kk_list_dash_extra_insert(kk_std_core__list ls, kk_box_t to_insert, kk_integer_t index, kk_context_t* _ctx) { /* forall<a> (ls : list<a>, to-insert : a, index : int) -> list<a> */ 
  if (kk_std_core__is_Nil(ls)) {
    kk_integer_drop(index, _ctx);
    return kk_std_core__new_Cons(kk_reuse_null, to_insert, kk_std_core__new_Nil(_ctx), _ctx);
  }
  {
    struct kk_std_core_Cons* _con337 = kk_std_core__as_Cons(ls);
    kk_box_t x = _con337->head;
    kk_std_core__list xx = _con337->tail;
    kk_reuse_t _ru_332 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_std_core__list_is_unique(ls))) {
      _ru_332 = (kk_std_core__list_reuse(ls));
    }
    else {
      kk_box_dup(x);
      kk_std_core__list_dup(xx);
      kk_std_core__list_decref(ls, _ctx);
    }
    bool _match_328 = kk_integer_eq_borrow(index,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_328) {
      kk_integer_drop(index, _ctx);
      kk_std_core__list _x338 = kk_std_core__new_Cons(_ru_332, to_insert, kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
      kk_std_core__list _x339 = kk_std_core__new_Cons(kk_reuse_null, x, xx, _ctx); /*list<1009>*/
      return kk_std_core_append(_x338, _x339, _ctx);
    }
    {
      kk_std_core__list ys0_301;
      kk_integer_t _x340 = kk_integer_add_small_const(index, -1, _ctx); /*int*/
      ys0_301 = kk_list_dash_extra_insert(xx, to_insert, _x340, _ctx); /*list<195>*/
      kk_std_core__list _x341 = kk_std_core__new_Cons(_ru_332, x, kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
      return kk_std_core_append(_x341, ys0_301, _ctx);
    }
  }
}
 
// monadic lift

kk_std_core__list kk_list_dash_extra__mlift311_remove(kk_box_t x, kk_std_core__list _y_306, kk_context_t* _ctx) { /* forall<a> (x : a, list<a>) -> exn list<a> */ 
  kk_std_core__list _x342 = kk_std_core__new_Cons(kk_reuse_null, x, kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
  return kk_std_core__lp__plus__plus__rp_(_x342, _y_306, _ctx);
}
 
// Remove an item from a list given an index, return the list back with the element removed
// Will throw an exception in the case of an index out of bounds


// lift anonymous function
struct kk_list_dash_extra_remove_fun349__t {
  struct kk_function_s _base;
  kk_box_t x0;
};
static kk_box_t kk_list_dash_extra_remove_fun349(kk_function_t _fself, kk_box_t _b_319, kk_context_t* _ctx);
static kk_function_t kk_list_dash_extra_new_remove_fun349(kk_box_t x0, kk_context_t* _ctx) {
  struct kk_list_dash_extra_remove_fun349__t* _self = kk_function_alloc_as(struct kk_list_dash_extra_remove_fun349__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_list_dash_extra_remove_fun349, kk_context());
  _self->x0 = x0;
  return &_self->_base;
}

static kk_box_t kk_list_dash_extra_remove_fun349(kk_function_t _fself, kk_box_t _b_319, kk_context_t* _ctx) {
  struct kk_list_dash_extra_remove_fun349__t* _self = kk_function_as(struct kk_list_dash_extra_remove_fun349__t*, _fself);
  kk_box_t x0 = _self->x0; /* 294 */
  kk_drop_match(_self, {kk_box_dup(x0);}, {}, _ctx)
  kk_std_core__list _y_323_3060 = kk_std_core__list_unbox(_b_319, _ctx); /*list<294>*/;
  kk_std_core__list _x350 = kk_list_dash_extra__mlift311_remove(x0, _y_323_3060, _ctx); /*list<294>*/
  return kk_std_core__list_box(_x350, _ctx);
}

kk_std_core__list kk_list_dash_extra_remove(kk_std_core__list ls, kk_integer_t index, kk_context_t* _ctx) { /* forall<a> (ls : list<a>, index : int) -> exn list<a> */ 
  if (kk_std_core__is_Nil(ls)) {
    bool _match_326;
    bool _brw_327 = kk_integer_eq_borrow(index,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(index, _ctx);
    _match_326 = _brw_327; /*bool*/
    if (_match_326) {
      return kk_std_core__new_Nil(_ctx);
    }
    {
      kk_box_t _x343;
      kk_string_t _x344;
      kk_define_string_literal(, _s345, 26, "Remove index out of bounds")
      _x344 = kk_string_dup(_s345); /*string*/
      _x343 = kk_std_core_throw(_x344, kk_std_core_types__new_None(_ctx), _ctx); /*1001*/
      return kk_std_core__list_unbox(_x343, _ctx);
    }
  }
  {
    struct kk_std_core_Cons* _con346 = kk_std_core__as_Cons(ls);
    kk_box_t x0 = _con346->head;
    kk_std_core__list xx = _con346->tail;
    kk_reuse_t _ru_333 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_std_core__list_is_unique(ls))) {
      _ru_333 = (kk_std_core__list_reuse(ls));
    }
    else {
      kk_box_dup(x0);
      kk_std_core__list_dup(xx);
      kk_std_core__list_decref(ls, _ctx);
    }
    bool _match_324 = kk_integer_eq_borrow(index,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_324) {
      kk_reuse_drop(_ru_333,kk_context());
      kk_box_drop(x0, _ctx);
      kk_integer_drop(index, _ctx);
      return xx;
    }
    {
      kk_std_core__list x1_312;
      kk_integer_t _x347 = kk_integer_add_small_const(index, -1, _ctx); /*int*/
      x1_312 = kk_list_dash_extra_remove(xx, _x347, _ctx); /*list<294>*/
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_333,kk_context());
        kk_std_core__list_drop(x1_312, _ctx);
        kk_box_t _x348 = kk_std_core_hnd_yield_extend(kk_list_dash_extra_new_remove_fun349(x0, _ctx), _ctx); /*1001*/
        return kk_std_core__list_unbox(_x348, _ctx);
      }
      {
        kk_std_core__list _x351 = kk_std_core__new_Cons(_ru_333, x0, kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
        return kk_std_core__lp__plus__plus__rp_(_x351, x1_312, _ctx);
      }
    }
  }
}

// initialization
void kk_list_dash_extra__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_list_dash_extra__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
