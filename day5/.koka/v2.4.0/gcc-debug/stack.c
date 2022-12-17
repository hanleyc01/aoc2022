// Koka generated module: "stack", koka version: 2.4.0, platform: 64-bit
#include "stack.h"

kk_stack__stack kk_stack__copy(kk_stack__stack _this, kk_std_core_types__optional top0, kk_std_core_types__optional rest0, kk_context_t* _ctx) { /* forall<a> (stack<a>, top : optional<maybe<a>>, rest : optional<list<a>>) -> stack<a> */ 
  kk_std_core_types__maybe _x897;
  if (kk_std_core_types__is_Optional(top0)) {
    kk_box_t _box_x824 = top0._cons.Optional.value;
    kk_std_core_types__maybe _top_110 = kk_std_core_types__maybe_unbox(_box_x824, NULL);
    kk_std_core_types__maybe_dup(_top_110);
    kk_std_core_types__optional_drop(top0, _ctx);
    _x897 = _top_110; /*maybe<127>*/
  }
  else {
    kk_std_core_types__maybe _x = _this.top;
    kk_std_core_types__maybe_dup(_x);
    _x897 = _x; /*maybe<127>*/
  }
  kk_std_core__list _x899;
  if (kk_std_core_types__is_Optional(rest0)) {
    kk_box_t _box_x825 = rest0._cons.Optional.value;
    kk_std_core__list _rest_117 = kk_std_core__list_unbox(_box_x825, NULL);
    kk_stack__stack_drop(_this, _ctx);
    _x899 = _rest_117; /*list<127>*/
  }
  else {
    kk_std_core__list _x0 = _this.rest;
    kk_std_core__list_dup(_x0);
    kk_stack__stack_drop(_this, _ctx);
    _x899 = _x0; /*list<127>*/
  }
  return kk_stack__new_Stack(_x897, _x899, _ctx);
}
 
// Convert a list to a stack

kk_stack__stack kk_stack_from_list(kk_std_core__list ls, kk_context_t* _ctx) { /* forall<a> (ls : list<a>) -> exn stack<a> */ 
  kk_std_core_types__maybe _match_893;
  if (kk_std_core__is_Cons(ls)) {
    struct kk_std_core_Cons* _con903 = kk_std_core__as_Cons(ls);
    kk_box_t x = _con903->head;
    kk_box_dup(x);
    _match_893 = kk_std_core_types__new_Just(x, _ctx); /*maybe<1034>*/
  }
  else {
    _match_893 = kk_std_core_types__new_Nothing(_ctx); /*maybe<1034>*/
  }
  kk_std_core__list _match_892;
  if (kk_std_core__is_Cons(ls)) {
    struct kk_std_core_Cons* _con904 = kk_std_core__as_Cons(ls);
    kk_box_t _pat00 = _con904->head;
    kk_std_core__list xx = _con904->tail;
    if (kk_likely(kk_std_core__list_is_unique(ls))) {
      kk_box_drop(_pat00, _ctx);
      kk_std_core__list_free(ls, _ctx);
    }
    else {
      kk_std_core__list_dup(xx);
      kk_std_core__list_decref(ls, _ctx);
    }
    _match_892 = xx; /*list<286>*/
  }
  else {
    _match_892 = kk_std_core__new_Nil(_ctx); /*list<286>*/
  }
  if (kk_std_core_types__is_Nothing(_match_893) && kk_std_core__is_Nil(_match_892)) {
    return kk_stack__new_Stack(kk_std_core_types__new_Nothing(_ctx), kk_std_core__new_Nil(_ctx), _ctx);
  }
  if (kk_std_core_types__is_Just(_match_893)) {
    kk_box_t x0 = _match_893._cons.Just.value;
    kk_std_core_types__maybe _x905 = kk_std_core_types__new_Just(x0, _ctx); /*maybe<1034>*/
    return kk_stack__new_Stack(_x905, _match_892, _ctx);
  }
  {
    kk_std_core_types__maybe_drop(_match_893, _ctx);
    kk_std_core__list_drop(_match_892, _ctx);
    kk_box_t _x906;
    kk_string_t _x907;
    kk_define_string_literal(, _s908, 15, "stack.kk(19, 5)")
    _x907 = kk_string_dup(_s908); /*string*/
    kk_string_t _x909;
    kk_define_string_literal(, _s910, 9, "from-list")
    _x909 = kk_string_dup(_s910); /*string*/
    _x906 = kk_std_core_error_pattern(_x907, _x909, _ctx); /*0*/
    return kk_stack__stack_unbox(_x906, _ctx);
  }
}
 
