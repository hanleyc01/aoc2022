// Koka generated module: "main", koka version: 2.4.0, platform: 64-bit
#include "main.h"
 
// monadic lift


// lift anonymous function
struct kk_main__mlift854_count_start_fun1152__t {
  struct kk_function_s _base;
  kk_ref_t count;
};
static kk_unit_t kk_main__mlift854_count_start_fun1152(kk_function_t _fself, kk_integer_t _y_807, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift854_count_start_fun1152(kk_ref_t count, kk_context_t* _ctx) {
  struct kk_main__mlift854_count_start_fun1152__t* _self = kk_function_alloc_as(struct kk_main__mlift854_count_start_fun1152__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift854_count_start_fun1152, kk_context());
  _self->count = count;
  return &_self->_base;
}

static kk_unit_t kk_main__mlift854_count_start_fun1152(kk_function_t _fself, kk_integer_t _y_807, kk_context_t* _ctx) {
  struct kk_main__mlift854_count_start_fun1152__t* _self = kk_function_as(struct kk_main__mlift854_count_start_fun1152__t*, _fself);
  kk_ref_t count = _self->count; /* local-var<414,int> */
  kk_drop_match(_self, {kk_ref_dup(count);}, {}, _ctx)
  kk_integer_t _b_941_939 = kk_integer_add_small_const(_y_807, 1, _ctx); /*int*/;
  kk_unit_t _brw_1144 = kk_Unit;
  kk_ref_set_borrow(count,(kk_integer_box(_b_941_939)),kk_context());
  kk_ref_drop(count, _ctx);
  return _brw_1144;
}


// lift anonymous function
struct kk_main__mlift854_count_start_fun1154__t {
  struct kk_function_s _base;
  kk_function_t next_869;
};
static kk_box_t kk_main__mlift854_count_start_fun1154(kk_function_t _fself, kk_box_t _b_943, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift854_count_start_fun1154(kk_function_t next_869, kk_context_t* _ctx) {
  struct kk_main__mlift854_count_start_fun1154__t* _self = kk_function_alloc_as(struct kk_main__mlift854_count_start_fun1154__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift854_count_start_fun1154, kk_context());
  _self->next_869 = next_869;
  return &_self->_base;
}

static kk_box_t kk_main__mlift854_count_start_fun1154(kk_function_t _fself, kk_box_t _b_943, kk_context_t* _ctx) {
  struct kk_main__mlift854_count_start_fun1154__t* _self = kk_function_as(struct kk_main__mlift854_count_start_fun1154__t*, _fself);
  kk_function_t next_869 = _self->next_869; /* (int) -> <local<414>,exn,div,console> () */
  kk_drop_match(_self, {kk_function_dup(next_869);}, {}, _ctx)
  kk_unit_t _x1155 = kk_Unit;
  kk_integer_t _x1156 = kk_integer_unbox(_b_943); /*int*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_integer_t, kk_context_t*), next_869, (next_869, _x1156, _ctx));
  return kk_unit_box(_x1155);
}

kk_unit_t kk_main__mlift854_count_start(kk_ref_t count, kk_char_t fr, kk_context_t* _ctx) { /* forall<h> (count : local-var<h,int>, fr : char) -> exn () */ 
  kk_integer_t x_868;
  kk_box_t _x1150;
  kk_ref_t _x1151 = kk_ref_dup(count); /*local-var<414,int>*/
  _x1150 = kk_ref_get(_x1151,kk_context()); /*1000*/
  x_868 = kk_integer_unbox(_x1150); /*int*/
  kk_function_t next_869 = kk_main__new_mlift854_count_start_fun1152(count, _ctx); /*(int) -> <local<414>,exn,div,console> ()*/;
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_868, _ctx);
    kk_box_t _x1153 = kk_std_core_hnd_yield_extend(kk_main__new_mlift854_count_start_fun1154(next_869, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x1153); return kk_Unit;
  }
  {
    kk_function_call(kk_unit_t, (kk_function_t, kk_integer_t, kk_context_t*), next_869, (next_869, x_868, _ctx)); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift855_count_start_fun1158__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift855_count_start_fun1158(kk_function_t _fself, kk_box_t _b_948, kk_box_t _b_949, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift855_count_start_fun1158(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift855_count_start_fun1158, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main__mlift855_count_start_fun1158(kk_function_t _fself, kk_box_t _b_948, kk_box_t _b_949, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x1159;
  kk_std_core__list _x1160 = kk_std_core__list_unbox(_b_948, _ctx); /*list<char>*/
  kk_integer_t _x1161 = kk_integer_unbox(_b_949); /*int*/
  _x1159 = kk_list_dash_extra_get(_x1160, _x1161, _ctx); /*maybe<1000>*/
  return kk_std_core_types__maybe_box(_x1159, _ctx);
}


// lift anonymous function
struct kk_main__mlift855_count_start_fun1164__t {
  struct kk_function_s _base;
  kk_ref_t count;
};
static kk_box_t kk_main__mlift855_count_start_fun1164(kk_function_t _fself, kk_box_t _b_956, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift855_count_start_fun1164(kk_ref_t count, kk_context_t* _ctx) {
  struct kk_main__mlift855_count_start_fun1164__t* _self = kk_function_alloc_as(struct kk_main__mlift855_count_start_fun1164__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift855_count_start_fun1164, kk_context());
  _self->count = count;
  return &_self->_base;
}

static kk_box_t kk_main__mlift855_count_start_fun1164(kk_function_t _fself, kk_box_t _b_956, kk_context_t* _ctx) {
  struct kk_main__mlift855_count_start_fun1164__t* _self = kk_function_as(struct kk_main__mlift855_count_start_fun1164__t*, _fself);
  kk_ref_t count = _self->count; /* local-var<414,int> */
  kk_drop_match(_self, {kk_ref_dup(count);}, {}, _ctx)
  kk_char_t fr_958 = kk_char_unbox(_b_956, _ctx); /*char*/;
  kk_unit_t _x1165 = kk_Unit;
  kk_main__mlift854_count_start(count, fr_958, _ctx);
  return kk_unit_box(_x1165);
}

kk_unit_t kk_main__mlift855_count_start(kk_ref_t count, kk_std_core__list sig, kk_integer_t _y_805, kk_context_t* _ctx) { /* forall<h> (count : local-var<h,int>, sig : list<char>, int) -> <local<h>,exn,div,console> () */ 
  kk_std_core_types__maybe _b_951_950;
  kk_box_t _x1157 = kk_std_core_hnd__open_none2(kk_main__new_mlift855_count_start_fun1158(_ctx), kk_std_core__list_box(sig, _ctx), kk_integer_box(_y_805), _ctx); /*1002*/
  _b_951_950 = kk_std_core_types__maybe_unbox(_x1157, _ctx); /*maybe<char>*/
  kk_char_t x_872;
  kk_box_t _x1162 = kk_std_core_unjust(_b_951_950, _ctx); /*1001*/
  x_872 = kk_char_unbox(_x1162, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x1163 = kk_std_core_hnd_yield_extend(kk_main__new_mlift855_count_start_fun1164(count, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x1163); return kk_Unit;
  }
  {
    kk_main__mlift854_count_start(count, x_872, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift856_count_start_fun1169__t {
  struct kk_function_s _base;
  kk_ref_t count;
  kk_std_core__list sig;
};
static kk_box_t kk_main__mlift856_count_start_fun1169(kk_function_t _fself, kk_box_t _b_962, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift856_count_start_fun1169(kk_ref_t count, kk_std_core__list sig, kk_context_t* _ctx) {
  struct kk_main__mlift856_count_start_fun1169__t* _self = kk_function_alloc_as(struct kk_main__mlift856_count_start_fun1169__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift856_count_start_fun1169, kk_context());
  _self->count = count;
  _self->sig = sig;
  return &_self->_base;
}

static kk_box_t kk_main__mlift856_count_start_fun1169(kk_function_t _fself, kk_box_t _b_962, kk_context_t* _ctx) {
  struct kk_main__mlift856_count_start_fun1169__t* _self = kk_function_as(struct kk_main__mlift856_count_start_fun1169__t*, _fself);
  kk_ref_t count = _self->count; /* local-var<414,int> */
  kk_std_core__list sig = _self->sig; /* list<char> */
  kk_drop_match(_self, {kk_ref_dup(count);kk_std_core__list_dup(sig);}, {}, _ctx)
  kk_integer_t _y_964_805 = kk_integer_unbox(_b_962); /*int*/;
  kk_unit_t _x1170 = kk_Unit;
  kk_main__mlift855_count_start(count, sig, _y_964_805, _ctx);
  return kk_unit_box(_x1170);
}

kk_unit_t kk_main__mlift856_count_start(kk_ref_t count, kk_std_core__list sig, kk_char_t t, kk_context_t* _ctx) { /* forall<h> (count : local-var<h,int>, sig : list<char>, t : char) -> exn () */ 
  kk_integer_t x_874;
  kk_box_t _x1166;
  kk_ref_t _x1167 = kk_ref_dup(count); /*local-var<414,int>*/
  _x1166 = kk_ref_get(_x1167,kk_context()); /*1000*/
  x_874 = kk_integer_unbox(_x1166); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_874, _ctx);
    kk_box_t _x1168 = kk_std_core_hnd_yield_extend(kk_main__new_mlift856_count_start_fun1169(count, sig, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x1168); return kk_Unit;
  }
  {
    kk_main__mlift855_count_start(count, sig, x_874, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift857_count_start_fun1172__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift857_count_start_fun1172(kk_function_t _fself, kk_box_t _b_968, kk_box_t _b_969, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift857_count_start_fun1172(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift857_count_start_fun1172, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main__mlift857_count_start_fun1172(kk_function_t _fself, kk_box_t _b_968, kk_box_t _b_969, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x1173;
  kk_std_core__list _x1174 = kk_std_core__list_unbox(_b_968, _ctx); /*list<char>*/
  kk_integer_t _x1175 = kk_integer_unbox(_b_969); /*int*/
  _x1173 = kk_list_dash_extra_get(_x1174, _x1175, _ctx); /*maybe<1000>*/
  return kk_std_core_types__maybe_box(_x1173, _ctx);
}


// lift anonymous function
struct kk_main__mlift857_count_start_fun1180__t {
  struct kk_function_s _base;
  kk_ref_t count;
  kk_std_core__list sig;
};
static kk_box_t kk_main__mlift857_count_start_fun1180(kk_function_t _fself, kk_box_t _b_976, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift857_count_start_fun1180(kk_ref_t count, kk_std_core__list sig, kk_context_t* _ctx) {
  struct kk_main__mlift857_count_start_fun1180__t* _self = kk_function_alloc_as(struct kk_main__mlift857_count_start_fun1180__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift857_count_start_fun1180, kk_context());
  _self->count = count;
  _self->sig = sig;
  return &_self->_base;
}

static kk_box_t kk_main__mlift857_count_start_fun1180(kk_function_t _fself, kk_box_t _b_976, kk_context_t* _ctx) {
  struct kk_main__mlift857_count_start_fun1180__t* _self = kk_function_as(struct kk_main__mlift857_count_start_fun1180__t*, _fself);
  kk_ref_t count = _self->count; /* local-var<414,int> */
  kk_std_core__list sig = _self->sig; /* list<char> */
  kk_drop_match(_self, {kk_ref_dup(count);kk_std_core__list_dup(sig);}, {}, _ctx)
  kk_char_t t_978 = kk_char_unbox(_b_976, _ctx); /*char*/;
  kk_unit_t _x1181 = kk_Unit;
  kk_main__mlift856_count_start(count, sig, t_978, _ctx);
  return kk_unit_box(_x1181);
}

kk_unit_t kk_main__mlift857_count_start(kk_ref_t count, kk_std_core__list sig, kk_integer_t _y_803, kk_context_t* _ctx) { /* forall<h> (count : local-var<h,int>, sig : list<char>, int) -> <local<h>,exn,div,console> () */ 
  kk_integer_t _x21_846 = kk_integer_add_small_const(_y_803, -3, _ctx); /*int*/;
  kk_std_core_types__maybe _b_971_970;
  kk_box_t _x1171;
  kk_box_t _x1176;
  kk_std_core__list _x1177 = kk_std_core__list_dup(sig); /*list<char>*/
  _x1176 = kk_std_core__list_box(_x1177, _ctx); /*1000*/
  _x1171 = kk_std_core_hnd__open_none2(kk_main__new_mlift857_count_start_fun1172(_ctx), _x1176, kk_integer_box(_x21_846), _ctx); /*1002*/
  _b_971_970 = kk_std_core_types__maybe_unbox(_x1171, _ctx); /*maybe<char>*/
  kk_char_t x_876;
  kk_box_t _x1178 = kk_std_core_unjust(_b_971_970, _ctx); /*1001*/
  x_876 = kk_char_unbox(_x1178, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x1179 = kk_std_core_hnd_yield_extend(kk_main__new_mlift857_count_start_fun1180(count, sig, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x1179); return kk_Unit;
  }
  {
    kk_main__mlift856_count_start(count, sig, x_876, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift858_count_start_fun1185__t {
  struct kk_function_s _base;
  kk_ref_t count;
  kk_std_core__list sig;
};
static kk_box_t kk_main__mlift858_count_start_fun1185(kk_function_t _fself, kk_box_t _b_982, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift858_count_start_fun1185(kk_ref_t count, kk_std_core__list sig, kk_context_t* _ctx) {
  struct kk_main__mlift858_count_start_fun1185__t* _self = kk_function_alloc_as(struct kk_main__mlift858_count_start_fun1185__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift858_count_start_fun1185, kk_context());
  _self->count = count;
  _self->sig = sig;
  return &_self->_base;
}

static kk_box_t kk_main__mlift858_count_start_fun1185(kk_function_t _fself, kk_box_t _b_982, kk_context_t* _ctx) {
  struct kk_main__mlift858_count_start_fun1185__t* _self = kk_function_as(struct kk_main__mlift858_count_start_fun1185__t*, _fself);
  kk_ref_t count = _self->count; /* local-var<414,int> */
  kk_std_core__list sig = _self->sig; /* list<char> */
  kk_drop_match(_self, {kk_ref_dup(count);kk_std_core__list_dup(sig);}, {}, _ctx)
  kk_integer_t _y_984_803 = kk_integer_unbox(_b_982); /*int*/;
  kk_unit_t _x1186 = kk_Unit;
  kk_main__mlift857_count_start(count, sig, _y_984_803, _ctx);
  return kk_unit_box(_x1186);
}

kk_unit_t kk_main__mlift858_count_start(kk_ref_t count, kk_std_core__list sig, kk_char_t s, kk_context_t* _ctx) { /* forall<h> (count : local-var<h,int>, sig : list<char>, s : char) -> exn () */ 
  kk_integer_t x_878;
  kk_box_t _x1182;
  kk_ref_t _x1183 = kk_ref_dup(count); /*local-var<414,int>*/
  _x1182 = kk_ref_get(_x1183,kk_context()); /*1000*/
  x_878 = kk_integer_unbox(_x1182); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_878, _ctx);
    kk_box_t _x1184 = kk_std_core_hnd_yield_extend(kk_main__new_mlift858_count_start_fun1185(count, sig, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x1184); return kk_Unit;
  }
  {
    kk_main__mlift857_count_start(count, sig, x_878, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift859_count_start_fun1188__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift859_count_start_fun1188(kk_function_t _fself, kk_box_t _b_988, kk_box_t _b_989, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift859_count_start_fun1188(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift859_count_start_fun1188, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main__mlift859_count_start_fun1188(kk_function_t _fself, kk_box_t _b_988, kk_box_t _b_989, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x1189;
  kk_std_core__list _x1190 = kk_std_core__list_unbox(_b_988, _ctx); /*list<char>*/
  kk_integer_t _x1191 = kk_integer_unbox(_b_989); /*int*/
  _x1189 = kk_list_dash_extra_get(_x1190, _x1191, _ctx); /*maybe<1000>*/
  return kk_std_core_types__maybe_box(_x1189, _ctx);
}


// lift anonymous function
struct kk_main__mlift859_count_start_fun1196__t {
  struct kk_function_s _base;
  kk_ref_t count;
  kk_std_core__list sig;
};
static kk_box_t kk_main__mlift859_count_start_fun1196(kk_function_t _fself, kk_box_t _b_996, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift859_count_start_fun1196(kk_ref_t count, kk_std_core__list sig, kk_context_t* _ctx) {
  struct kk_main__mlift859_count_start_fun1196__t* _self = kk_function_alloc_as(struct kk_main__mlift859_count_start_fun1196__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift859_count_start_fun1196, kk_context());
  _self->count = count;
  _self->sig = sig;
  return &_self->_base;
}

static kk_box_t kk_main__mlift859_count_start_fun1196(kk_function_t _fself, kk_box_t _b_996, kk_context_t* _ctx) {
  struct kk_main__mlift859_count_start_fun1196__t* _self = kk_function_as(struct kk_main__mlift859_count_start_fun1196__t*, _fself);
  kk_ref_t count = _self->count; /* local-var<414,int> */
  kk_std_core__list sig = _self->sig; /* list<char> */
  kk_drop_match(_self, {kk_ref_dup(count);kk_std_core__list_dup(sig);}, {}, _ctx)
  kk_char_t s_998 = kk_char_unbox(_b_996, _ctx); /*char*/;
  kk_unit_t _x1197 = kk_Unit;
  kk_main__mlift858_count_start(count, sig, s_998, _ctx);
  return kk_unit_box(_x1197);
}

kk_unit_t kk_main__mlift859_count_start(kk_ref_t count, kk_std_core__list sig, kk_integer_t _y_801, kk_context_t* _ctx) { /* forall<h> (count : local-var<h,int>, sig : list<char>, int) -> <local<h>,exn,div,console> () */ 
  kk_integer_t _x20_844 = kk_integer_add_small_const(_y_801, -2, _ctx); /*int*/;
  kk_std_core_types__maybe _b_991_990;
  kk_box_t _x1187;
  kk_box_t _x1192;
  kk_std_core__list _x1193 = kk_std_core__list_dup(sig); /*list<char>*/
  _x1192 = kk_std_core__list_box(_x1193, _ctx); /*1000*/
  _x1187 = kk_std_core_hnd__open_none2(kk_main__new_mlift859_count_start_fun1188(_ctx), _x1192, kk_integer_box(_x20_844), _ctx); /*1002*/
  _b_991_990 = kk_std_core_types__maybe_unbox(_x1187, _ctx); /*maybe<char>*/
  kk_char_t x_880;
  kk_box_t _x1194 = kk_std_core_unjust(_b_991_990, _ctx); /*1001*/
  x_880 = kk_char_unbox(_x1194, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x1195 = kk_std_core_hnd_yield_extend(kk_main__new_mlift859_count_start_fun1196(count, sig, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x1195); return kk_Unit;
  }
  {
    kk_main__mlift858_count_start(count, sig, x_880, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift860_count_start_fun1201__t {
  struct kk_function_s _base;
  kk_ref_t count;
  kk_std_core__list sig;
};
static kk_box_t kk_main__mlift860_count_start_fun1201(kk_function_t _fself, kk_box_t _b_1002, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift860_count_start_fun1201(kk_ref_t count, kk_std_core__list sig, kk_context_t* _ctx) {
  struct kk_main__mlift860_count_start_fun1201__t* _self = kk_function_alloc_as(struct kk_main__mlift860_count_start_fun1201__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift860_count_start_fun1201, kk_context());
  _self->count = count;
  _self->sig = sig;
  return &_self->_base;
}

static kk_box_t kk_main__mlift860_count_start_fun1201(kk_function_t _fself, kk_box_t _b_1002, kk_context_t* _ctx) {
  struct kk_main__mlift860_count_start_fun1201__t* _self = kk_function_as(struct kk_main__mlift860_count_start_fun1201__t*, _fself);
  kk_ref_t count = _self->count; /* local-var<414,int> */
  kk_std_core__list sig = _self->sig; /* list<char> */
  kk_drop_match(_self, {kk_ref_dup(count);kk_std_core__list_dup(sig);}, {}, _ctx)
  kk_integer_t _y_1004_801 = kk_integer_unbox(_b_1002); /*int*/;
  kk_unit_t _x1202 = kk_Unit;
  kk_main__mlift859_count_start(count, sig, _y_1004_801, _ctx);
  return kk_unit_box(_x1202);
}

kk_unit_t kk_main__mlift860_count_start(kk_ref_t count, kk_std_core__list sig, kk_char_t f, kk_context_t* _ctx) { /* forall<h> (count : local-var<h,int>, sig : list<char>, f : char) -> exn () */ 
  kk_integer_t x_882;
  kk_box_t _x1198;
  kk_ref_t _x1199 = kk_ref_dup(count); /*local-var<414,int>*/
  _x1198 = kk_ref_get(_x1199,kk_context()); /*1000*/
  x_882 = kk_integer_unbox(_x1198); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_882, _ctx);
    kk_box_t _x1200 = kk_std_core_hnd_yield_extend(kk_main__new_mlift860_count_start_fun1201(count, sig, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x1200); return kk_Unit;
  }
  {
    kk_main__mlift859_count_start(count, sig, x_882, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift861_count_start_fun1204__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift861_count_start_fun1204(kk_function_t _fself, kk_box_t _b_1008, kk_box_t _b_1009, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift861_count_start_fun1204(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift861_count_start_fun1204, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main__mlift861_count_start_fun1204(kk_function_t _fself, kk_box_t _b_1008, kk_box_t _b_1009, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x1205;
  kk_std_core__list _x1206 = kk_std_core__list_unbox(_b_1008, _ctx); /*list<char>*/
  kk_integer_t _x1207 = kk_integer_unbox(_b_1009); /*int*/
  _x1205 = kk_list_dash_extra_get(_x1206, _x1207, _ctx); /*maybe<1000>*/
  return kk_std_core_types__maybe_box(_x1205, _ctx);
}


// lift anonymous function
struct kk_main__mlift861_count_start_fun1212__t {
  struct kk_function_s _base;
  kk_ref_t count;
  kk_std_core__list sig;
};
static kk_box_t kk_main__mlift861_count_start_fun1212(kk_function_t _fself, kk_box_t _b_1016, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift861_count_start_fun1212(kk_ref_t count, kk_std_core__list sig, kk_context_t* _ctx) {
  struct kk_main__mlift861_count_start_fun1212__t* _self = kk_function_alloc_as(struct kk_main__mlift861_count_start_fun1212__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift861_count_start_fun1212, kk_context());
  _self->count = count;
  _self->sig = sig;
  return &_self->_base;
}

static kk_box_t kk_main__mlift861_count_start_fun1212(kk_function_t _fself, kk_box_t _b_1016, kk_context_t* _ctx) {
  struct kk_main__mlift861_count_start_fun1212__t* _self = kk_function_as(struct kk_main__mlift861_count_start_fun1212__t*, _fself);
  kk_ref_t count = _self->count; /* local-var<414,int> */
  kk_std_core__list sig = _self->sig; /* list<char> */
  kk_drop_match(_self, {kk_ref_dup(count);kk_std_core__list_dup(sig);}, {}, _ctx)
  kk_char_t f_1018 = kk_char_unbox(_b_1016, _ctx); /*char*/;
  kk_unit_t _x1213 = kk_Unit;
  kk_main__mlift860_count_start(count, sig, f_1018, _ctx);
  return kk_unit_box(_x1213);
}

kk_unit_t kk_main__mlift861_count_start(kk_ref_t count, kk_std_core__list sig, kk_integer_t _y_799, kk_context_t* _ctx) { /* forall<h> (count : local-var<h,int>, sig : list<char>, int) -> <local<h>,exn,div,console> () */ 
  kk_integer_t _x2_842 = kk_integer_add_small_const(_y_799, -1, _ctx); /*int*/;
  kk_std_core_types__maybe _b_1011_1010;
  kk_box_t _x1203;
  kk_box_t _x1208;
  kk_std_core__list _x1209 = kk_std_core__list_dup(sig); /*list<char>*/
  _x1208 = kk_std_core__list_box(_x1209, _ctx); /*1000*/
  _x1203 = kk_std_core_hnd__open_none2(kk_main__new_mlift861_count_start_fun1204(_ctx), _x1208, kk_integer_box(_x2_842), _ctx); /*1002*/
  _b_1011_1010 = kk_std_core_types__maybe_unbox(_x1203, _ctx); /*maybe<char>*/
  kk_char_t x_884;
  kk_box_t _x1210 = kk_std_core_unjust(_b_1011_1010, _ctx); /*1001*/
  x_884 = kk_char_unbox(_x1210, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x1211 = kk_std_core_hnd_yield_extend(kk_main__new_mlift861_count_start_fun1212(count, sig, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x1211); return kk_Unit;
  }
  {
    kk_main__mlift860_count_start(count, sig, x_884, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift863_count_start_fun1215__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift863_count_start_fun1215(kk_function_t _fself, kk_box_t _b_1025, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift863_count_start_fun1215(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift863_count_start_fun1215, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main__mlift863_count_start_fun1215(kk_function_t _fself, kk_box_t _b_1025, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x1216;
  bool b_1043 = kk_bool_unbox(_b_1025); /*bool*/;
  if (b_1043) {
    _x1216 = false; /*bool*/
  }
  else {
    _x1216 = true; /*bool*/
  }
  return kk_bool_box(_x1216);
}


// lift anonymous function
struct kk_main__mlift863_count_start_fun1220__t {
  struct kk_function_s _base;
  kk_ref_t count;
  kk_std_core__list sig;
};
static kk_box_t kk_main__mlift863_count_start_fun1220(kk_function_t _fself, kk_box_t _b_1029, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift863_count_start_fun1220(kk_ref_t count, kk_std_core__list sig, kk_context_t* _ctx) {
  struct kk_main__mlift863_count_start_fun1220__t* _self = kk_function_alloc_as(struct kk_main__mlift863_count_start_fun1220__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift863_count_start_fun1220, kk_context());
  _self->count = count;
  _self->sig = sig;
  return &_self->_base;
}

static kk_box_t kk_main__mlift863_count_start_fun1220(kk_function_t _fself, kk_box_t _b_1029, kk_context_t* _ctx) {
  struct kk_main__mlift863_count_start_fun1220__t* _self = kk_function_as(struct kk_main__mlift863_count_start_fun1220__t*, _fself);
  kk_ref_t count = _self->count; /* local-var<414,int> */
  kk_std_core__list sig = _self->sig; /* list<char> */
  kk_drop_match(_self, {kk_ref_dup(count);kk_std_core__list_dup(sig);}, {}, _ctx)
  kk_integer_t _y_1042_799 = kk_integer_unbox(_b_1029); /*int*/;
  kk_unit_t _x1221 = kk_Unit;
  kk_main__mlift861_count_start(count, sig, _y_1042_799, _ctx);
  return kk_unit_box(_x1221);
}


// lift anonymous function
struct kk_main__mlift863_count_start_fun1224__t {
  struct kk_function_s _base;
  kk_ref_t count;
};
static kk_unit_t kk_main__mlift863_count_start_fun1224(kk_function_t _fself, kk_integer_t _y_809, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift863_count_start_fun1224(kk_ref_t count, kk_context_t* _ctx) {
  struct kk_main__mlift863_count_start_fun1224__t* _self = kk_function_alloc_as(struct kk_main__mlift863_count_start_fun1224__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift863_count_start_fun1224, kk_context());
  _self->count = count;
  return &_self->_base;
}

static kk_unit_t kk_main__mlift863_count_start_fun1224(kk_function_t _fself, kk_integer_t _y_809, kk_context_t* _ctx) {
  struct kk_main__mlift863_count_start_fun1224__t* _self = kk_function_as(struct kk_main__mlift863_count_start_fun1224__t*, _fself);
  kk_ref_t count = _self->count; /* local-var<414,int> */
  kk_drop_match(_self, {kk_ref_dup(count);}, {}, _ctx)
  kk_integer_t _b_1035_1033 = kk_integer_add_small_const(_y_809, 1, _ctx); /*int*/;
  kk_unit_t _brw_1132 = kk_Unit;
  kk_ref_set_borrow(count,(kk_integer_box(_b_1035_1033)),kk_context());
  kk_ref_drop(count, _ctx);
  return _brw_1132;
}


// lift anonymous function
struct kk_main__mlift863_count_start_fun1226__t {
  struct kk_function_s _base;
  kk_function_t next0_889;
};
static kk_box_t kk_main__mlift863_count_start_fun1226(kk_function_t _fself, kk_box_t _b_1037, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift863_count_start_fun1226(kk_function_t next0_889, kk_context_t* _ctx) {
  struct kk_main__mlift863_count_start_fun1226__t* _self = kk_function_alloc_as(struct kk_main__mlift863_count_start_fun1226__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main__mlift863_count_start_fun1226, kk_context());
  _self->next0_889 = next0_889;
  return &_self->_base;
}

static kk_box_t kk_main__mlift863_count_start_fun1226(kk_function_t _fself, kk_box_t _b_1037, kk_context_t* _ctx) {
  struct kk_main__mlift863_count_start_fun1226__t* _self = kk_function_as(struct kk_main__mlift863_count_start_fun1226__t*, _fself);
  kk_function_t next0_889 = _self->next0_889; /* (int) -> <local<414>,exn,div,console> () */
  kk_drop_match(_self, {kk_function_dup(next0_889);}, {}, _ctx)
  kk_unit_t _x1227 = kk_Unit;
  kk_integer_t _x1228 = kk_integer_unbox(_b_1037); /*int*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_integer_t, kk_context_t*), next0_889, (next0_889, _x1228, _ctx));
  return kk_unit_box(_x1227);
}

kk_unit_t kk_main__mlift863_count_start(kk_ref_t count, kk_std_core__list sig, kk_integer_t _y_798, kk_context_t* _ctx) { /* forall<h> (count : local-var<h,int>, sig : list<char>, int) -> <local<h>,exn,div,console> () */ 
  bool _x10_840;
  bool _brw_1134 = kk_integer_lt_borrow(_y_798,(kk_integer_from_small(3)),kk_context()); /*bool*/;
  kk_integer_drop(_y_798, _ctx);
  _x10_840 = _brw_1134; /*bool*/
  bool _match_1130;
  kk_box_t _x1214 = kk_std_core_hnd__open_none1(kk_main__new_mlift863_count_start_fun1215(_ctx), kk_bool_box(_x10_840), _ctx); /*1001*/
  _match_1130 = kk_bool_unbox(_x1214); /*bool*/
  if (_match_1130) {
    kk_integer_t x_886;
    kk_box_t _x1217;
    kk_ref_t _x1218 = kk_ref_dup(count); /*local-var<414,int>*/
    _x1217 = kk_ref_get(_x1218,kk_context()); /*1000*/
    x_886 = kk_integer_unbox(_x1217); /*int*/
    if (kk_yielding(kk_context())) {
      kk_integer_drop(x_886, _ctx);
      kk_box_t _x1219 = kk_std_core_hnd_yield_extend(kk_main__new_mlift863_count_start_fun1220(count, sig, _ctx), _ctx); /*1001*/
      kk_unit_unbox(_x1219); return kk_Unit;
    }
    {
      kk_main__mlift861_count_start(count, sig, x_886, _ctx); return kk_Unit;
    }
  }
  {
    kk_std_core__list_drop(sig, _ctx);
    kk_integer_t x0_888;
    kk_box_t _x1222;
    kk_ref_t _x1223 = kk_ref_dup(count); /*local-var<414,int>*/
    _x1222 = kk_ref_get(_x1223,kk_context()); /*1000*/
    x0_888 = kk_integer_unbox(_x1222); /*int*/
    kk_function_t next0_889 = kk_main__new_mlift863_count_start_fun1224(count, _ctx); /*(int) -> <local<414>,exn,div,console> ()*/;
    if (kk_yielding(kk_context())) {
      kk_integer_drop(x0_888, _ctx);
      kk_box_t _x1225 = kk_std_core_hnd_yield_extend(kk_main__new_mlift863_count_start_fun1226(next0_889, _ctx), _ctx); /*1001*/
      kk_unit_unbox(_x1225); return kk_Unit;
    }
    {
      kk_function_call(kk_unit_t, (kk_function_t, kk_integer_t, kk_context_t*), next0_889, (next0_889, x0_888, _ctx)); return kk_Unit;
    }
  }
}


// lift anonymous function
struct kk_main_count_start_fun1231__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_count_start_fun1231(kk_function_t _fself, kk_box_t _b_1048, kk_context_t* _ctx);
static kk_function_t kk_main_new_count_start_fun1231(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_count_start_fun1231, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_count_start_fun1231(kk_function_t _fself, kk_box_t _b_1048, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x1232;
  kk_main__packet _match_1129 = kk_main__packet_unbox(_b_1048, _ctx); /*packet*/;
  {
    kk_std_core__list _x = _match_1129.datastream;
    _x1232 = _x; /*list<char>*/
  }
  return kk_std_core__list_box(_x1232, _ctx);
}


// lift anonymous function
struct kk_main_count_start_fun1234__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_std_core__list sig;
};
static bool kk_main_count_start_fun1234(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_count_start_fun1234(kk_ref_t loc, kk_std_core__list sig, kk_context_t* _ctx) {
  struct kk_main_count_start_fun1234__t* _self = kk_function_alloc_as(struct kk_main_count_start_fun1234__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_count_start_fun1234, kk_context());
  _self->loc = loc;
  _self->sig = sig;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_count_start_fun1237__t {
  struct kk_function_s _base;
  kk_std_core__list sig;
};
static kk_box_t kk_main_count_start_fun1237(kk_function_t _fself, kk_box_t _b_1057, kk_context_t* _ctx);
static kk_function_t kk_main_new_count_start_fun1237(kk_std_core__list sig, kk_context_t* _ctx) {
  struct kk_main_count_start_fun1237__t* _self = kk_function_alloc_as(struct kk_main_count_start_fun1237__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_count_start_fun1237, kk_context());
  _self->sig = sig;
  return &_self->_base;
}

static kk_box_t kk_main_count_start_fun1237(kk_function_t _fself, kk_box_t _b_1057, kk_context_t* _ctx) {
  struct kk_main_count_start_fun1237__t* _self = kk_function_as(struct kk_main_count_start_fun1237__t*, _fself);
  kk_std_core__list sig = _self->sig; /* list<char> */
  kk_drop_match(_self, {kk_std_core__list_dup(sig);}, {}, _ctx)
  bool _x1238;
  kk_integer_t _brw_1127 = kk_integer_unbox(_b_1057); /*int*/;
  kk_integer_t _brw_1126 = kk_std_core_length_1(sig, _ctx); /*int*/;
  bool _brw_1128 = kk_integer_lt_borrow(_brw_1127,_brw_1126,kk_context()); /*bool*/;
  kk_integer_drop(_brw_1127, _ctx);
  kk_integer_drop(_brw_1126, _ctx);
  _x1238 = _brw_1128; /*bool*/
  return kk_bool_box(_x1238);
}
static bool kk_main_count_start_fun1234(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_count_start_fun1234__t* _self = kk_function_as(struct kk_main_count_start_fun1234__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<414,int> */
  kk_std_core__list sig = _self->sig; /* list<char> */
  kk_drop_match(_self, {kk_ref_dup(loc);kk_std_core__list_dup(sig);}, {}, _ctx)
  kk_integer_t x0_896;
  kk_box_t _x1235 = kk_ref_get(loc,kk_context()); /*1000*/
  x0_896 = kk_integer_unbox(_x1235); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x0_896, _ctx);
    kk_box_t _x1236 = kk_std_core_hnd_yield_extend(kk_main_new_count_start_fun1237(sig, _ctx), _ctx); /*1001*/
    return kk_bool_unbox(_x1236);
  }
  {
    kk_integer_t _brw_1124 = kk_std_core_length_1(sig, _ctx); /*int*/;
    bool _brw_1125 = kk_integer_lt_borrow(x0_896,_brw_1124,kk_context()); /*bool*/;
    kk_integer_drop(x0_896, _ctx);
    kk_integer_drop(_brw_1124, _ctx);
    return _brw_1125;
  }
}


// lift anonymous function
struct kk_main_count_start_fun1240__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_std_core__list sig;
};
static kk_unit_t kk_main_count_start_fun1240(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_count_start_fun1240(kk_ref_t loc, kk_std_core__list sig, kk_context_t* _ctx) {
  struct kk_main_count_start_fun1240__t* _self = kk_function_alloc_as(struct kk_main_count_start_fun1240__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_count_start_fun1240, kk_context());
  _self->loc = loc;
  _self->sig = sig;
  return &_self->_base;
}



// lift anonymous function
struct kk_main_count_start_fun1244__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_std_core__list sig;
};
static kk_box_t kk_main_count_start_fun1244(kk_function_t _fself, kk_box_t _b_1061, kk_context_t* _ctx);
static kk_function_t kk_main_new_count_start_fun1244(kk_ref_t loc, kk_std_core__list sig, kk_context_t* _ctx) {
  struct kk_main_count_start_fun1244__t* _self = kk_function_alloc_as(struct kk_main_count_start_fun1244__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_count_start_fun1244, kk_context());
  _self->loc = loc;
  _self->sig = sig;
  return &_self->_base;
}

static kk_box_t kk_main_count_start_fun1244(kk_function_t _fself, kk_box_t _b_1061, kk_context_t* _ctx) {
  struct kk_main_count_start_fun1244__t* _self = kk_function_as(struct kk_main_count_start_fun1244__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<414,int> */
  kk_std_core__list sig = _self->sig; /* list<char> */
  kk_drop_match(_self, {kk_ref_dup(loc);kk_std_core__list_dup(sig);}, {}, _ctx)
  kk_unit_t _x1245 = kk_Unit;
  kk_integer_t _x1246 = kk_integer_unbox(_b_1061); /*int*/
  kk_main__mlift863_count_start(loc, sig, _x1246, _ctx);
  return kk_unit_box(_x1245);
}
static kk_unit_t kk_main_count_start_fun1240(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_count_start_fun1240__t* _self = kk_function_as(struct kk_main_count_start_fun1240__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<414,int> */
  kk_std_core__list sig = _self->sig; /* list<char> */
  kk_drop_match(_self, {kk_ref_dup(loc);kk_std_core__list_dup(sig);}, {}, _ctx)
  kk_integer_t x1_900;
  kk_box_t _x1241;
  kk_ref_t _x1242 = kk_ref_dup(loc); /*local-var<414,int>*/
  _x1241 = kk_ref_get(_x1242,kk_context()); /*1000*/
  x1_900 = kk_integer_unbox(_x1241); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x1_900, _ctx);
    kk_box_t _x1243 = kk_std_core_hnd_yield_extend(kk_main_new_count_start_fun1244(loc, sig, _ctx), _ctx); /*1001*/
    return kk_unit_unbox(_x1243);
  }
  {
    return kk_main__mlift863_count_start(loc, sig, x1_900, _ctx);
  }
}


// lift anonymous function
struct kk_main_count_start_fun1249__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_main_count_start_fun1249(kk_function_t _fself, kk_box_t _b_1069, kk_context_t* _ctx);
static kk_function_t kk_main_new_count_start_fun1249(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_main_count_start_fun1249__t* _self = kk_function_alloc_as(struct kk_main_count_start_fun1249__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_main_count_start_fun1249, kk_context());
  _self->loc = loc;
  return &_self->_base;
}

static kk_box_t kk_main_count_start_fun1249(kk_function_t _fself, kk_box_t _b_1069, kk_context_t* _ctx) {
  struct kk_main_count_start_fun1249__t* _self = kk_function_as(struct kk_main_count_start_fun1249__t*, _fself);
  kk_ref_t loc = _self->loc; /* local-var<414,int> */
  kk_drop_match(_self, {kk_ref_dup(loc);}, {}, _ctx)
  kk_box_drop(_b_1069, _ctx);
  return kk_ref_get(loc,kk_context());
}

kk_integer_t kk_main_count_start(kk_main__packet p, kk_context_t* _ctx) { /* (p : packet) -> <pure,console> int */ 
  kk_std_core__list sig;
  kk_box_t _x1230 = kk_std_core_hnd__open_none1(kk_main_new_count_start_fun1231(_ctx), kk_main__packet_box(p, _ctx), _ctx); /*1001*/
  sig = kk_std_core__list_unbox(_x1230, _ctx); /*list<char>*/
  kk_ref_t loc = kk_ref_alloc((kk_integer_box(kk_integer_from_small(0))),kk_context()); /*local-var<414,int>*/;
  kk_unit_t x_894 = kk_Unit;
  kk_function_t _x1233;
  kk_ref_dup(loc);
  kk_std_core__list_dup(sig);
  _x1233 = kk_main_new_count_start_fun1234(loc, sig, _ctx); /*() -> <div,local<414>,exn,console> bool*/
  kk_function_t _x1239;
  kk_ref_dup(loc);
  _x1239 = kk_main_new_count_start_fun1240(loc, sig, _ctx); /*() -> <div,local<414>,exn,console> ()*/
  kk_std_core_while(_x1233, _x1239, _ctx);
  kk_integer_t res;
  kk_box_t _x1247;
  if (kk_yielding(kk_context())) {
    kk_function_t _x1248;
    kk_ref_dup(loc);
    _x1248 = kk_main_new_count_start_fun1249(loc, _ctx); /*(1000) -> 1002 1000*/
    _x1247 = kk_std_core_hnd_yield_extend(_x1248, _ctx); /*1001*/
  }
  else {
    kk_ref_t _x1250 = kk_ref_dup(loc); /*local-var<414,int>*/
    _x1247 = kk_ref_get(_x1250,kk_context()); /*1001*/
  }
  res = kk_integer_unbox(_x1247); /*int*/
  kk_box_t _x1251 = kk_std_core_hnd_prompt_local_var(loc, kk_integer_box(res), _ctx); /*1001*/
  return kk_integer_unbox(_x1251);
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift866_main_fun1256__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift866_main_fun1256(kk_function_t _fself, kk_box_t _b_1080, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift866_main_fun1256(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift866_main_fun1256, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main__mlift866_main_fun1256(kk_function_t _fself, kk_box_t _b_1080, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x1257 = kk_Unit;
  kk_integer_t _x1258 = kk_integer_unbox(_b_1080); /*int*/
  kk_main__mlift865_main(_x1258, _ctx);
  return kk_unit_box(_x1257);
}

kk_unit_t kk_main__mlift866_main(kk_string_t contents, kk_context_t* _ctx) { /* (contents : string) -> <exn,fsys> () */ 
  kk_std_core__list s0_838 = kk_std_core_list_6(contents, _ctx); /*list<char>*/;
  kk_integer_t x_904;
  kk_main__packet _x1254 = kk_main__new_Packet(s0_838, _ctx); /*packet*/
  x_904 = kk_main_count_start(_x1254, _ctx); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_904, _ctx);
    kk_box_t _x1255 = kk_std_core_hnd_yield_extend(kk_main__new_mlift866_main_fun1256(_ctx), _ctx); /*1001*/
    kk_unit_unbox(_x1255); return kk_Unit;
  }
  {
    kk_string_t _x1259 = kk_std_core_show(x_904, _ctx); /*string*/
    kk_std_core_printsln(_x1259, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_main__mlift867_main_fun1261__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift867_main_fun1261(kk_function_t _fself, kk_box_t _b_1084, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift867_main_fun1261(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift867_main_fun1261, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main__mlift867_main_fun1261(kk_function_t _fself, kk_box_t _b_1084, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x1262;
  kk_string_t _x1263 = kk_string_unbox(_b_1084); /*string*/
  _x1262 = kk_std_os_path_path(_x1263, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x1262, _ctx);
}


// lift anonymous function
struct kk_main__mlift867_main_fun1265__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main__mlift867_main_fun1265(kk_function_t _fself, kk_box_t _b_1088, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift867_main_fun1265(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift867_main_fun1265, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main__mlift867_main_fun1265(kk_function_t _fself, kk_box_t _b_1088, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x1266 = kk_Unit;
  kk_string_t _x1267 = kk_string_unbox(_b_1088); /*string*/
  kk_main__mlift866_main(_x1267, _ctx);
  return kk_unit_box(_x1266);
}

kk_unit_t kk_main__mlift867_main(kk_string_t _y_816, kk_context_t* _ctx) { /* (string) -> exn () */ 
  kk_std_os_path__path f;
  kk_box_t _x1260 = kk_std_core_hnd__open_none1(kk_main__new_mlift867_main_fun1261(_ctx), kk_string_box(_y_816), _ctx); /*1001*/
  f = kk_std_os_path__path_unbox(_x1260, _ctx); /*std/os/path/path*/
  kk_string_t x_906 = kk_std_os_file_read_text_file(f, _ctx); /*string*/;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_906, _ctx);
    kk_box_t _x1264 = kk_std_core_hnd_yield_extend(kk_main__new_mlift867_main_fun1265(_ctx), _ctx); /*1001*/
    kk_unit_unbox(_x1264); return kk_Unit;
  }
  {
    kk_main__mlift866_main(x_906, _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_main_main_fun1269__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun1269(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun1269(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun1269, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_main_fun1269(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x1270 = kk_std_os_env_get_args(_ctx); /*list<string>*/
  return kk_std_core__list_box(_x1270, _ctx);
}


// lift anonymous function
struct kk_main_main_fun1272__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun1272(kk_function_t _fself, kk_box_t _b_1095, kk_box_t _b_1096, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun1272(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun1272, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_main_fun1272(kk_function_t _fself, kk_box_t _b_1095, kk_box_t _b_1096, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x1273;
  kk_std_core__list _x1274 = kk_std_core__list_unbox(_b_1095, _ctx); /*list<string>*/
  kk_integer_t _x1275 = kk_integer_unbox(_b_1096); /*int*/
  _x1273 = kk_list_dash_extra_get(_x1274, _x1275, _ctx); /*maybe<1000>*/
  return kk_std_core_types__maybe_box(_x1273, _ctx);
}


// lift anonymous function
struct kk_main_main_fun1278__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun1278(kk_function_t _fself, kk_box_t _b_1103, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun1278(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun1278, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_main_fun1278(kk_function_t _fself, kk_box_t _b_1103, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x1279 = kk_Unit;
  kk_string_t _x1280 = kk_string_unbox(_b_1103); /*string*/
  kk_main__mlift867_main(_x1280, _ctx);
  return kk_unit_box(_x1279);
}


// lift anonymous function
struct kk_main_main_fun1282__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun1282(kk_function_t _fself, kk_box_t _b_1106, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun1282(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun1282, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_main_fun1282(kk_function_t _fself, kk_box_t _b_1106, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x1283;
  kk_string_t _x1284 = kk_string_unbox(_b_1106); /*string*/
  _x1283 = kk_std_os_path_path(_x1284, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x1283, _ctx);
}


// lift anonymous function
struct kk_main_main_fun1286__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun1286(kk_function_t _fself, kk_box_t _b_1110, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun1286(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun1286, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_main_fun1286(kk_function_t _fself, kk_box_t _b_1110, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x1287 = kk_Unit;
  kk_string_t _x1288 = kk_string_unbox(_b_1110); /*string*/
  kk_main__mlift866_main(_x1288, _ctx);
  return kk_unit_box(_x1287);
}


// lift anonymous function
struct kk_main_main_fun1291__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun1291(kk_function_t _fself, kk_box_t _b_1112, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun1291(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun1291, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_main_main_fun1291(kk_function_t _fself, kk_box_t _b_1112, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x1292 = kk_Unit;
  kk_integer_t _x1293 = kk_integer_unbox(_b_1112); /*int*/
  kk_main__mlift865_main(_x1293, _ctx);
  return kk_unit_box(_x1292);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <pure,console,fsys,ndet> () */ 
  kk_std_core__list args;
  kk_box_t _x1268 = kk_std_core_hnd__open_none0(kk_main_new_main_fun1269(_ctx), _ctx); /*1000*/
  args = kk_std_core__list_unbox(_x1268, _ctx); /*list<string>*/
  kk_std_core_types__maybe _b_1098_1097;
  kk_box_t _x1271 = kk_std_core_hnd__open_none2(kk_main_new_main_fun1272(_ctx), kk_std_core__list_box(args, _ctx), kk_integer_box(kk_integer_from_small(0)), _ctx); /*1002*/
  _b_1098_1097 = kk_std_core_types__maybe_unbox(_x1271, _ctx); /*maybe<string>*/
  kk_string_t x_908;
  kk_box_t _x1276 = kk_std_core_unjust(_b_1098_1097, _ctx); /*1001*/
  x_908 = kk_string_unbox(_x1276); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_908, _ctx);
    kk_box_t _x1277 = kk_std_core_hnd_yield_extend(kk_main_new_main_fun1278(_ctx), _ctx); /*1001*/
    kk_unit_unbox(_x1277); return kk_Unit;
  }
  {
    kk_std_os_path__path f;
    kk_box_t _x1281 = kk_std_core_hnd__open_none1(kk_main_new_main_fun1282(_ctx), kk_string_box(x_908), _ctx); /*1001*/
    f = kk_std_os_path__path_unbox(_x1281, _ctx); /*std/os/path/path*/
    kk_string_t x0_911 = kk_std_os_file_read_text_file(f, _ctx); /*string*/;
    if (kk_yielding(kk_context())) {
      kk_string_drop(x0_911, _ctx);
      kk_box_t _x1285 = kk_std_core_hnd_yield_extend(kk_main_new_main_fun1286(_ctx), _ctx); /*1001*/
      kk_unit_unbox(_x1285); return kk_Unit;
    }
    {
      kk_std_core__list s0_838 = kk_std_core_list_6(x0_911, _ctx); /*list<char>*/;
      kk_integer_t x1_914;
      kk_main__packet _x1289 = kk_main__new_Packet(s0_838, _ctx); /*packet*/
      x1_914 = kk_main_count_start(_x1289, _ctx); /*int*/
      if (kk_yielding(kk_context())) {
        kk_integer_drop(x1_914, _ctx);
        kk_box_t _x1290 = kk_std_core_hnd_yield_extend(kk_main_new_main_fun1291(_ctx), _ctx); /*1001*/
        kk_unit_unbox(_x1290); return kk_Unit;
      }
      {
        kk_string_t _x1294 = kk_std_core_show(x1_914, _ctx); /*string*/
        kk_std_core_printsln(_x1294, _ctx); return kk_Unit;
      }
    }
  }
}


// lift anonymous function
struct kk_main__hmain_fun1295__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main__hmain_fun1295(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__new_hmain_fun1295(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__hmain_fun1295, _ctx)
  return kk_function_dup(_fself);
}

static kk_unit_t kk_main__hmain_fun1295(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_main_main(_ctx);
}

kk_unit_t kk_main__hmain(kk_context_t* _ctx) { /* () -> <console,div,fsys,ndet> () */ 
  kk_std_core__default_exn(kk_main__new_hmain_fun1295(_ctx), _ctx); return kk_Unit;
}

// main exit
static void _kk_main_exit(void) {
  kk_context_t* _ctx = kk_get_context();
  kk_main__done(_ctx);
}

// main entry
int main(int argc, char** argv) {
  kk_assert(sizeof(size_t)==8 && sizeof(void*)==8);
  kk_context_t* _ctx = kk_main_start(argc, argv);
  kk_main__init(_ctx);
  atexit(&_kk_main_exit);
  kk_main__hmain(_ctx);
  kk_main__done(_ctx);
  kk_main_end(_ctx);
  return 0;
}

// initialization
void kk_main__init(kk_context_t* _ctx){
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
  kk_std_os_env__init(_ctx);
  kk_list_dash_extra__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_main__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_list_dash_extra__done(_ctx);
  kk_std_os_env__done(_ctx);
  kk_std_os_file__done(_ctx);
  kk_std_os_dir__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_text_parse__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
