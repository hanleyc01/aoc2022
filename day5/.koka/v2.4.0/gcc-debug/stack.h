#pragma once
#ifndef kk_stack_H
#define kk_stack_H
// Koka generated module: "stack", koka version: 2.4.0, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core.h"

// type declarations

// value type stack/stack
struct kk_stack_Stack {
  kk_std_core_types__maybe top;
  kk_std_core__list rest;
};
typedef struct kk_stack_Stack kk_stack__stack;
static inline kk_stack__stack kk_stack__new_Stack(kk_std_core_types__maybe top, kk_std_core__list rest, kk_context_t* _ctx) {
  kk_stack__stack _con;
  _con.top = top;
  _con.rest = rest;
  return _con;
}
static inline bool kk_stack__is_Stack(kk_stack__stack x) {
  return (true);
}
static inline kk_stack__stack kk_stack__stack_dup(kk_stack__stack _x) {
  kk_std_core_types__maybe_dup(_x.top);
  kk_std_core__list_dup(_x.rest);
  return _x;
}
static inline void kk_stack__stack_drop(kk_stack__stack _x, kk_context_t* _ctx) {
  kk_std_core_types__maybe_drop(_x.top, _ctx);
  kk_std_core__list_drop(_x.rest, _ctx);
}
static inline kk_box_t kk_stack__stack_box(kk_stack__stack _x, kk_context_t* _ctx) {
  kk_box_t _box;
  kk_valuetype_box(kk_stack__stack, _box, _x, 2 /* scan count */, _ctx);
  return _box;
}
static inline kk_stack__stack kk_stack__stack_unbox(kk_box_t _x, kk_context_t* _ctx) {
  kk_boxed_value_t _p;
  kk_stack__stack _unbox;
  kk_valuetype_unbox_(kk_stack__stack, _p, _unbox, _x, _ctx);
  if (_ctx!=NULL && _p!=NULL) {
    if (kk_basetype_is_unique(_p)) { kk_basetype_free(_p,_ctx); } else {
      kk_stack__stack_dup(_unbox);
      kk_basetype_decref(_p, _ctx);
    }
  }
  return _unbox;
}

// value declarations
 
// Automatically generated. Retrieves the `top` constructor field of the `:stack` type.

static inline kk_std_core_types__maybe kk_stack_top(kk_stack__stack stack0, kk_context_t* _ctx) { /* forall<a> (stack : stack<a>) -> maybe<a> */ 
  {
    kk_std_core_types__maybe _x = stack0.top;
    return kk_std_core_types__maybe_dup(_x);
  }
}
 
// Automatically generated. Retrieves the `rest` constructor field of the `:stack` type.

static inline kk_std_core__list kk_stack_rest(kk_stack__stack stack0, kk_context_t* _ctx) { /* forall<a> (stack : stack<a>) -> list<a> */ 
  {
    kk_std_core__list _x = stack0.rest;
    return kk_std_core__list_dup(_x);
  }
}

kk_stack__stack kk_stack__copy(kk_stack__stack _this, kk_std_core_types__optional top0, kk_std_core_types__optional rest0, kk_context_t* _ctx); /* forall<a> (stack<a>, top : optional<maybe<a>>, rest : optional<list<a>>) -> stack<a> */ 
 
// Declare a stack with just one element

static inline kk_stack__stack kk_stack_stack(kk_box_t top0, kk_context_t* _ctx) { /* forall<a> (top : a) -> stack<a> */ 
  kk_std_core_types__maybe _x901 = kk_std_core_types__new_Just(top0, _ctx); /*maybe<1034>*/
  return kk_stack__new_Stack(_x901, kk_std_core__new_Nil(_ctx), _ctx);
}
 
// Declare a stack with a top, and rest defined

static inline kk_stack__stack kk_stack_stack_1(kk_box_t top0, kk_std_core__list rest0, kk_context_t* _ctx) { /* forall<a> (top : a, rest : list<a>) -> stack<a> */ 
  kk_std_core_types__maybe _x902 = kk_std_core_types__new_Just(top0, _ctx); /*maybe<1034>*/
  return kk_stack__new_Stack(_x902, rest0, _ctx);
}

kk_stack__stack kk_stack_from_list(kk_std_core__list ls, kk_context_t* _ctx); /* forall<a> (ls : list<a>) -> exn stack<a> */ 

kk_std_core_types__tuple2_ kk_stack_pop(kk_stack__stack st, kk_context_t* _ctx); /* forall<a> (st : stack<a>) -> exn (a, stack<a>) */ 

kk_std_core_types__tuple2_ kk_stack__mlift819_op(kk_std_core__list accum, kk_integer_t n_sq_, kk_std_core_types__tuple2_ _y_808, kk_context_t* _ctx); /* forall<a> (accum : list<a>, n' : int, (a, stack<a>)) -> exn (list<a>, stack<a>) */ 

kk_std_core_types__tuple2_ kk_stack__lift803_pop_n(kk_stack__stack st_sq_, kk_integer_t n0_sq_, kk_std_core__list accum0, kk_context_t* _ctx); /* forall<a> (st' : stack<a>, n' : int, accum : list<a>) -> <div,exn> (list<a>, stack<a>) */ 
 
// Pop `n` elements off of the stack

static inline kk_std_core_types__tuple2_ kk_stack_pop_n(kk_stack__stack st, kk_integer_t n, kk_context_t* _ctx) { /* forall<a> (st : stack<a>, n : int) -> pure (list<a>, stack<a>) */ 
  return kk_stack__lift803_pop_n(st, n, kk_std_core__new_Nil(_ctx), _ctx);
}

kk_stack__stack kk_stack_push(kk_stack__stack st, kk_box_t to_push, kk_context_t* _ctx); /* forall<a> (st : stack<a>, to-push : a) -> stack<a> */ 

kk_stack__stack kk_stack_push_all(kk_stack__stack st, kk_std_core__list to_push, kk_context_t* _ctx); /* forall<a> (st : stack<a>, to-push : list<a>) -> stack<a> */ 

kk_string_t kk_stack_show(kk_stack__stack st, kk_context_t* _ctx); /* (st : stack<string>) -> string */ 

kk_string_t kk_stack_show_1(kk_stack__stack st, kk_context_t* _ctx); /* (st : stack<int>) -> string */ 

void kk_stack__init(kk_context_t* _ctx);


void kk_stack__done(kk_context_t* _ctx);

#endif // header