// Pop off the first element from the list


// lift anonymous function
struct kk_stack_pop_fun912__t {
  struct kk_function_s _base;
};
static kk_box_t kk_stack_pop_fun912(kk_function_t _fself, kk_box_t _b_832, kk_context_t* _ctx);
static kk_function_t kk_stack_new_pop_fun912(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_stack_pop_fun912, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_stack_pop_fun912(kk_function_t _fself, kk_box_t _b_832, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x913;
  kk_stack__stack _brw_890 = kk_stack__stack_unbox(_b_832, _ctx); /*stack/stack<376>*/;
  kk_std_core_types__maybe _brw_891 = kk_stack_top(_brw_890, _ctx); /*maybe<90>*/;
  kk_stack__stack_drop(_brw_890, _ctx);
  _x913 = _brw_891; /*maybe<90>*/
  return kk_std_core_types__maybe_box(_x913, _ctx);
}


// lift anonymous function
struct kk_stack_pop_fun917__t {
  struct kk_function_s _base;
};
static kk_box_t kk_stack_pop_fun917(kk_function_t _fself, kk_box_t _b_835, kk_context_t* _ctx);
static kk_function_t kk_stack_new_pop_fun917(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_stack_pop_fun917, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_stack_pop_fun917(kk_function_t _fself, kk_box_t _b_835, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x918;
  kk_stack__stack _brw_888 = kk_stack__stack_unbox(_b_835, _ctx); /*stack/stack<376>*/;
  kk_std_core__list _brw_889 = kk_stack_rest(_brw_888, _ctx); /*list<102>*/;
  kk_stack__stack_drop(_brw_888, _ctx);
  _x918 = _brw_889; /*list<102>*/
  return kk_std_core__list_box(_x918, _ctx);
}

kk_std_core_types__tuple2_ kk_stack_pop(kk_stack__stack st, kk_context_t* _ctx) { /* forall<a> (st : stack<a>) -> exn (a, stack<a>) */ 
  kk_std_core_types__maybe _match_887;
  kk_box_t _x911;
  kk_box_t _x914;
  kk_stack__stack _x915 = kk_stack__stack_dup(st); /*stack/stack<376>*/
  _x914 = kk_stack__stack_box(_x915, _ctx); /*1000*/
  _x911 = kk_std_core_hnd__open_none1(kk_stack_new_pop_fun912(_ctx), _x914, _ctx); /*1001*/
  _match_887 = kk_std_core_types__maybe_unbox(_x911, _ctx); /*maybe<376>*/
  kk_std_core__list _match_886;
  kk_box_t _x916 = kk_std_core_hnd__open_none1(kk_stack_new_pop_fun917(_ctx), kk_stack__stack_box(st, _ctx), _ctx); /*1001*/
  _match_886 = kk_std_core__list_unbox(_x916, _ctx); /*list<376>*/
  if (kk_std_core_types__is_Nothing(_match_887)) {
    kk_std_core__list_drop(_match_886, _ctx);
    kk_box_t _x919;
    kk_string_t _x920;
    kk_define_string_literal(, _s921, 49, "STACK UNDERFLOW: cannot pop off of an empty stack")
    _x920 = kk_string_dup(_s921); /*string*/
    _x919 = kk_std_core_throw(_x920, kk_std_core_types__new_None(_ctx), _ctx); /*1001*/
    return kk_std_core_types__tuple2__unbox(_x919, _ctx);
  }
  if (kk_std_core__is_Nil(_match_886)) {
    kk_box_t x = _match_887._cons.Just.value;
    kk_box_t _x922;
    kk_stack__stack _x923 = kk_stack__new_Stack(kk_std_core_types__new_Nothing(_ctx), kk_std_core__new_Nil(_ctx), _ctx); /*stack/stack<5>*/
    _x922 = kk_stack__stack_box(_x923, _ctx); /*1005*/
    return kk_std_core_types__new_dash__lp__comma__rp_(x, _x922, _ctx);
  }
  {
    struct kk_std_core_Cons* _con924 = kk_std_core__as_Cons(_match_886);
    kk_box_t x0 = _match_887._cons.Just.value;
    kk_box_t y = _con924->head;
    kk_std_core__list yy = _con924->tail;
    if (kk_likely(kk_std_core__list_is_unique(_match_886))) {
      kk_std_core__list_free(_match_886, _ctx);
    }
    else {
      kk_box_dup(y);
      kk_std_core__list_dup(yy);
      kk_std_core__list_decref(_match_886, _ctx);
    }
    kk_box_t _x925;
    kk_stack__stack _x926;
    kk_std_core_types__maybe _x927 = kk_std_core_types__new_Just(y, _ctx); /*maybe<1034>*/
    _x926 = kk_stack__new_Stack(_x927, yy, _ctx); /*stack/stack<5>*/
    _x925 = kk_stack__stack_box(_x926, _ctx); /*1005*/
    return kk_std_core_types__new_dash__lp__comma__rp_(x0, _x925, _ctx);
  }
}
 
// monadic lift

kk_std_core_types__tuple2_ kk_stack__mlift819_op(kk_std_core__list accum, kk_integer_t n_sq_, kk_std_core_types__tuple2_ _y_808, kk_context_t* _ctx) { /* forall<a> (accum : list<a>, n' : int, (a, stack<a>)) -> exn (list<a>, stack<a>) */ 
  {
    kk_box_t pd = _y_808.fst;
    kk_box_t _box_x852 = _y_808.snd;
    kk_stack__stack s = kk_stack__stack_unbox(_box_x852, NULL);
    kk_box_dup(pd);
    kk_stack__stack_dup(s);
    kk_std_core_types__tuple2__drop(_y_808, _ctx);
    kk_integer_t _x929 = kk_integer_add_small_const(n_sq_, -1, _ctx); /*int*/
    kk_std_core__list _x930 = kk_std_core__new_Cons(kk_reuse_null, pd, accum, _ctx); /*list<1009>*/
    return kk_stack__lift803_pop_n(s, _x929, _x930, _ctx);
  }
}
 
// lifted local: pop-n, acc


// lift anonymous function
struct kk_stack__lift803_pop_n_fun932__t {
  struct kk_function_s _base;
  kk_std_core__list accum0;
  kk_integer_t n0_sq_;
};
static kk_box_t kk_stack__lift803_pop_n_fun932(kk_function_t _fself, kk_box_t _b_856, kk_context_t* _ctx);
static kk_function_t kk_stack__new_lift803_pop_n_fun932(kk_std_core__list accum0, kk_integer_t n0_sq_, kk_context_t* _ctx) {
  struct kk_stack__lift803_pop_n_fun932__t* _self = kk_function_alloc_as(struct kk_stack__lift803_pop_n_fun932__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_stack__lift803_pop_n_fun932, kk_context());
  _self->accum0 = accum0;
  _self->n0_sq_ = n0_sq_;
  return &_self->_base;
}

static kk_box_t kk_stack__lift803_pop_n_fun932(kk_function_t _fself, kk_box_t _b_856, kk_context_t* _ctx) {
  struct kk_stack__lift803_pop_n_fun932__t* _self = kk_function_as(struct kk_stack__lift803_pop_n_fun932__t*, _fself);
  kk_std_core__list accum0 = _self->accum0; /* list<445> */
  kk_integer_t n0_sq_ = _self->n0_sq_; /* int */
  kk_drop_match(_self, {kk_std_core__list_dup(accum0);kk_integer_dup(n0_sq_);}, {}, _ctx)
  kk_std_core_types__tuple2_ _y_861_8080 = kk_std_core_types__tuple2__unbox(_b_856, _ctx); /*(445, stack/stack<445>)*/;
  kk_std_core_types__tuple2_ _x933 = kk_stack__mlift819_op(accum0, n0_sq_, _y_861_8080, _ctx); /*(list<445>, stack/stack<445>)*/
  return kk_std_core_types__tuple2__box(_x933, _ctx);
}

kk_std_core_types__tuple2_ kk_stack__lift803_pop_n(kk_stack__stack st_sq_, kk_integer_t n0_sq_, kk_std_core__list accum0, kk_context_t* _ctx) { /* forall<a> (st' : stack<a>, n' : int, accum : list<a>) -> <div,exn> (list<a>, stack<a>) */ 
  kk__tailcall: ;
  bool _match_884 = kk_integer_eq_borrow(n0_sq_,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_884) {
    kk_integer_drop(n0_sq_, _ctx);
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_std_core__list_box(accum0, _ctx), kk_stack__stack_box(st_sq_, _ctx), _ctx);
  }
  {
    kk_std_core_types__tuple2_ x_820 = kk_stack_pop(st_sq_, _ctx); /*(445, stack/stack<445>)*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__tuple2__drop(x_820, _ctx);
      kk_box_t _x931 = kk_std_core_hnd_yield_extend(kk_stack__new_lift803_pop_n_fun932(accum0, n0_sq_, _ctx), _ctx); /*1001*/
      return kk_std_core_types__tuple2__unbox(_x931, _ctx);
    }
    {
      kk_box_t pd0 = x_820.fst;
      kk_box_t _box_x857 = x_820.snd;
      kk_stack__stack s0 = kk_stack__stack_unbox(_box_x857, NULL);
      kk_box_dup(pd0);
      kk_stack__stack_dup(s0);
      kk_std_core_types__tuple2__drop(x_820, _ctx);
      { // tailcall
        kk_integer_t _x935 = kk_integer_add_small_const(n0_sq_, -1, _ctx); /*int*/
        kk_std_core__list _x936 = kk_std_core__new_Cons(kk_reuse_null, pd0, accum0, _ctx); /*list<1009>*/
        st_sq_ = s0;
        n0_sq_ = _x935;
        accum0 = _x936;
        goto kk__tailcall;
      }
    }
  }
}
 
// Push an element onto the stack

kk_stack__stack kk_stack_push(kk_stack__stack st, kk_box_t to_push, kk_context_t* _ctx) { /* forall<a> (st : stack<a>, to-push : a) -> stack<a> */ 
  {
    kk_std_core_types__maybe _x = st.top;
    kk_std_core_types__maybe_dup(_x);
    if (kk_std_core_types__is_Nothing(_x)) {
      kk_stack__stack_drop(st, _ctx);
      kk_std_core_types__maybe _x937 = kk_std_core_types__new_Just(to_push, _ctx); /*maybe<1034>*/
      return kk_stack__new_Stack(_x937, kk_std_core__new_Nil(_ctx), _ctx);
    }
    {
      kk_box_t x = _x._cons.Just.value;
      kk_std_core_types__maybe _x938 = kk_std_core_types__new_Just(to_push, _ctx); /*maybe<1034>*/
      kk_std_core__list _x939;
      kk_std_core__list _x940;
      {
        kk_std_core__list _x0 = st.rest;
        kk_std_core__list_dup(_x0);
        kk_stack__stack_drop(st, _ctx);
        _x940 = _x0; /*list<517>*/
      }
      _x939 = kk_std_core__new_Cons(kk_reuse_null, x, _x940, _ctx); /*list<1009>*/
      return kk_stack__new_Stack(_x938, _x939, _ctx);
    }
  }
}

kk_stack__stack kk_stack_push_all(kk_stack__stack st, kk_std_core__list to_push, kk_context_t* _ctx) { /* forall<a> (st : stack<a>, to-push : list<a>) -> stack<a> */ 
  kk__tailcall: ;
  if (kk_std_core__is_Nil(to_push)) {
    return st;
  }
  {
    struct kk_std_core_Cons* _con941 = kk_std_core__as_Cons(to_push);
    kk_box_t x = _con941->head;
    kk_std_core__list xx = _con941->tail;
    if (kk_likely(kk_std_core__list_is_unique(to_push))) {
      kk_std_core__list_free(to_push, _ctx);
    }
    else {
      kk_box_dup(x);
      kk_std_core__list_dup(xx);
      kk_std_core__list_decref(to_push, _ctx);
    }
    { // tailcall
      kk_stack__stack _x942 = kk_stack_push(st, x, _ctx); /*stack/stack<517>*/
      st = _x942;
      to_push = xx;
      goto kk__tailcall;
    }
  }
}


// lift anonymous function
struct kk_stack_show_fun944__t {
  struct kk_function_s _base;
};
static kk_string_t kk_stack_show_fun944(kk_function_t _fself, kk_box_t _b_864, kk_context_t* _ctx);
static kk_function_t kk_stack_new_show_fun944(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_stack_show_fun944, _ctx)
  return kk_function_dup(_fself);
}

static kk_string_t kk_stack_show_fun944(kk_function_t _fself, kk_box_t _b_864, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x945 = kk_string_unbox(_b_864); /*string*/
  return kk_std_core_show_3(_x945, _ctx);
}


// lift anonymous function
struct kk_stack_show_fun951__t {
  struct kk_function_s _base;
};
static kk_string_t kk_stack_show_fun951(kk_function_t _fself, kk_string_t _x1950, kk_context_t* _ctx);
static kk_function_t kk_stack_new_show_fun951(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_stack_show_fun951, _ctx)
  return kk_function_dup(_fself);
}

static kk_string_t kk_stack_show_fun951(kk_function_t _fself, kk_string_t _x1950, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_show_3(_x1950, _ctx);
}


// lift anonymous function
struct kk_stack_show_fun956__t {
  struct kk_function_s _base;
  kk_function_t _b_872_867;
};
static kk_string_t kk_stack_show_fun956(kk_function_t _fself, kk_box_t _b_868, kk_context_t* _ctx);
static kk_function_t kk_stack_new_show_fun956(kk_function_t _b_872_867, kk_context_t* _ctx) {
  struct kk_stack_show_fun956__t* _self = kk_function_alloc_as(struct kk_stack_show_fun956__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_stack_show_fun956, kk_context());
  _self->_b_872_867 = _b_872_867;
  return &_self->_base;
}

static kk_string_t kk_stack_show_fun956(kk_function_t _fself, kk_box_t _b_868, kk_context_t* _ctx) {
  struct kk_stack_show_fun956__t* _self = kk_function_as(struct kk_stack_show_fun956__t*, _fself);
  kk_function_t _b_872_867 = _self->_b_872_867; /* (s : string) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_872_867);}, {}, _ctx)
  kk_string_t _x957 = kk_string_unbox(_b_868); /*string*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_string_t, kk_context_t*), _b_872_867, (_b_872_867, _x957, _ctx));
}

kk_string_t kk_stack_show(kk_stack__stack st, kk_context_t* _ctx) { /* (st : stack<string>) -> string */ 
  {
    kk_std_core_types__maybe _x = st.top;
    kk_std_core_types__maybe_dup(_x);
    if (kk_std_core_types__is_Nothing(_x)) {
      kk_std_core__list _x943;
      {
        kk_std_core__list _x0 = st.rest;
        kk_std_core__list_dup(_x0);
        kk_stack__stack_drop(st, _ctx);
        _x943 = _x0; /*list<string>*/
      }
      return kk_std_core_show_list(_x943, kk_stack_new_show_fun944(_ctx), _ctx);
    }
    {
      kk_box_t _box_x865 = _x._cons.Just.value;
      kk_string_t s = kk_string_unbox(_box_x865);
      kk_string_t _x947;
      kk_define_string_literal(, _s948, 5, "top: ")
      _x947 = kk_string_dup(_s948); /*string*/
      kk_string_t _x949;
      kk_std_core__list _b_871_866;
      {
        kk_std_core__list _x1 = st.rest;
        kk_std_core__list_dup(_x1);
        kk_stack__stack_drop(st, _ctx);
        _b_871_866 = _x1; /*list<string>*/
      }
      kk_function_t _b_872_867 = kk_stack_new_show_fun951(_ctx); /*(s : string) -> string*/;
      kk_string_t _x952;
      kk_string_t _x953;
      kk_define_string_literal(, _s954, 7, " rest: ")
      _x953 = kk_string_dup(_s954); /*string*/
      kk_string_t _x955 = kk_std_core_show_list(_b_871_866, kk_stack_new_show_fun956(_b_872_867, _ctx), _ctx); /*string*/
      _x952 = kk_std_core__lp__plus__plus__1_rp_(_x953, _x955, _ctx); /*string*/
      _x949 = kk_std_core__lp__plus__plus__1_rp_(s, _x952, _ctx); /*string*/
      return kk_std_core__lp__plus__plus__1_rp_(_x947, _x949, _ctx);
    }
  }
}


// lift anonymous function
struct kk_stack_show_fun959__t_1 {
  struct kk_function_s _base;
};
static kk_string_t kk_stack_show_fun959_1(kk_function_t _fself, kk_box_t _b_875, kk_context_t* _ctx);
static kk_function_t kk_stack_new_show_fun959_1(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_stack_show_fun959_1, _ctx)
  return kk_function_dup(_fself);
}

static kk_string_t kk_stack_show_fun959_1(kk_function_t _fself, kk_box_t _b_875, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x960 = kk_integer_unbox(_b_875); /*int*/
  return kk_std_core_show(_x960, _ctx);
}


// lift anonymous function
struct kk_stack_show_fun966__t_1 {
  struct kk_function_s _base;
};
static kk_string_t kk_stack_show_fun966_1(kk_function_t _fself, kk_integer_t _x1965, kk_context_t* _ctx);
static kk_function_t kk_stack_new_show_fun966_1(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_stack_show_fun966_1, _ctx)
  return kk_function_dup(_fself);
}

static kk_string_t kk_stack_show_fun966_1(kk_function_t _fself, kk_integer_t _x1965, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_show(_x1965, _ctx);
}


// lift anonymous function
struct kk_stack_show_fun972__t_1 {
  struct kk_function_s _base;
  kk_function_t _b_883_878;
};
static kk_string_t kk_stack_show_fun972_1(kk_function_t _fself, kk_box_t _b_879, kk_context_t* _ctx);
static kk_function_t kk_stack_new_show_fun972_1(kk_function_t _b_883_878, kk_context_t* _ctx) {
  struct kk_stack_show_fun972__t_1* _self = kk_function_alloc_as(struct kk_stack_show_fun972__t_1, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_stack_show_fun972_1, kk_context());
  _self->_b_883_878 = _b_883_878;
  return &_self->_base;
}

static kk_string_t kk_stack_show_fun972_1(kk_function_t _fself, kk_box_t _b_879, kk_context_t* _ctx) {
  struct kk_stack_show_fun972__t_1* _self = kk_function_as(struct kk_stack_show_fun972__t_1*, _fself);
  kk_function_t _b_883_878 = _self->_b_883_878; /* (i : int) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_883_878);}, {}, _ctx)
  kk_integer_t _x973 = kk_integer_unbox(_b_879); /*int*/
  return kk_function_call(kk_string_t, (kk_function_t, kk_integer_t, kk_context_t*), _b_883_878, (_b_883_878, _x973, _ctx));
}

kk_string_t kk_stack_show_1(kk_stack__stack st, kk_context_t* _ctx) { /* (st : stack<int>) -> string */ 
  {
    kk_std_core_types__maybe _x = st.top;
    kk_std_core_types__maybe_dup(_x);
    if (kk_std_core_types__is_Nothing(_x)) {
      kk_std_core__list _x958;
      {
        kk_std_core__list _x0 = st.rest;
        kk_std_core__list_dup(_x0);
        kk_stack__stack_drop(st, _ctx);
        _x958 = _x0; /*list<int>*/
      }
      return kk_std_core_show_list(_x958, kk_stack_new_show_fun959_1(_ctx), _ctx);
    }
    {
      kk_box_t _box_x876 = _x._cons.Just.value;
      kk_integer_t s = kk_integer_unbox(_box_x876);
      kk_string_t _x962;
      kk_define_string_literal(, _s963, 5, "top: ")
      _x962 = kk_string_dup(_s963); /*string*/
      kk_string_t _x964;
      kk_std_core__list _b_882_877;
      {
        kk_std_core__list _x1 = st.rest;
        kk_std_core__list_dup(_x1);
        kk_stack__stack_drop(st, _ctx);
        _b_882_877 = _x1; /*list<int>*/
      }
      kk_function_t _b_883_878 = kk_stack_new_show_fun966_1(_ctx); /*(i : int) -> string*/;
      kk_string_t _x967 = kk_std_core_show(s, _ctx); /*string*/
      kk_string_t _x968;
      kk_string_t _x969;
      kk_define_string_literal(, _s970, 7, " rest: ")
      _x969 = kk_string_dup(_s970); /*string*/
      kk_string_t _x971 = kk_std_core_show_list(_b_882_877, kk_stack_new_show_fun972_1(_b_883_878, _ctx), _ctx); /*string*/
      _x968 = kk_std_core__lp__plus__plus__1_rp_(_x969, _x971, _ctx); /*string*/
      _x964 = kk_std_core__lp__plus__plus__1_rp_(_x967, _x968, _ctx); /*string*/
      return kk_std_core__lp__plus__plus__1_rp_(_x962, _x964, _ctx);
    }
  }
}

// initialization
void kk_stack__init(kk_context_t* _ctx){
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
void kk_stack__done(kk_context_t* _ctx){
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
