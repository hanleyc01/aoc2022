// Koka generated module: "day5", koka version: 2.4.0, platform: 64-bit
#include "day5.h"
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3836_parse_instrs_fun5574__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3836_parse_instrs_fun5574(kk_function_t _fself, kk_box_t _b_4154, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3836_parse_instrs_fun5574(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3836_parse_instrs_fun5574, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5__mlift3836_parse_instrs_fun5575__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_day5__mlift3836_parse_instrs_fun5575(kk_function_t _fself, kk_std_core_types__maybe _b_4148, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3836_parse_instrs_fun5575(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3836_parse_instrs_fun5575, _ctx)
  return kk_function_dup(_fself);
}

static kk_integer_t kk_day5__mlift3836_parse_instrs_fun5575(kk_function_t _fself, kk_std_core_types__maybe _b_4148, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x5576 = kk_std_core_unjust(_b_4148, _ctx); /*1001*/
  return kk_integer_unbox(_x5576);
}


// lift anonymous function
struct kk_day5__mlift3836_parse_instrs_fun5578__t {
  struct kk_function_s _base;
  kk_function_t _b_4158_4150;
};
static kk_box_t kk_day5__mlift3836_parse_instrs_fun5578(kk_function_t _fself, kk_box_t _b_4151, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3836_parse_instrs_fun5578(kk_function_t _b_4158_4150, kk_context_t* _ctx) {
  struct kk_day5__mlift3836_parse_instrs_fun5578__t* _self = kk_function_alloc_as(struct kk_day5__mlift3836_parse_instrs_fun5578__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3836_parse_instrs_fun5578, kk_context());
  _self->_b_4158_4150 = _b_4158_4150;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3836_parse_instrs_fun5578(kk_function_t _fself, kk_box_t _b_4151, kk_context_t* _ctx) {
  struct kk_day5__mlift3836_parse_instrs_fun5578__t* _self = kk_function_as(struct kk_day5__mlift3836_parse_instrs_fun5578__t*, _fself);
  kk_function_t _b_4158_4150 = _self->_b_4158_4150; /* (m : maybe<int>) -> exn int */
  kk_drop_match(_self, {kk_function_dup(_b_4158_4150);}, {}, _ctx)
  kk_integer_t _x5579;
  kk_std_core_types__maybe _x5580 = kk_std_core_types__maybe_unbox(_b_4151, _ctx); /*maybe<int>*/
  _x5579 = kk_function_call(kk_integer_t, (kk_function_t, kk_std_core_types__maybe, kk_context_t*), _b_4158_4150, (_b_4158_4150, _x5580, _ctx)); /*int*/
  return kk_integer_box(_x5579);
}
static kk_box_t kk_day5__mlift3836_parse_instrs_fun5574(kk_function_t _fself, kk_box_t _b_4154, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list x2_4159 = kk_std_core__list_unbox(_b_4154, _ctx); /*list<maybe<int>>*/;
  kk_std_core__list _b_4157_4149 = x2_4159; /*list<maybe<int>>*/;
  kk_function_t _b_4158_4150 = kk_day5__new_mlift3836_parse_instrs_fun5575(_ctx); /*(m : maybe<int>) -> exn int*/;
  kk_std_core__list _x5577 = kk_std_core_map_5(_b_4157_4149, kk_day5__new_mlift3836_parse_instrs_fun5578(_b_4158_4150, _ctx), _ctx); /*list<1002>*/
  return kk_std_core__list_box(_x5577, _ctx);
}

kk_std_core__list kk_day5__mlift3836_parse_instrs(kk_std_core__list _y_3660, kk_context_t* _ctx) { /* (list<list<maybe<int>>>) -> exn list<list<int>> */ 
  return kk_std_core_map_5(_y_3660, kk_day5__new_mlift3836_parse_instrs_fun5574(_ctx), _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3837_parse_instrs_fun5581__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3837_parse_instrs_fun5581(kk_function_t _fself, kk_box_t _b_4168, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3837_parse_instrs_fun5581(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3837_parse_instrs_fun5581, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5__mlift3837_parse_instrs_fun5584__t {
  struct kk_function_s _base;
};
static bool kk_day5__mlift3837_parse_instrs_fun5584(kk_function_t _fself, kk_box_t _b_4165, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3837_parse_instrs_fun5584(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3837_parse_instrs_fun5584, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5__mlift3837_parse_instrs_fun5586__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3837_parse_instrs_fun5586(kk_function_t _fself, kk_box_t _b_4162, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3837_parse_instrs_fun5586(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3837_parse_instrs_fun5586, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3837_parse_instrs_fun5586(kk_function_t _fself, kk_box_t _b_4162, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x5587;
  bool _match_5564 = kk_bool_unbox(_b_4162); /*bool*/;
  if (_match_5564) {
    _x5587 = false; /*bool*/
  }
  else {
    _x5587 = true; /*bool*/
  }
  return kk_bool_box(_x5587);
}
static bool kk_day5__mlift3837_parse_instrs_fun5584(kk_function_t _fself, kk_box_t _b_4165, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x5585;
  kk_box_t _x5588;
  bool _x5589;
  kk_std_core_types__maybe _match_5563 = kk_std_core_types__maybe_unbox(_b_4165, _ctx); /*maybe<int>*/;
  if (kk_std_core_types__is_Nothing(_match_5563)) {
    _x5589 = true; /*bool*/
  }
  else {
    kk_std_core_types__maybe_drop(_match_5563, _ctx);
    _x5589 = false; /*bool*/
  }
  _x5588 = kk_bool_box(_x5589); /*1000*/
  _x5585 = kk_std_core_hnd__open_none1(kk_day5__new_mlift3837_parse_instrs_fun5586(_ctx), _x5588, _ctx); /*1001*/
  return kk_bool_unbox(_x5585);
}
static kk_box_t kk_day5__mlift3837_parse_instrs_fun5581(kk_function_t _fself, kk_box_t _b_4168, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5582;
  kk_std_core__list _x5583 = kk_std_core__list_unbox(_b_4168, _ctx); /*list<maybe<int>>*/
  _x5582 = kk_std_core_filter(_x5583, kk_day5__new_mlift3837_parse_instrs_fun5584(_ctx), _ctx); /*list<1001>*/
  return kk_std_core__list_box(_x5582, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3837_parse_instrs_fun5591__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3837_parse_instrs_fun5591(kk_function_t _fself, kk_box_t _b_4178, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3837_parse_instrs_fun5591(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3837_parse_instrs_fun5591, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3837_parse_instrs_fun5591(kk_function_t _fself, kk_box_t _b_4178, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5592;
  kk_std_core__list _x5593 = kk_std_core__list_unbox(_b_4178, _ctx); /*list<list<maybe<int>>>*/
  _x5592 = kk_day5__mlift3836_parse_instrs(_x5593, _ctx); /*list<list<int>>*/
  return kk_std_core__list_box(_x5592, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3837_parse_instrs_fun5594__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3837_parse_instrs_fun5594(kk_function_t _fself, kk_box_t _b_4185, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3837_parse_instrs_fun5594(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3837_parse_instrs_fun5594, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5__mlift3837_parse_instrs_fun5595__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_day5__mlift3837_parse_instrs_fun5595(kk_function_t _fself, kk_std_core_types__maybe _b_4179, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3837_parse_instrs_fun5595(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3837_parse_instrs_fun5595, _ctx)
  return kk_function_dup(_fself);
}

static kk_integer_t kk_day5__mlift3837_parse_instrs_fun5595(kk_function_t _fself, kk_std_core_types__maybe _b_4179, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x5596 = kk_std_core_unjust(_b_4179, _ctx); /*1001*/
  return kk_integer_unbox(_x5596);
}


// lift anonymous function
struct kk_day5__mlift3837_parse_instrs_fun5598__t {
  struct kk_function_s _base;
  kk_function_t _b_4191_4181;
};
static kk_box_t kk_day5__mlift3837_parse_instrs_fun5598(kk_function_t _fself, kk_box_t _b_4182, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3837_parse_instrs_fun5598(kk_function_t _b_4191_4181, kk_context_t* _ctx) {
  struct kk_day5__mlift3837_parse_instrs_fun5598__t* _self = kk_function_alloc_as(struct kk_day5__mlift3837_parse_instrs_fun5598__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3837_parse_instrs_fun5598, kk_context());
  _self->_b_4191_4181 = _b_4191_4181;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3837_parse_instrs_fun5598(kk_function_t _fself, kk_box_t _b_4182, kk_context_t* _ctx) {
  struct kk_day5__mlift3837_parse_instrs_fun5598__t* _self = kk_function_as(struct kk_day5__mlift3837_parse_instrs_fun5598__t*, _fself);
  kk_function_t _b_4191_4181 = _self->_b_4191_4181; /* (m : maybe<int>) -> exn int */
  kk_drop_match(_self, {kk_function_dup(_b_4191_4181);}, {}, _ctx)
  kk_integer_t _x5599;
  kk_std_core_types__maybe _x5600 = kk_std_core_types__maybe_unbox(_b_4182, _ctx); /*maybe<int>*/
  _x5599 = kk_function_call(kk_integer_t, (kk_function_t, kk_std_core_types__maybe, kk_context_t*), _b_4191_4181, (_b_4191_4181, _x5600, _ctx)); /*int*/
  return kk_integer_box(_x5599);
}
static kk_box_t kk_day5__mlift3837_parse_instrs_fun5594(kk_function_t _fself, kk_box_t _b_4185, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list x2_4192 = kk_std_core__list_unbox(_b_4185, _ctx); /*list<maybe<int>>*/;
  kk_std_core__list _b_4190_4180 = x2_4192; /*list<maybe<int>>*/;
  kk_function_t _b_4191_4181 = kk_day5__new_mlift3837_parse_instrs_fun5595(_ctx); /*(m : maybe<int>) -> exn int*/;
  kk_std_core__list _x5597 = kk_std_core_map_5(_b_4190_4180, kk_day5__new_mlift3837_parse_instrs_fun5598(_b_4191_4181, _ctx), _ctx); /*list<1002>*/
  return kk_std_core__list_box(_x5597, _ctx);
}

kk_std_core__list kk_day5__mlift3837_parse_instrs(kk_std_core__list _y_3658, kk_context_t* _ctx) { /* (list<list<maybe<int>>>) -> exn list<list<int>> */ 
  kk_std_core__list x_3877 = kk_std_core_map_5(_y_3658, kk_day5__new_mlift3837_parse_instrs_fun5581(_ctx), _ctx); /*list<list<maybe<int>>>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3877, _ctx);
    kk_box_t _x5590 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3837_parse_instrs_fun5591(_ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x5590, _ctx);
  }
  {
    return kk_std_core_map_5(x_3877, kk_day5__new_mlift3837_parse_instrs_fun5594(_ctx), _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3838_parse_instrs_fun5602__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3838_parse_instrs_fun5602(kk_function_t _fself, kk_box_t _b_4204, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3838_parse_instrs_fun5602(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3838_parse_instrs_fun5602, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5__mlift3838_parse_instrs_fun5605__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3838_parse_instrs_fun5605(kk_function_t _fself, kk_box_t _b_4201, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3838_parse_instrs_fun5605(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3838_parse_instrs_fun5605, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5__mlift3838_parse_instrs_fun5606__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3838_parse_instrs_fun5606(kk_function_t _fself, kk_box_t _b_4197, kk_box_t _b_4198, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3838_parse_instrs_fun5606(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3838_parse_instrs_fun5606, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3838_parse_instrs_fun5606(kk_function_t _fself, kk_box_t _b_4197, kk_box_t _b_4198, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5607;
  kk_string_t _x5608;
  kk_string_t _x5609;
  kk_string_t _x5610 = kk_string_unbox(_b_4197); /*string*/
  _x5609 = kk_string_trim_left(_x5610,kk_context()); /*string*/
  _x5608 = kk_string_trim_right(_x5609,kk_context()); /*string*/
  bool _x5611;
  kk_std_core_types__optional _match_5561 = kk_std_core_types__optional_unbox(_b_4198, _ctx); /*optional<bool>*/;
  if (kk_std_core_types__is_Optional(_match_5561)) {
    kk_box_t _box_x4193 = _match_5561._cons.Optional.value;
    bool _hex_15544 = kk_bool_unbox(_box_x4193);
    _x5611 = _hex_15544; /*bool*/
  }
  else {
    _x5611 = false; /*bool*/
  }
  _x5607 = kk_std_core_xparse_int(_x5608, _x5611, _ctx); /*maybe<int>*/
  return kk_std_core_types__maybe_box(_x5607, _ctx);
}
static kk_box_t kk_day5__mlift3838_parse_instrs_fun5605(kk_function_t _fself, kk_box_t _b_4201, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_hnd__open_none2(kk_day5__new_mlift3838_parse_instrs_fun5606(_ctx), _b_4201, kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx);
}
static kk_box_t kk_day5__mlift3838_parse_instrs_fun5602(kk_function_t _fself, kk_box_t _b_4204, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5603;
  kk_std_core__list _x5604 = kk_std_core__list_unbox(_b_4204, _ctx); /*list<string>*/
  _x5603 = kk_std_core_map_5(_x5604, kk_day5__new_mlift3838_parse_instrs_fun5605(_ctx), _ctx); /*list<1002>*/
  return kk_std_core__list_box(_x5603, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3838_parse_instrs_fun5614__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3838_parse_instrs_fun5614(kk_function_t _fself, kk_box_t _b_4216, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3838_parse_instrs_fun5614(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3838_parse_instrs_fun5614, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3838_parse_instrs_fun5614(kk_function_t _fself, kk_box_t _b_4216, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5615;
  kk_std_core__list _x5616 = kk_std_core__list_unbox(_b_4216, _ctx); /*list<list<maybe<int>>>*/
  _x5615 = kk_day5__mlift3837_parse_instrs(_x5616, _ctx); /*list<list<int>>*/
  return kk_std_core__list_box(_x5615, _ctx);
}

kk_std_core__list kk_day5__mlift3838_parse_instrs(kk_std_core__list _y_3656, kk_context_t* _ctx) { /* (list<list<string>>) -> exn list<list<int>> */ 
  kk_std_core__list instrs;
  kk_std_core__list _x5601 = kk_std_core_tail_1(_y_3656, _ctx); /*list<1001>*/
  instrs = kk_std_core_init(_x5601, _ctx); /*list<list<string>>*/
  kk_std_core__list x_3880 = kk_std_core_map_5(instrs, kk_day5__new_mlift3838_parse_instrs_fun5602(_ctx), _ctx); /*list<list<maybe<int>>>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3880, _ctx);
    kk_box_t _x5613 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3838_parse_instrs_fun5614(_ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x5613, _ctx);
  }
  {
    return kk_day5__mlift3837_parse_instrs(x_3880, _ctx);
  }
}


// lift anonymous function
struct kk_day5_parse_instrs_fun5617__t {
  struct kk_function_s _base;
};
static bool kk_day5_parse_instrs_fun5617(kk_function_t _fself, kk_box_t _b_4224, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_instrs_fun5617(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_instrs_fun5617, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5_parse_instrs_fun5619__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_parse_instrs_fun5619(kk_function_t _fself, kk_box_t _b_4221, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_instrs_fun5619(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_instrs_fun5619, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_parse_instrs_fun5619(kk_function_t _fself, kk_box_t _b_4221, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x5620;
  bool _match_5557 = kk_bool_unbox(_b_4221); /*bool*/;
  if (_match_5557) {
    _x5620 = false; /*bool*/
  }
  else {
    _x5620 = true; /*bool*/
  }
  return kk_bool_box(_x5620);
}
static bool kk_day5_parse_instrs_fun5617(kk_function_t _fself, kk_box_t _b_4224, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x1_3780;
  kk_std_core__list _brw_5558 = kk_std_core__list_unbox(_b_4224, _ctx); /*list<string>*/;
  bool _brw_5559 = kk_std_core_is_nil(_brw_5558, _ctx); /*bool*/;
  kk_std_core__list_drop(_brw_5558, _ctx);
  _x1_3780 = _brw_5559; /*bool*/
  kk_box_t _x5618 = kk_std_core_hnd__open_none1(kk_day5_new_parse_instrs_fun5619(_ctx), kk_bool_box(_x1_3780), _ctx); /*1001*/
  return kk_bool_unbox(_x5618);
}


// lift anonymous function
struct kk_day5_parse_instrs_fun5622__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_parse_instrs_fun5622(kk_function_t _fself, kk_box_t _b_4232, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_instrs_fun5622(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_instrs_fun5622, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_parse_instrs_fun5622(kk_function_t _fself, kk_box_t _b_4232, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5623;
  kk_std_core__list _x5624 = kk_std_core__list_unbox(_b_4232, _ctx); /*list<list<string>>*/
  _x5623 = kk_day5__mlift3838_parse_instrs(_x5624, _ctx); /*list<list<int>>*/
  return kk_std_core__list_box(_x5623, _ctx);
}


// lift anonymous function
struct kk_day5_parse_instrs_fun5626__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_parse_instrs_fun5626(kk_function_t _fself, kk_box_t _b_4244, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_instrs_fun5626(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_instrs_fun5626, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5_parse_instrs_fun5629__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_parse_instrs_fun5629(kk_function_t _fself, kk_box_t _b_4241, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_instrs_fun5629(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_instrs_fun5629, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5_parse_instrs_fun5630__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_parse_instrs_fun5630(kk_function_t _fself, kk_box_t _b_4237, kk_box_t _b_4238, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_instrs_fun5630(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_instrs_fun5630, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_parse_instrs_fun5630(kk_function_t _fself, kk_box_t _b_4237, kk_box_t _b_4238, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5631;
  kk_string_t _x5632;
  kk_string_t _x5633;
  kk_string_t _x5634 = kk_string_unbox(_b_4237); /*string*/
  _x5633 = kk_string_trim_left(_x5634,kk_context()); /*string*/
  _x5632 = kk_string_trim_right(_x5633,kk_context()); /*string*/
  bool _x5635;
  kk_std_core_types__optional _match_5556 = kk_std_core_types__optional_unbox(_b_4238, _ctx); /*optional<bool>*/;
  if (kk_std_core_types__is_Optional(_match_5556)) {
    kk_box_t _box_x4233 = _match_5556._cons.Optional.value;
    bool _hex_15544 = kk_bool_unbox(_box_x4233);
    _x5635 = _hex_15544; /*bool*/
  }
  else {
    _x5635 = false; /*bool*/
  }
  _x5631 = kk_std_core_xparse_int(_x5632, _x5635, _ctx); /*maybe<int>*/
  return kk_std_core_types__maybe_box(_x5631, _ctx);
}
static kk_box_t kk_day5_parse_instrs_fun5629(kk_function_t _fself, kk_box_t _b_4241, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_hnd__open_none2(kk_day5_new_parse_instrs_fun5630(_ctx), _b_4241, kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx);
}
static kk_box_t kk_day5_parse_instrs_fun5626(kk_function_t _fself, kk_box_t _b_4244, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5627;
  kk_std_core__list _x5628 = kk_std_core__list_unbox(_b_4244, _ctx); /*list<string>*/
  _x5627 = kk_std_core_map_5(_x5628, kk_day5_new_parse_instrs_fun5629(_ctx), _ctx); /*list<1002>*/
  return kk_std_core__list_box(_x5627, _ctx);
}


// lift anonymous function
struct kk_day5_parse_instrs_fun5638__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_parse_instrs_fun5638(kk_function_t _fself, kk_box_t _b_4256, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_instrs_fun5638(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_instrs_fun5638, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_parse_instrs_fun5638(kk_function_t _fself, kk_box_t _b_4256, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5639;
  kk_std_core__list _x5640 = kk_std_core__list_unbox(_b_4256, _ctx); /*list<list<maybe<int>>>*/
  _x5639 = kk_day5__mlift3837_parse_instrs(_x5640, _ctx); /*list<list<int>>*/
  return kk_std_core__list_box(_x5639, _ctx);
}


// lift anonymous function
struct kk_day5_parse_instrs_fun5641__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_parse_instrs_fun5641(kk_function_t _fself, kk_box_t _b_4265, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_instrs_fun5641(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_instrs_fun5641, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5_parse_instrs_fun5644__t {
  struct kk_function_s _base;
};
static bool kk_day5_parse_instrs_fun5644(kk_function_t _fself, kk_box_t _b_4262, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_instrs_fun5644(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_instrs_fun5644, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5_parse_instrs_fun5646__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_parse_instrs_fun5646(kk_function_t _fself, kk_box_t _b_4259, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_instrs_fun5646(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_instrs_fun5646, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_parse_instrs_fun5646(kk_function_t _fself, kk_box_t _b_4259, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x5647;
  bool _match_5555 = kk_bool_unbox(_b_4259); /*bool*/;
  if (_match_5555) {
    _x5647 = false; /*bool*/
  }
  else {
    _x5647 = true; /*bool*/
  }
  return kk_bool_box(_x5647);
}
static bool kk_day5_parse_instrs_fun5644(kk_function_t _fself, kk_box_t _b_4262, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x5645;
  kk_box_t _x5648;
  bool _x5649;
  kk_std_core_types__maybe _match_5554 = kk_std_core_types__maybe_unbox(_b_4262, _ctx); /*maybe<int>*/;
  if (kk_std_core_types__is_Nothing(_match_5554)) {
    _x5649 = true; /*bool*/
  }
  else {
    kk_std_core_types__maybe_drop(_match_5554, _ctx);
    _x5649 = false; /*bool*/
  }
  _x5648 = kk_bool_box(_x5649); /*1000*/
  _x5645 = kk_std_core_hnd__open_none1(kk_day5_new_parse_instrs_fun5646(_ctx), _x5648, _ctx); /*1001*/
  return kk_bool_unbox(_x5645);
}
static kk_box_t kk_day5_parse_instrs_fun5641(kk_function_t _fself, kk_box_t _b_4265, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5642;
  kk_std_core__list _x5643 = kk_std_core__list_unbox(_b_4265, _ctx); /*list<maybe<int>>*/
  _x5642 = kk_std_core_filter(_x5643, kk_day5_new_parse_instrs_fun5644(_ctx), _ctx); /*list<1001>*/
  return kk_std_core__list_box(_x5642, _ctx);
}


// lift anonymous function
struct kk_day5_parse_instrs_fun5651__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_parse_instrs_fun5651(kk_function_t _fself, kk_box_t _b_4275, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_instrs_fun5651(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_instrs_fun5651, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_parse_instrs_fun5651(kk_function_t _fself, kk_box_t _b_4275, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5652;
  kk_std_core__list _x5653 = kk_std_core__list_unbox(_b_4275, _ctx); /*list<list<maybe<int>>>*/
  _x5652 = kk_day5__mlift3836_parse_instrs(_x5653, _ctx); /*list<list<int>>*/
  return kk_std_core__list_box(_x5652, _ctx);
}


// lift anonymous function
struct kk_day5_parse_instrs_fun5654__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_parse_instrs_fun5654(kk_function_t _fself, kk_box_t _b_4282, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_instrs_fun5654(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_instrs_fun5654, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5_parse_instrs_fun5655__t {
  struct kk_function_s _base;
};
static kk_integer_t kk_day5_parse_instrs_fun5655(kk_function_t _fself, kk_std_core_types__maybe _b_4276, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_instrs_fun5655(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_instrs_fun5655, _ctx)
  return kk_function_dup(_fself);
}

static kk_integer_t kk_day5_parse_instrs_fun5655(kk_function_t _fself, kk_std_core_types__maybe _b_4276, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x5656 = kk_std_core_unjust(_b_4276, _ctx); /*1001*/
  return kk_integer_unbox(_x5656);
}


// lift anonymous function
struct kk_day5_parse_instrs_fun5658__t {
  struct kk_function_s _base;
  kk_function_t _b_4291_4278;
};
static kk_box_t kk_day5_parse_instrs_fun5658(kk_function_t _fself, kk_box_t _b_4279, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_instrs_fun5658(kk_function_t _b_4291_4278, kk_context_t* _ctx) {
  struct kk_day5_parse_instrs_fun5658__t* _self = kk_function_alloc_as(struct kk_day5_parse_instrs_fun5658__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_parse_instrs_fun5658, kk_context());
  _self->_b_4291_4278 = _b_4291_4278;
  return &_self->_base;
}

static kk_box_t kk_day5_parse_instrs_fun5658(kk_function_t _fself, kk_box_t _b_4279, kk_context_t* _ctx) {
  struct kk_day5_parse_instrs_fun5658__t* _self = kk_function_as(struct kk_day5_parse_instrs_fun5658__t*, _fself);
  kk_function_t _b_4291_4278 = _self->_b_4291_4278; /* (m : maybe<int>) -> exn int */
  kk_drop_match(_self, {kk_function_dup(_b_4291_4278);}, {}, _ctx)
  kk_integer_t _x5659;
  kk_std_core_types__maybe _x5660 = kk_std_core_types__maybe_unbox(_b_4279, _ctx); /*maybe<int>*/
  _x5659 = kk_function_call(kk_integer_t, (kk_function_t, kk_std_core_types__maybe, kk_context_t*), _b_4291_4278, (_b_4291_4278, _x5660, _ctx)); /*int*/
  return kk_integer_box(_x5659);
}
static kk_box_t kk_day5_parse_instrs_fun5654(kk_function_t _fself, kk_box_t _b_4282, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list x20_4292 = kk_std_core__list_unbox(_b_4282, _ctx); /*list<maybe<int>>*/;
  kk_std_core__list _b_4290_4277 = x20_4292; /*list<maybe<int>>*/;
  kk_function_t _b_4291_4278 = kk_day5_new_parse_instrs_fun5655(_ctx); /*(m : maybe<int>) -> exn int*/;
  kk_std_core__list _x5657 = kk_std_core_map_5(_b_4290_4277, kk_day5_new_parse_instrs_fun5658(_b_4291_4278, _ctx), _ctx); /*list<1002>*/
  return kk_std_core__list_box(_x5657, _ctx);
}

kk_std_core__list kk_day5_parse_instrs(kk_std_core__list lexbuf, kk_context_t* _ctx) { /* (lexbuf : list<list<string>>) -> exn list<list<int>> */ 
  kk_std_core__list x_3882 = kk_std_core_drop_while(lexbuf, kk_day5_new_parse_instrs_fun5617(_ctx), _ctx); /*list<list<string>>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3882, _ctx);
    kk_box_t _x5621 = kk_std_core_hnd_yield_extend(kk_day5_new_parse_instrs_fun5622(_ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x5621, _ctx);
  }
  {
    kk_std_core__list instrs;
    kk_std_core__list _x5625 = kk_std_core_tail_1(x_3882, _ctx); /*list<1001>*/
    instrs = kk_std_core_init(_x5625, _ctx); /*list<list<string>>*/
    kk_std_core__list x1_3885 = kk_std_core_map_5(instrs, kk_day5_new_parse_instrs_fun5626(_ctx), _ctx); /*list<list<maybe<int>>>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x1_3885, _ctx);
      kk_box_t _x5637 = kk_std_core_hnd_yield_extend(kk_day5_new_parse_instrs_fun5638(_ctx), _ctx); /*1001*/
      return kk_std_core__list_unbox(_x5637, _ctx);
    }
    {
      kk_std_core__list x2_3888 = kk_std_core_map_5(x1_3885, kk_day5_new_parse_instrs_fun5641(_ctx), _ctx); /*list<list<maybe<int>>>*/;
      if (kk_yielding(kk_context())) {
        kk_std_core__list_drop(x2_3888, _ctx);
        kk_box_t _x5650 = kk_std_core_hnd_yield_extend(kk_day5_new_parse_instrs_fun5651(_ctx), _ctx); /*1001*/
        return kk_std_core__list_unbox(_x5650, _ctx);
      }
      {
        return kk_std_core_map_5(x2_3888, kk_day5_new_parse_instrs_fun5654(_ctx), _ctx);
      }
    }
  }
}
 
// monadic lift

kk_std_core__list kk_day5__mlift3839_op(kk_std_core_types__ctail _acc, kk_std_core__list acc, kk_function_t p, kk_box_t y, kk_std_core__list yy, bool _y_3663, kk_context_t* _ctx) { /* forall<a,e> (ctail<list<list<a>>>, acc : list<a>, p : (a) -> e bool, y : a, yy : list<a>, bool) -> e list<list<a>> */ 
  if (_y_3663) {
    kk_box_drop(y, _ctx);
    kk_std_core__list _ctail_3649 = kk_std_core__list_hole(); /*list<list<1592>>*/;
    kk_std_core__list _ctail_3650 = kk_std_core__new_Cons(kk_reuse_null, kk_std_core__list_box(acc, _ctx), _ctail_3649, _ctx); /*list<list<1592>>*/;
    kk_box_t* _b_4305_4302 = (kk_box_t*)((&kk_std_core__as_Cons(_ctail_3650)->tail)); /*cfield<list<list<1592>>>*/;
    kk_std_core_types__ctail _x5661 = kk_ctail_link(_acc,(kk_std_core__list_box(_ctail_3650, _ctx)),_b_4305_4302); /*ctail<0>*/
    return kk_day5__ctail_lift3647_split(yy, kk_std_core__new_Nil(_ctx), p, _x5661, _ctx);
  }
  {
    kk_std_core__list _x5662;
    kk_std_core__list _x5663 = kk_std_core__new_Cons(kk_reuse_null, y, kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
    _x5662 = kk_std_core__lp__plus__plus__rp_(acc, _x5663, _ctx); /*list<1001>*/
    return kk_day5__ctail_lift3647_split(yy, _x5662, p, _acc, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3840_op_fun5664__t {
  struct kk_function_s _base;
  kk_function_t _accm;
  kk_std_core__list acc0;
};
static kk_std_core__list kk_day5__mlift3840_op_fun5664(kk_function_t _fself, kk_std_core__list _ctail_3652, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3840_op_fun5664(kk_function_t _accm, kk_std_core__list acc0, kk_context_t* _ctx) {
  struct kk_day5__mlift3840_op_fun5664__t* _self = kk_function_alloc_as(struct kk_day5__mlift3840_op_fun5664__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3840_op_fun5664, kk_context());
  _self->_accm = _accm;
  _self->acc0 = acc0;
  return &_self->_base;
}

static kk_std_core__list kk_day5__mlift3840_op_fun5664(kk_function_t _fself, kk_std_core__list _ctail_3652, kk_context_t* _ctx) {
  struct kk_day5__mlift3840_op_fun5664__t* _self = kk_function_as(struct kk_day5__mlift3840_op_fun5664__t*, _fself);
  kk_function_t _accm = _self->_accm; /* (list<list<1592>>) -> list<list<1592>> */
  kk_std_core__list acc0 = _self->acc0; /* list<1592> */
  kk_drop_match(_self, {kk_function_dup(_accm);kk_std_core__list_dup(acc0);}, {}, _ctx)
  kk_std_core__list _x5665 = kk_std_core__new_Cons(kk_reuse_null, kk_std_core__list_box(acc0, _ctx), _ctail_3652, _ctx); /*list<1009>*/
  return kk_function_call(kk_std_core__list, (kk_function_t, kk_std_core__list, kk_context_t*), _accm, (_accm, _x5665, _ctx));
}

kk_std_core__list kk_day5__mlift3840_op(kk_function_t _accm, kk_std_core__list acc0, kk_function_t p0, kk_box_t y0, kk_std_core__list yy0, bool _y_3668, kk_context_t* _ctx) { /* forall<a,e> ((list<list<a>>) -> list<list<a>>, acc : list<a>, p : (a) -> e bool, y : a, yy : list<a>, bool) -> e list<list<a>> */ 
  if (_y_3668) {
    kk_box_drop(y0, _ctx);
    return kk_day5__ctailm_lift3647_split(yy0, kk_std_core__new_Nil(_ctx), p0, kk_day5__new_mlift3840_op_fun5664(_accm, acc0, _ctx), _ctx);
  }
  {
    kk_std_core__list _x5666;
    kk_std_core__list _x5667 = kk_std_core__new_Cons(kk_reuse_null, y0, kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
    _x5666 = kk_std_core__lp__plus__plus__rp_(acc0, _x5667, _ctx); /*list<1001>*/
    return kk_day5__ctailm_lift3647_split(yy0, _x5666, p0, _accm, _ctx);
  }
}
 
// lifted local: split, accum


// lift anonymous function
struct kk_day5__ctail_lift3647_split_fun5675__t {
  struct kk_function_s _base;
  kk_std_core__list acc1;
  kk_function_t p1;
  kk_box_t y1;
  kk_std_core__list yy1;
  kk_std_core_types__ctail _acc0;
};
static kk_box_t kk_day5__ctail_lift3647_split_fun5675(kk_function_t _fself, kk_box_t _b_4318, kk_context_t* _ctx);
static kk_function_t kk_day5__new_ctail_lift3647_split_fun5675(kk_std_core__list acc1, kk_function_t p1, kk_box_t y1, kk_std_core__list yy1, kk_std_core_types__ctail _acc0, kk_context_t* _ctx) {
  struct kk_day5__ctail_lift3647_split_fun5675__t* _self = kk_function_alloc_as(struct kk_day5__ctail_lift3647_split_fun5675__t, 6, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__ctail_lift3647_split_fun5675, kk_context());
  _self->acc1 = acc1;
  _self->p1 = p1;
  _self->y1 = y1;
  _self->yy1 = yy1;
  _self->_acc0 = _acc0;
  return &_self->_base;
}

static kk_box_t kk_day5__ctail_lift3647_split_fun5675(kk_function_t _fself, kk_box_t _b_4318, kk_context_t* _ctx) {
  struct kk_day5__ctail_lift3647_split_fun5675__t* _self = kk_function_as(struct kk_day5__ctail_lift3647_split_fun5675__t*, _fself);
  kk_std_core__list acc1 = _self->acc1; /* list<1592> */
  kk_function_t p1 = _self->p1; /* (1592) -> 1593 bool */
  kk_box_t y1 = _self->y1; /* 1592 */
  kk_std_core__list yy1 = _self->yy1; /* list<1592> */
  kk_std_core_types__ctail _acc0 = _self->_acc0; /* ctail<list<list<1592>>> */
  kk_drop_match(_self, {kk_std_core__list_dup(acc1);kk_function_dup(p1);kk_box_dup(y1);kk_std_core__list_dup(yy1);kk_std_core_types__ctail_dup(_acc0);}, {}, _ctx)
  bool _y_4340_36630 = kk_bool_unbox(_b_4318); /*bool*/;
  kk_std_core__list _x5676 = kk_day5__mlift3839_op(_acc0, acc1, p1, y1, yy1, _y_4340_36630, _ctx); /*list<list<1592>>*/
  return kk_std_core__list_box(_x5676, _ctx);
}

kk_std_core__list kk_day5__ctail_lift3647_split(kk_std_core__list ll_sq_, kk_std_core__list acc1, kk_function_t p1, kk_std_core_types__ctail _acc0, kk_context_t* _ctx) { /* forall<a,e> (ll' : list<a>, acc : list<a>, p : (a) -> e bool, ctail<list<list<a>>>) -> e list<list<a>> */ 
  kk__tailcall: ;
  if (kk_std_core__is_Nil(ll_sq_)) {
    kk_function_drop(p1, _ctx);
    kk_box_t _x5668;
    kk_box_t _x5669;
    kk_std_core__list _x5670 = kk_std_core__new_Cons(kk_reuse_null, kk_std_core__list_box(acc1, _ctx), kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
    _x5669 = kk_std_core__list_box(_x5670, _ctx); /*-1*/
    _x5668 = kk_ctail_resolve(_acc0,_x5669); /*-1*/
    return kk_std_core__list_unbox(_x5668, _ctx);
  }
  {
    struct kk_std_core_Cons* _con5671 = kk_std_core__as_Cons(ll_sq_);
    kk_box_t y1 = _con5671->head;
    kk_std_core__list yy1 = _con5671->tail;
    kk_reuse_t _ru_5565 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_std_core__list_is_unique(ll_sq_))) {
      _ru_5565 = (kk_std_core__list_reuse(ll_sq_));
    }
    else {
      kk_box_dup(y1);
      kk_std_core__list_dup(yy1);
      kk_std_core__list_decref(ll_sq_, _ctx);
    }
    bool x_3892;
    kk_function_t _x5673 = kk_function_dup(p1); /*(1592) -> 1593 bool*/
    kk_box_t _x5672 = kk_box_dup(y1); /*1592*/
    x_3892 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), _x5673, (_x5673, _x5672, _ctx)); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_5565,kk_context());
      kk_box_t _x5674 = kk_std_core_hnd_yield_extend(kk_day5__new_ctail_lift3647_split_fun5675(acc1, p1, y1, yy1, _acc0, _ctx), _ctx); /*1001*/
      return kk_std_core__list_unbox(_x5674, _ctx);
    }
    if (x_3892) {
      kk_box_drop(y1, _ctx);
      kk_std_core__list _ctail_36490 = kk_std_core__list_hole(); /*list<list<1592>>*/;
      kk_std_core__list _ctail_36500 = kk_std_core__new_Cons(_ru_5565, kk_std_core__list_box(acc1, _ctx), _ctail_36490, _ctx); /*list<list<1592>>*/;
      kk_box_t* _b_4336_4328 = (kk_box_t*)((&kk_std_core__as_Cons(_ctail_36500)->tail)); /*cfield<list<list<1592>>>*/;
      { // tailcall
        kk_std_core__list _x5677 = kk_std_core__new_Nil(_ctx); /*forall<a> list<a>*/
        kk_std_core_types__ctail _x5678 = kk_ctail_link(_acc0,(kk_std_core__list_box(_ctail_36500, _ctx)),_b_4336_4328); /*ctail<0>*/
        ll_sq_ = yy1;
        acc1 = _x5677;
        _acc0 = _x5678;
        goto kk__tailcall;
      }
    }
    { // tailcall
      kk_std_core__list _x5679;
      kk_std_core__list _x5680 = kk_std_core__new_Cons(_ru_5565, y1, kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
      _x5679 = kk_std_core__lp__plus__plus__rp_(acc1, _x5680, _ctx); /*list<1001>*/
      ll_sq_ = yy1;
      acc1 = _x5679;
      goto kk__tailcall;
    }
  }
}
 
// lifted local: split, accum


// lift anonymous function
struct kk_day5__ctailm_lift3647_split_fun5686__t {
  struct kk_function_s _base;
  kk_function_t _accm0;
  kk_std_core__list acc2;
  kk_function_t p2;
  kk_box_t y2;
  kk_std_core__list yy2;
};
static kk_box_t kk_day5__ctailm_lift3647_split_fun5686(kk_function_t _fself, kk_box_t _b_4344, kk_context_t* _ctx);
static kk_function_t kk_day5__new_ctailm_lift3647_split_fun5686(kk_function_t _accm0, kk_std_core__list acc2, kk_function_t p2, kk_box_t y2, kk_std_core__list yy2, kk_context_t* _ctx) {
  struct kk_day5__ctailm_lift3647_split_fun5686__t* _self = kk_function_alloc_as(struct kk_day5__ctailm_lift3647_split_fun5686__t, 6, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__ctailm_lift3647_split_fun5686, kk_context());
  _self->_accm0 = _accm0;
  _self->acc2 = acc2;
  _self->p2 = p2;
  _self->y2 = y2;
  _self->yy2 = yy2;
  return &_self->_base;
}

static kk_box_t kk_day5__ctailm_lift3647_split_fun5686(kk_function_t _fself, kk_box_t _b_4344, kk_context_t* _ctx) {
  struct kk_day5__ctailm_lift3647_split_fun5686__t* _self = kk_function_as(struct kk_day5__ctailm_lift3647_split_fun5686__t*, _fself);
  kk_function_t _accm0 = _self->_accm0; /* (list<list<1592>>) -> list<list<1592>> */
  kk_std_core__list acc2 = _self->acc2; /* list<1592> */
  kk_function_t p2 = _self->p2; /* (1592) -> 1593 bool */
  kk_box_t y2 = _self->y2; /* 1592 */
  kk_std_core__list yy2 = _self->yy2; /* list<1592> */
  kk_drop_match(_self, {kk_function_dup(_accm0);kk_std_core__list_dup(acc2);kk_function_dup(p2);kk_box_dup(y2);kk_std_core__list_dup(yy2);}, {}, _ctx)
  bool _y_4352_36680 = kk_bool_unbox(_b_4344); /*bool*/;
  kk_std_core__list _x5687 = kk_day5__mlift3840_op(_accm0, acc2, p2, y2, yy2, _y_4352_36680, _ctx); /*list<list<1592>>*/
  return kk_std_core__list_box(_x5687, _ctx);
}


// lift anonymous function
struct kk_day5__ctailm_lift3647_split_fun5690__t {
  struct kk_function_s _base;
  kk_function_t _accm0;
  kk_std_core__list acc2;
};
static kk_std_core__list kk_day5__ctailm_lift3647_split_fun5690(kk_function_t _fself, kk_std_core__list _ctail_36520, kk_context_t* _ctx);
static kk_function_t kk_day5__new_ctailm_lift3647_split_fun5690(kk_function_t _accm0, kk_std_core__list acc2, kk_context_t* _ctx) {
  struct kk_day5__ctailm_lift3647_split_fun5690__t* _self = kk_function_alloc_as(struct kk_day5__ctailm_lift3647_split_fun5690__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__ctailm_lift3647_split_fun5690, kk_context());
  _self->_accm0 = _accm0;
  _self->acc2 = acc2;
  return &_self->_base;
}

static kk_std_core__list kk_day5__ctailm_lift3647_split_fun5690(kk_function_t _fself, kk_std_core__list _ctail_36520, kk_context_t* _ctx) {
  struct kk_day5__ctailm_lift3647_split_fun5690__t* _self = kk_function_as(struct kk_day5__ctailm_lift3647_split_fun5690__t*, _fself);
  kk_function_t _accm0 = _self->_accm0; /* (list<list<1592>>) -> list<list<1592>> */
  kk_std_core__list acc2 = _self->acc2; /* list<1592> */
  kk_drop_match(_self, {kk_function_dup(_accm0);kk_std_core__list_dup(acc2);}, {}, _ctx)
  kk_std_core__list _x5691 = kk_std_core__new_Cons(kk_reuse_null, kk_std_core__list_box(acc2, _ctx), _ctail_36520, _ctx); /*list<1009>*/
  return kk_function_call(kk_std_core__list, (kk_function_t, kk_std_core__list, kk_context_t*), _accm0, (_accm0, _x5691, _ctx));
}

kk_std_core__list kk_day5__ctailm_lift3647_split(kk_std_core__list ll0_sq_, kk_std_core__list acc2, kk_function_t p2, kk_function_t _accm0, kk_context_t* _ctx) { /* forall<a,e> (ll' : list<a>, acc : list<a>, p : (a) -> e bool, (list<list<a>>) -> list<list<a>>) -> e list<list<a>> */ 
  kk__tailcall: ;
  if (kk_std_core__is_Nil(ll0_sq_)) {
    kk_function_drop(p2, _ctx);
    kk_std_core__list _x5681 = kk_std_core__new_Cons(kk_reuse_null, kk_std_core__list_box(acc2, _ctx), kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
    return kk_function_call(kk_std_core__list, (kk_function_t, kk_std_core__list, kk_context_t*), _accm0, (_accm0, _x5681, _ctx));
  }
  {
    struct kk_std_core_Cons* _con5682 = kk_std_core__as_Cons(ll0_sq_);
    kk_box_t y2 = _con5682->head;
    kk_std_core__list yy2 = _con5682->tail;
    kk_reuse_t _ru_5566 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_std_core__list_is_unique(ll0_sq_))) {
      _ru_5566 = (kk_std_core__list_reuse(ll0_sq_));
    }
    else {
      kk_box_dup(y2);
      kk_std_core__list_dup(yy2);
      kk_std_core__list_decref(ll0_sq_, _ctx);
    }
    bool x0_3895;
    kk_function_t _x5684 = kk_function_dup(p2); /*(1592) -> 1593 bool*/
    kk_box_t _x5683 = kk_box_dup(y2); /*1592*/
    x0_3895 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_context_t*), _x5684, (_x5684, _x5683, _ctx)); /*bool*/
    if (kk_yielding(kk_context())) {
      kk_reuse_drop(_ru_5566,kk_context());
      kk_box_t _x5685 = kk_std_core_hnd_yield_extend(kk_day5__new_ctailm_lift3647_split_fun5686(_accm0, acc2, p2, y2, yy2, _ctx), _ctx); /*1001*/
      return kk_std_core__list_unbox(_x5685, _ctx);
    }
    if (x0_3895) {
      kk_reuse_drop(_ru_5566,kk_context());
      kk_box_drop(y2, _ctx);
      { // tailcall
        kk_std_core__list _x5688 = kk_std_core__new_Nil(_ctx); /*forall<a> list<a>*/
        kk_function_t _x5689 = kk_day5__new_ctailm_lift3647_split_fun5690(_accm0, acc2, _ctx); /*(list<list<1592>>) -> list<list<1592>>*/
        ll0_sq_ = yy2;
        acc2 = _x5688;
        _accm0 = _x5689;
        goto kk__tailcall;
      }
    }
    { // tailcall
      kk_std_core__list _x5692;
      kk_std_core__list _x5693 = kk_std_core__new_Cons(_ru_5566, y2, kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
      _x5692 = kk_std_core__lp__plus__plus__rp_(acc2, _x5693, _ctx); /*list<1001>*/
      ll0_sq_ = yy2;
      acc2 = _x5692;
      goto kk__tailcall;
    }
  }
}
 
// lifted local: split, accum


// lift anonymous function
struct kk_day5__lift3647_split_fun5695__t {
  struct kk_function_s _base;
};
static kk_std_core__list kk_day5__lift3647_split_fun5695(kk_function_t _fself, kk_std_core__list _ctail_3651, kk_context_t* _ctx);
static kk_function_t kk_day5__new_lift3647_split_fun5695(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__lift3647_split_fun5695, _ctx)
  return kk_function_dup(_fself);
}

static kk_std_core__list kk_day5__lift3647_split_fun5695(kk_function_t _fself, kk_std_core__list _ctail_3651, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _ctail_3651;
}

kk_std_core__list kk_day5__lift3647_split(kk_std_core__list ll1_sq_, kk_std_core__list acc3, kk_function_t p3, kk_context_t* _ctx) { /* forall<a,e> (ll' : list<a>, acc : list<a>, p : (a) -> e bool) -> e list<list<a>> */ 
  bool _match_5548 = kk_std_core_hnd__evv_is_affine(_ctx); /*bool*/;
  if (_match_5548) {
    kk_std_core_types__ctail _x5694 = kk_ctail_nil(); /*ctail<0>*/
    return kk_day5__ctail_lift3647_split(ll1_sq_, acc3, p3, _x5694, _ctx);
  }
  {
    return kk_day5__ctailm_lift3647_split(ll1_sq_, acc3, p3, kk_day5__new_lift3647_split_fun5695(_ctx), _ctx);
  }
}

kk_std_core_types__maybe kk_day5_get(kk_std_core__list ls, kk_integer_t index, kk_context_t* _ctx) { /* forall<a> (ls : list<a>, index : int) -> maybe<a> */ 
  kk__tailcall: ;
  bool _match_5547 = kk_integer_eq_borrow(index,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_5547) {
    kk_integer_drop(index, _ctx);
    if (kk_std_core__is_Cons(ls)) {
      struct kk_std_core_Cons* _con5696 = kk_std_core__as_Cons(ls);
      kk_box_t x = _con5696->head;
      kk_std_core__list _pat00 = _con5696->tail;
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
    struct kk_std_core_Cons* _con5697 = kk_std_core__as_Cons(ls);
    kk_box_t _pat3 = _con5697->head;
    kk_std_core__list xx = _con5697->tail;
    if (kk_likely(kk_std_core__list_is_unique(ls))) {
      kk_box_drop(_pat3, _ctx);
      kk_std_core__list_free(ls, _ctx);
    }
    else {
      kk_std_core__list_dup(xx);
      kk_std_core__list_decref(ls, _ctx);
    }
    { // tailcall
      kk_integer_t _x5698 = kk_integer_add_small_const(index, -1, _ctx); /*int*/
      ls = xx;
      index = _x5698;
      goto kk__tailcall;
    }
  }
}

kk_std_core__list kk_day5_insert(kk_std_core__list ls, kk_box_t to_insert, kk_integer_t index, kk_context_t* _ctx) { /* forall<a> (ls : list<a>, to-insert : a, index : int) -> list<a> */ 
  if (kk_std_core__is_Nil(ls)) {
    kk_integer_drop(index, _ctx);
    return kk_std_core__new_Cons(kk_reuse_null, to_insert, kk_std_core__new_Nil(_ctx), _ctx);
  }
  {
    struct kk_std_core_Cons* _con5699 = kk_std_core__as_Cons(ls);
    kk_box_t x = _con5699->head;
    kk_std_core__list xx = _con5699->tail;
    kk_reuse_t _ru_5569 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_std_core__list_is_unique(ls))) {
      _ru_5569 = (kk_std_core__list_reuse(ls));
    }
    else {
      kk_box_dup(x);
      kk_std_core__list_dup(xx);
      kk_std_core__list_decref(ls, _ctx);
    }
    bool _match_5546 = kk_integer_eq_borrow(index,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_5546) {
      kk_integer_drop(index, _ctx);
      kk_std_core__list _x5700 = kk_std_core__new_Cons(_ru_5569, to_insert, kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
      kk_std_core__list _x5701 = kk_std_core__new_Cons(kk_reuse_null, x, xx, _ctx); /*list<1009>*/
      return kk_std_core_append(_x5700, _x5701, _ctx);
    }
    {
      kk_std_core__list ys0_3640;
      kk_integer_t _x5702 = kk_integer_add_small_const(index, -1, _ctx); /*int*/
      ys0_3640 = kk_day5_insert(xx, to_insert, _x5702, _ctx); /*list<1776>*/
      kk_std_core__list _x5703 = kk_std_core__new_Cons(_ru_5569, x, kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
      return kk_std_core_append(_x5703, ys0_3640, _ctx);
    }
  }
}
 
// monadic lift

kk_std_core__list kk_day5__mlift3841_remove(kk_box_t x, kk_std_core__list _y_3679, kk_context_t* _ctx) { /* forall<a> (x : a, list<a>) -> exn list<a> */ 
  kk_std_core__list _x5704 = kk_std_core__new_Cons(kk_reuse_null, x, kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
  return kk_std_core__lp__plus__plus__rp_(_x5704, _y_3679, _ctx);
}


// lift anonymous function
struct kk_day5_remove_fun5711__t {
  struct kk_function_s _base;
  kk_box_t x0;
};
static kk_box_t kk_day5_remove_fun5711(kk_function_t _fself, kk_box_t _b_4356, kk_context_t* _ctx);
static kk_function_t kk_day5_new_remove_fun5711(kk_box_t x0, kk_context_t* _ctx) {
  struct kk_day5_remove_fun5711__t* _self = kk_function_alloc_as(struct kk_day5_remove_fun5711__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_remove_fun5711, kk_context());
  _self->x0 = x0;
  return &_self->_base;
}

static kk_box_t kk_day5_remove_fun5711(kk_function_t _fself, kk_box_t _b_4356, kk_context_t* _ctx) {
  struct kk_day5_remove_fun5711__t* _self = kk_function_as(struct kk_day5_remove_fun5711__t*, _fself);
  kk_box_t x0 = _self->x0; /* 1875 */
  kk_drop_match(_self, {kk_box_dup(x0);}, {}, _ctx)
  kk_std_core__list _y_4360_36790 = kk_std_core__list_unbox(_b_4356, _ctx); /*list<1875>*/;
  kk_std_core__list _x5712 = kk_day5__mlift3841_remove(x0, _y_4360_36790, _ctx); /*list<1875>*/
  return kk_std_core__list_box(_x5712, _ctx);
}

kk_std_core__list kk_day5_remove(kk_std_core__list ls, kk_integer_t index, kk_context_t* _ctx) { /* forall<a> (ls : list<a>, index : int) -> exn list<a> */ 
  if (kk_std_core__is_Nil(ls)) {
    bool _match_5544;
    bool _brw_5545 = kk_integer_eq_borrow(index,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    kk_integer_drop(index, _ctx);
    _match_5544 = _brw_5545; /*bool*/
    if (_match_5544) {
      return kk_std_core__new_Nil(_ctx);
    }
    {
      kk_box_t _x5705;
      kk_string_t _x5706;
      kk_define_string_literal(, _s5707, 26, "Remove index out of bounds")
      _x5706 = kk_string_dup(_s5707); /*string*/
      _x5705 = kk_std_core_throw(_x5706, kk_std_core_types__new_None(_ctx), _ctx); /*1001*/
      return kk_std_core__list_unbox(_x5705, _ctx);
    }
  }
  {
    struct kk_std_core_Cons* _con5708 = kk_std_core__as_Cons(ls);
    kk_box_t x0 = _con5708->head;
    kk_std_core__list xx = _con5708->tail;
    kk_reuse_t _ru_5570 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_std_core__list_is_unique(ls))) {
      _ru_5570 = (kk_std_core__list_reuse(ls));
    }
    else {
      kk_box_dup(x0);
      kk_std_core__list_dup(xx);
      kk_std_core__list_decref(ls, _ctx);
    }
    bool _match_5542 = kk_integer_eq_borrow(index,(kk_integer_from_small(0)),kk_context()); /*bool*/;
    if (_match_5542) {
      kk_reuse_drop(_ru_5570,kk_context());
      kk_box_drop(x0, _ctx);
      kk_integer_drop(index, _ctx);
      return xx;
    }
    {
      kk_std_core__list x1_3898;
      kk_integer_t _x5709 = kk_integer_add_small_const(index, -1, _ctx); /*int*/
      x1_3898 = kk_day5_remove(xx, _x5709, _ctx); /*list<1875>*/
      if (kk_yielding(kk_context())) {
        kk_reuse_drop(_ru_5570,kk_context());
        kk_std_core__list_drop(x1_3898, _ctx);
        kk_box_t _x5710 = kk_std_core_hnd_yield_extend(kk_day5_new_remove_fun5711(x0, _ctx), _ctx); /*1001*/
        return kk_std_core__list_unbox(_x5710, _ctx);
      }
      {
        kk_std_core__list _x5713 = kk_std_core__new_Cons(_ru_5570, x0, kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
        return kk_std_core__lp__plus__plus__rp_(_x5713, x1_3898, _ctx);
      }
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3842_execute_fun5717__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3842_execute_fun5717(kk_function_t _fself, kk_box_t _b_4366, kk_box_t _b_4367, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3842_execute_fun5717(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3842_execute_fun5717, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3842_execute_fun5717(kk_function_t _fself, kk_box_t _b_4366, kk_box_t _b_4367, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_stack__stack _x5718;
  kk_stack__stack _x5719 = kk_stack__stack_unbox(_b_4366, _ctx); /*stack/stack<string>*/
  kk_std_core__list _x5720 = kk_std_core__list_unbox(_b_4367, _ctx); /*list<string>*/
  _x5718 = kk_stack_push_all(_x5719, _x5720, _ctx); /*stack/stack<1000>*/
  return kk_stack__stack_box(_x5718, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3842_execute_fun5722__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3842_execute_fun5722(kk_function_t _fself, kk_box_t _b_4378, kk_box_t _b_4379, kk_box_t _b_4380, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3842_execute_fun5722(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3842_execute_fun5722, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3842_execute_fun5722(kk_function_t _fself, kk_box_t _b_4378, kk_box_t _b_4379, kk_box_t _b_4380, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5723;
  kk_std_core__list _x5724 = kk_std_core__list_unbox(_b_4378, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x5725 = kk_integer_unbox(_b_4380); /*int*/
  _x5723 = kk_day5_insert(_x5724, _b_4379, _x5725, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x5723, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3842_execute_fun5728__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3842_execute_fun5728(kk_function_t _fself, kk_box_t _b_4395, kk_box_t _b_4396, kk_box_t _b_4397, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3842_execute_fun5728(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3842_execute_fun5728, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3842_execute_fun5728(kk_function_t _fself, kk_box_t _b_4395, kk_box_t _b_4396, kk_box_t _b_4397, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5729;
  kk_std_core__list _b_4402_4388 = kk_std_core__list_unbox(_b_4395, _ctx); /*list<stack/stack<string>>*/;
  kk_stack__stack _b_4403_4389 = kk_stack__stack_unbox(_b_4396, _ctx); /*stack/stack<string>*/;
  kk_integer_t _b_4404_4390 = kk_integer_unbox(_b_4397); /*int*/;
  _x5729 = kk_day5_insert(_b_4402_4388, kk_stack__stack_box(_b_4403_4389, _ctx), _b_4404_4390, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x5729, _ctx);
}

kk_std_core__list kk_day5__mlift3842_execute(kk_std_core__list d, kk_integer_t from_index, kk_stack__stack to, kk_integer_t to_index, kk_std_core__list xx, kk_std_core_types__tuple2_ _y_3689, kk_context_t* _ctx) { /* (d : list<stack/stack<string>>, from-index : int, to : stack/stack<string>, to-index : int, xx : list<list<int>>, (list<string>, stack/stack<string>)) -> <div,exn> list<stack/stack<string>> */ 
  {
    kk_box_t _box_x4361 = _y_3689.fst;
    kk_box_t _box_x4362 = _y_3689.snd;
    kk_std_core__list vs = kk_std_core__list_unbox(_box_x4361, NULL);
    kk_stack__stack f = kk_stack__stack_unbox(_box_x4362, NULL);
    kk_stack__stack_dup(f);
    kk_std_core__list_dup(vs);
    kk_std_core_types__tuple2__drop(_y_3689, _ctx);
    kk_stack__stack t;
    kk_box_t _x5716 = kk_std_core_hnd__open_none2(kk_day5__new_mlift3842_execute_fun5717(_ctx), kk_stack__stack_box(to, _ctx), kk_std_core__list_box(vs, _ctx), _ctx); /*1002*/
    t = kk_stack__stack_unbox(_x5716, _ctx); /*stack/stack<string>*/
    kk_std_core__list _x14_3794;
    kk_box_t _x5721 = kk_std_core_hnd__open_none3(kk_day5__new_mlift3842_execute_fun5722(_ctx), kk_std_core__list_box(d, _ctx), kk_stack__stack_box(f, _ctx), kk_integer_box(from_index), _ctx); /*1003*/
    _x14_3794 = kk_std_core__list_unbox(_x5721, _ctx); /*list<stack/stack<string>>*/
    kk_std_core__list _x5726;
    kk_box_t _x5727 = kk_std_core_hnd__open_none3(kk_day5__new_mlift3842_execute_fun5728(_ctx), kk_std_core__list_box(_x14_3794, _ctx), kk_stack__stack_box(t, _ctx), kk_integer_box(to_index), _ctx); /*1003*/
    _x5726 = kk_std_core__list_unbox(_x5727, _ctx); /*list<stack/stack<string>>*/
    return kk_day5_execute(_x5726, xx, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3843_execute_fun5731__t {
  struct kk_function_s _base;
  kk_std_core__list d0;
  kk_integer_t from_index0;
  kk_integer_t to_index0;
  kk_stack__stack to0;
  kk_std_core__list xx0;
};
static kk_box_t kk_day5__mlift3843_execute_fun5731(kk_function_t _fself, kk_box_t _b_4406, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3843_execute_fun5731(kk_std_core__list d0, kk_integer_t from_index0, kk_integer_t to_index0, kk_stack__stack to0, kk_std_core__list xx0, kk_context_t* _ctx) {
  struct kk_day5__mlift3843_execute_fun5731__t* _self = kk_function_alloc_as(struct kk_day5__mlift3843_execute_fun5731__t, 7, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3843_execute_fun5731, kk_context());
  _self->d0 = d0;
  _self->from_index0 = from_index0;
  _self->to_index0 = to_index0;
  _self->to0 = to0;
  _self->xx0 = xx0;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3843_execute_fun5731(kk_function_t _fself, kk_box_t _b_4406, kk_context_t* _ctx) {
  struct kk_day5__mlift3843_execute_fun5731__t* _self = kk_function_as(struct kk_day5__mlift3843_execute_fun5731__t*, _fself);
  kk_std_core__list d0 = _self->d0; /* list<stack/stack<string>> */
  kk_integer_t from_index0 = _self->from_index0; /* int */
  kk_integer_t to_index0 = _self->to_index0; /* int */
  kk_stack__stack to0 = _self->to0; /* stack/stack<string> */
  kk_std_core__list xx0 = _self->xx0; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(d0);kk_integer_dup(from_index0);kk_integer_dup(to_index0);kk_stack__stack_dup(to0);kk_std_core__list_dup(xx0);}, {}, _ctx)
  kk_std_core_types__tuple2_ _y_4408_36890 = kk_std_core_types__tuple2__unbox(_b_4406, _ctx); /*(list<string>, stack/stack<string>)*/;
  kk_std_core__list _x5732 = kk_day5__mlift3842_execute(d0, from_index0, to0, to_index0, xx0, _y_4408_36890, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5732, _ctx);
}

kk_std_core__list kk_day5__mlift3843_execute(kk_stack__stack from, kk_integer_t from_index0, kk_integer_t quantity, kk_stack__stack to0, kk_integer_t to_index0, kk_std_core__list xx0, kk_std_core__list d0, kk_context_t* _ctx) { /* (from : stack/stack<string>, from-index : int, quantity : int, to : stack/stack<string>, to-index : int, xx : list<list<int>>, d : list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 
  kk_std_core_types__tuple2_ x_3901 = kk_stack__lift803_pop_n(from, quantity, kk_std_core__new_Nil(_ctx), _ctx); /*(list<string>, stack/stack<string>)*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__tuple2__drop(x_3901, _ctx);
    kk_box_t _x5730 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3843_execute_fun5731(d0, from_index0, to_index0, to0, xx0, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x5730, _ctx);
  }
  {
    return kk_day5__mlift3842_execute(d0, from_index0, to0, to_index0, xx0, x_3901, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3844_execute_fun5735__t {
  struct kk_function_s _base;
  kk_integer_t from_index1;
  kk_stack__stack from0;
  kk_integer_t quantity0;
  kk_integer_t to_index1;
  kk_stack__stack to1;
  kk_std_core__list xx1;
};
static kk_box_t kk_day5__mlift3844_execute_fun5735(kk_function_t _fself, kk_box_t _b_4410, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3844_execute_fun5735(kk_integer_t from_index1, kk_stack__stack from0, kk_integer_t quantity0, kk_integer_t to_index1, kk_stack__stack to1, kk_std_core__list xx1, kk_context_t* _ctx) {
  struct kk_day5__mlift3844_execute_fun5735__t* _self = kk_function_alloc_as(struct kk_day5__mlift3844_execute_fun5735__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3844_execute_fun5735, kk_context());
  _self->from_index1 = from_index1;
  _self->from0 = from0;
  _self->quantity0 = quantity0;
  _self->to_index1 = to_index1;
  _self->to1 = to1;
  _self->xx1 = xx1;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3844_execute_fun5735(kk_function_t _fself, kk_box_t _b_4410, kk_context_t* _ctx) {
  struct kk_day5__mlift3844_execute_fun5735__t* _self = kk_function_as(struct kk_day5__mlift3844_execute_fun5735__t*, _fself);
  kk_integer_t from_index1 = _self->from_index1; /* int */
  kk_stack__stack from0 = _self->from0; /* stack/stack<string> */
  kk_integer_t quantity0 = _self->quantity0; /* int */
  kk_integer_t to_index1 = _self->to_index1; /* int */
  kk_stack__stack to1 = _self->to1; /* stack/stack<string> */
  kk_std_core__list xx1 = _self->xx1; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index1);kk_stack__stack_dup(from0);kk_integer_dup(quantity0);kk_integer_dup(to_index1);kk_stack__stack_dup(to1);kk_std_core__list_dup(xx1);}, {}, _ctx)
  kk_std_core__list d1_4412 = kk_std_core__list_unbox(_b_4410, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x5736 = kk_day5__mlift3843_execute(from0, from_index1, quantity0, to1, to_index1, xx1, d1_4412, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5736, _ctx);
}

kk_std_core__list kk_day5__mlift3844_execute(kk_stack__stack from0, kk_integer_t from_index1, kk_integer_t quantity0, kk_stack__stack to1, kk_integer_t to_index1, kk_std_core__list xx1, kk_std_core__list _y_3687, kk_context_t* _ctx) { /* (from : stack/stack<string>, from-index : int, quantity : int, to : stack/stack<string>, to-index : int, xx : list<list<int>>, list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 
  kk_std_core__list x0_3903;
  kk_integer_t _x5733 = kk_integer_dup(from_index1); /*int*/
  x0_3903 = kk_day5_remove(_y_3687, _x5733, _ctx); /*list<stack/stack<string>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x0_3903, _ctx);
    kk_box_t _x5734 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3844_execute_fun5735(from_index1, from0, quantity0, to_index1, to1, xx1, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x5734, _ctx);
  }
  {
    return kk_day5__mlift3843_execute(from0, from_index1, quantity0, to1, to_index1, xx1, x0_3903, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3845_execute_fun5740__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3845_execute_fun5740(kk_function_t _fself, kk_box_t _b_4418, kk_box_t _b_4419, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3845_execute_fun5740(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3845_execute_fun5740, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3845_execute_fun5740(kk_function_t _fself, kk_box_t _b_4418, kk_box_t _b_4419, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_stack__stack _x5741;
  kk_stack__stack _x5742 = kk_stack__stack_unbox(_b_4418, _ctx); /*stack/stack<string>*/
  kk_std_core__list _x5743 = kk_std_core__list_unbox(_b_4419, _ctx); /*list<string>*/
  _x5741 = kk_stack_push_all(_x5742, _x5743, _ctx); /*stack/stack<1000>*/
  return kk_stack__stack_box(_x5741, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3845_execute_fun5745__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3845_execute_fun5745(kk_function_t _fself, kk_box_t _b_4430, kk_box_t _b_4431, kk_box_t _b_4432, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3845_execute_fun5745(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3845_execute_fun5745, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3845_execute_fun5745(kk_function_t _fself, kk_box_t _b_4430, kk_box_t _b_4431, kk_box_t _b_4432, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5746;
  kk_std_core__list _x5747 = kk_std_core__list_unbox(_b_4430, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x5748 = kk_integer_unbox(_b_4432); /*int*/
  _x5746 = kk_day5_insert(_x5747, _b_4431, _x5748, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x5746, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3845_execute_fun5751__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3845_execute_fun5751(kk_function_t _fself, kk_box_t _b_4447, kk_box_t _b_4448, kk_box_t _b_4449, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3845_execute_fun5751(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3845_execute_fun5751, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3845_execute_fun5751(kk_function_t _fself, kk_box_t _b_4447, kk_box_t _b_4448, kk_box_t _b_4449, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5752;
  kk_std_core__list _b_4454_4440 = kk_std_core__list_unbox(_b_4447, _ctx); /*list<stack/stack<string>>*/;
  kk_stack__stack _b_4455_4441 = kk_stack__stack_unbox(_b_4448, _ctx); /*stack/stack<string>*/;
  kk_integer_t _b_4456_4442 = kk_integer_unbox(_b_4449); /*int*/;
  _x5752 = kk_day5_insert(_b_4454_4440, kk_stack__stack_box(_b_4455_4441, _ctx), _b_4456_4442, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x5752, _ctx);
}

kk_std_core__list kk_day5__mlift3845_execute(kk_std_core__list d00, kk_integer_t from_index2, kk_stack__stack to2, kk_integer_t to_index2, kk_std_core__list xx2, kk_std_core_types__tuple2_ _y_3694, kk_context_t* _ctx) { /* (d0 : list<stack/stack<string>>, from-index : int, to : stack/stack<string>, to-index : int, xx : list<list<int>>, (list<string>, stack/stack<string>)) -> <div,exn> list<stack/stack<string>> */ 
  {
    kk_box_t _box_x4413 = _y_3694.fst;
    kk_box_t _box_x4414 = _y_3694.snd;
    kk_std_core__list vs0 = kk_std_core__list_unbox(_box_x4413, NULL);
    kk_stack__stack f0 = kk_stack__stack_unbox(_box_x4414, NULL);
    kk_stack__stack_dup(f0);
    kk_std_core__list_dup(vs0);
    kk_std_core_types__tuple2__drop(_y_3694, _ctx);
    kk_stack__stack t0;
    kk_box_t _x5739 = kk_std_core_hnd__open_none2(kk_day5__new_mlift3845_execute_fun5740(_ctx), kk_stack__stack_box(to2, _ctx), kk_std_core__list_box(vs0, _ctx), _ctx); /*1002*/
    t0 = kk_stack__stack_unbox(_x5739, _ctx); /*stack/stack<string>*/
    kk_std_core__list _x17_3802;
    kk_box_t _x5744 = kk_std_core_hnd__open_none3(kk_day5__new_mlift3845_execute_fun5745(_ctx), kk_std_core__list_box(d00, _ctx), kk_stack__stack_box(t0, _ctx), kk_integer_box(to_index2), _ctx); /*1003*/
    _x17_3802 = kk_std_core__list_unbox(_x5744, _ctx); /*list<stack/stack<string>>*/
    kk_std_core__list _x5749;
    kk_box_t _x5750 = kk_std_core_hnd__open_none3(kk_day5__new_mlift3845_execute_fun5751(_ctx), kk_std_core__list_box(_x17_3802, _ctx), kk_stack__stack_box(f0, _ctx), kk_integer_box(from_index2), _ctx); /*1003*/
    _x5749 = kk_std_core__list_unbox(_x5750, _ctx); /*list<stack/stack<string>>*/
    return kk_day5_execute(_x5749, xx2, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3846_execute_fun5754__t {
  struct kk_function_s _base;
  kk_std_core__list d01;
  kk_integer_t from_index3;
  kk_integer_t to_index3;
  kk_stack__stack to3;
  kk_std_core__list xx3;
};
static kk_box_t kk_day5__mlift3846_execute_fun5754(kk_function_t _fself, kk_box_t _b_4458, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3846_execute_fun5754(kk_std_core__list d01, kk_integer_t from_index3, kk_integer_t to_index3, kk_stack__stack to3, kk_std_core__list xx3, kk_context_t* _ctx) {
  struct kk_day5__mlift3846_execute_fun5754__t* _self = kk_function_alloc_as(struct kk_day5__mlift3846_execute_fun5754__t, 7, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3846_execute_fun5754, kk_context());
  _self->d01 = d01;
  _self->from_index3 = from_index3;
  _self->to_index3 = to_index3;
  _self->to3 = to3;
  _self->xx3 = xx3;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3846_execute_fun5754(kk_function_t _fself, kk_box_t _b_4458, kk_context_t* _ctx) {
  struct kk_day5__mlift3846_execute_fun5754__t* _self = kk_function_as(struct kk_day5__mlift3846_execute_fun5754__t*, _fself);
  kk_std_core__list d01 = _self->d01; /* list<stack/stack<string>> */
  kk_integer_t from_index3 = _self->from_index3; /* int */
  kk_integer_t to_index3 = _self->to_index3; /* int */
  kk_stack__stack to3 = _self->to3; /* stack/stack<string> */
  kk_std_core__list xx3 = _self->xx3; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(d01);kk_integer_dup(from_index3);kk_integer_dup(to_index3);kk_stack__stack_dup(to3);kk_std_core__list_dup(xx3);}, {}, _ctx)
  kk_std_core_types__tuple2_ _y_4460_36940 = kk_std_core_types__tuple2__unbox(_b_4458, _ctx); /*(list<string>, stack/stack<string>)*/;
  kk_std_core__list _x5755 = kk_day5__mlift3845_execute(d01, from_index3, to3, to_index3, xx3, _y_4460_36940, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5755, _ctx);
}

kk_std_core__list kk_day5__mlift3846_execute(kk_stack__stack from1, kk_integer_t from_index3, kk_integer_t quantity1, kk_stack__stack to3, kk_integer_t to_index3, kk_std_core__list xx3, kk_std_core__list d01, kk_context_t* _ctx) { /* (from : stack/stack<string>, from-index : int, quantity : int, to : stack/stack<string>, to-index : int, xx : list<list<int>>, d0 : list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 
  kk_std_core_types__tuple2_ x1_3905 = kk_stack__lift803_pop_n(from1, quantity1, kk_std_core__new_Nil(_ctx), _ctx); /*(list<string>, stack/stack<string>)*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__tuple2__drop(x1_3905, _ctx);
    kk_box_t _x5753 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3846_execute_fun5754(d01, from_index3, to_index3, to3, xx3, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x5753, _ctx);
  }
  {
    return kk_day5__mlift3845_execute(d01, from_index3, to3, to_index3, xx3, x1_3905, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3847_execute_fun5758__t {
  struct kk_function_s _base;
  kk_integer_t from_index4;
  kk_stack__stack from2;
  kk_integer_t quantity2;
  kk_integer_t to_index4;
  kk_stack__stack to4;
  kk_std_core__list xx4;
};
static kk_box_t kk_day5__mlift3847_execute_fun5758(kk_function_t _fself, kk_box_t _b_4462, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3847_execute_fun5758(kk_integer_t from_index4, kk_stack__stack from2, kk_integer_t quantity2, kk_integer_t to_index4, kk_stack__stack to4, kk_std_core__list xx4, kk_context_t* _ctx) {
  struct kk_day5__mlift3847_execute_fun5758__t* _self = kk_function_alloc_as(struct kk_day5__mlift3847_execute_fun5758__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3847_execute_fun5758, kk_context());
  _self->from_index4 = from_index4;
  _self->from2 = from2;
  _self->quantity2 = quantity2;
  _self->to_index4 = to_index4;
  _self->to4 = to4;
  _self->xx4 = xx4;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3847_execute_fun5758(kk_function_t _fself, kk_box_t _b_4462, kk_context_t* _ctx) {
  struct kk_day5__mlift3847_execute_fun5758__t* _self = kk_function_as(struct kk_day5__mlift3847_execute_fun5758__t*, _fself);
  kk_integer_t from_index4 = _self->from_index4; /* int */
  kk_stack__stack from2 = _self->from2; /* stack/stack<string> */
  kk_integer_t quantity2 = _self->quantity2; /* int */
  kk_integer_t to_index4 = _self->to_index4; /* int */
  kk_stack__stack to4 = _self->to4; /* stack/stack<string> */
  kk_std_core__list xx4 = _self->xx4; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index4);kk_stack__stack_dup(from2);kk_integer_dup(quantity2);kk_integer_dup(to_index4);kk_stack__stack_dup(to4);kk_std_core__list_dup(xx4);}, {}, _ctx)
  kk_std_core__list d02_4464 = kk_std_core__list_unbox(_b_4462, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x5759 = kk_day5__mlift3846_execute(from2, from_index4, quantity2, to4, to_index4, xx4, d02_4464, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5759, _ctx);
}

kk_std_core__list kk_day5__mlift3847_execute(kk_stack__stack from2, kk_integer_t from_index4, kk_integer_t quantity2, kk_stack__stack to4, kk_integer_t to_index4, kk_std_core__list xx4, kk_std_core__list _y_3692, kk_context_t* _ctx) { /* (from : stack/stack<string>, from-index : int, quantity : int, to : stack/stack<string>, to-index : int, xx : list<list<int>>, list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 
  kk_std_core__list x2_3907;
  kk_integer_t _x5756 = kk_integer_dup(to_index4); /*int*/
  x2_3907 = kk_day5_remove(_y_3692, _x5756, _ctx); /*list<stack/stack<string>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x2_3907, _ctx);
    kk_box_t _x5757 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3847_execute_fun5758(from_index4, from2, quantity2, to_index4, to4, xx4, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x5757, _ctx);
  }
  {
    return kk_day5__mlift3846_execute(from2, from_index4, quantity2, to4, to_index4, xx4, x2_3907, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3848_execute_fun5762__t {
  struct kk_function_s _base;
  kk_integer_t from_index5;
  kk_stack__stack from3;
  kk_integer_t quantity3;
  kk_integer_t to_index5;
  kk_stack__stack to5;
  kk_std_core__list xx5;
};
static kk_box_t kk_day5__mlift3848_execute_fun5762(kk_function_t _fself, kk_box_t _b_4466, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3848_execute_fun5762(kk_integer_t from_index5, kk_stack__stack from3, kk_integer_t quantity3, kk_integer_t to_index5, kk_stack__stack to5, kk_std_core__list xx5, kk_context_t* _ctx) {
  struct kk_day5__mlift3848_execute_fun5762__t* _self = kk_function_alloc_as(struct kk_day5__mlift3848_execute_fun5762__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3848_execute_fun5762, kk_context());
  _self->from_index5 = from_index5;
  _self->from3 = from3;
  _self->quantity3 = quantity3;
  _self->to_index5 = to_index5;
  _self->to5 = to5;
  _self->xx5 = xx5;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3848_execute_fun5762(kk_function_t _fself, kk_box_t _b_4466, kk_context_t* _ctx) {
  struct kk_day5__mlift3848_execute_fun5762__t* _self = kk_function_as(struct kk_day5__mlift3848_execute_fun5762__t*, _fself);
  kk_integer_t from_index5 = _self->from_index5; /* int */
  kk_stack__stack from3 = _self->from3; /* stack/stack<string> */
  kk_integer_t quantity3 = _self->quantity3; /* int */
  kk_integer_t to_index5 = _self->to_index5; /* int */
  kk_stack__stack to5 = _self->to5; /* stack/stack<string> */
  kk_std_core__list xx5 = _self->xx5; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index5);kk_stack__stack_dup(from3);kk_integer_dup(quantity3);kk_integer_dup(to_index5);kk_stack__stack_dup(to5);kk_std_core__list_dup(xx5);}, {}, _ctx)
  kk_std_core__list _y_4471_36870 = kk_std_core__list_unbox(_b_4466, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x5763 = kk_day5__mlift3844_execute(from3, from_index5, quantity3, to5, to_index5, xx5, _y_4471_36870, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5763, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3848_execute_fun5766__t {
  struct kk_function_s _base;
  kk_integer_t from_index5;
  kk_stack__stack from3;
  kk_integer_t quantity3;
  kk_integer_t to_index5;
  kk_stack__stack to5;
  kk_std_core__list xx5;
};
static kk_box_t kk_day5__mlift3848_execute_fun5766(kk_function_t _fself, kk_box_t _b_4468, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3848_execute_fun5766(kk_integer_t from_index5, kk_stack__stack from3, kk_integer_t quantity3, kk_integer_t to_index5, kk_stack__stack to5, kk_std_core__list xx5, kk_context_t* _ctx) {
  struct kk_day5__mlift3848_execute_fun5766__t* _self = kk_function_alloc_as(struct kk_day5__mlift3848_execute_fun5766__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3848_execute_fun5766, kk_context());
  _self->from_index5 = from_index5;
  _self->from3 = from3;
  _self->quantity3 = quantity3;
  _self->to_index5 = to_index5;
  _self->to5 = to5;
  _self->xx5 = xx5;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3848_execute_fun5766(kk_function_t _fself, kk_box_t _b_4468, kk_context_t* _ctx) {
  struct kk_day5__mlift3848_execute_fun5766__t* _self = kk_function_as(struct kk_day5__mlift3848_execute_fun5766__t*, _fself);
  kk_integer_t from_index5 = _self->from_index5; /* int */
  kk_stack__stack from3 = _self->from3; /* stack/stack<string> */
  kk_integer_t quantity3 = _self->quantity3; /* int */
  kk_integer_t to_index5 = _self->to_index5; /* int */
  kk_stack__stack to5 = _self->to5; /* stack/stack<string> */
  kk_std_core__list xx5 = _self->xx5; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index5);kk_stack__stack_dup(from3);kk_integer_dup(quantity3);kk_integer_dup(to_index5);kk_stack__stack_dup(to5);kk_std_core__list_dup(xx5);}, {}, _ctx)
  kk_std_core__list _y_4472_36920 = kk_std_core__list_unbox(_b_4468, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x5767 = kk_day5__mlift3847_execute(from3, from_index5, quantity3, to5, to_index5, xx5, _y_4472_36920, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5767, _ctx);
}

kk_std_core__list kk_day5__mlift3848_execute(kk_std_core__list desc, kk_stack__stack from3, kk_integer_t from_index5, kk_integer_t quantity3, kk_integer_t to_index5, kk_std_core__list xx5, kk_stack__stack to5, kk_context_t* _ctx) { /* (desc : list<stack/stack<string>>, from : stack/stack<string>, from-index : int, quantity : int, to-index : int, xx : list<list<int>>, to : stack/stack<string>) -> exn list<stack/stack<string>> */ 
  bool _match_5535 = kk_integer_lt_borrow(from_index5,to_index5,kk_context()); /*bool*/;
  if (_match_5535) {
    kk_std_core__list x3_3909;
    kk_integer_t _x5760 = kk_integer_dup(to_index5); /*int*/
    x3_3909 = kk_day5_remove(desc, _x5760, _ctx); /*list<stack/stack<string>>*/
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x3_3909, _ctx);
      kk_box_t _x5761 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3848_execute_fun5762(from_index5, from3, quantity3, to_index5, to5, xx5, _ctx), _ctx); /*1001*/
      return kk_std_core__list_unbox(_x5761, _ctx);
    }
    {
      return kk_day5__mlift3844_execute(from3, from_index5, quantity3, to5, to_index5, xx5, x3_3909, _ctx);
    }
  }
  {
    kk_std_core__list x4_3911;
    kk_integer_t _x5764 = kk_integer_dup(from_index5); /*int*/
    x4_3911 = kk_day5_remove(desc, _x5764, _ctx); /*list<stack/stack<string>>*/
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x4_3911, _ctx);
      kk_box_t _x5765 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3848_execute_fun5766(from_index5, from3, quantity3, to_index5, to5, xx5, _ctx), _ctx); /*1001*/
      return kk_std_core__list_unbox(_x5765, _ctx);
    }
    {
      return kk_day5__mlift3847_execute(from3, from_index5, quantity3, to5, to_index5, xx5, x4_3911, _ctx);
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3849_execute_fun5769__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3849_execute_fun5769(kk_function_t _fself, kk_box_t _b_4476, kk_box_t _b_4477, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3849_execute_fun5769(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3849_execute_fun5769, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3849_execute_fun5769(kk_function_t _fself, kk_box_t _b_4476, kk_box_t _b_4477, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5770;
  kk_std_core__list _x5771 = kk_std_core__list_unbox(_b_4476, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x5772 = kk_integer_unbox(_b_4477); /*int*/
  _x5770 = kk_day5_get(_x5771, _x5772, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x5770, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3849_execute_fun5779__t {
  struct kk_function_s _base;
  kk_std_core__list desc0;
  kk_integer_t from_index6;
  kk_stack__stack from4;
  kk_integer_t quantity4;
  kk_integer_t to_index6;
  kk_std_core__list xx6;
};
static kk_box_t kk_day5__mlift3849_execute_fun5779(kk_function_t _fself, kk_box_t _b_4484, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3849_execute_fun5779(kk_std_core__list desc0, kk_integer_t from_index6, kk_stack__stack from4, kk_integer_t quantity4, kk_integer_t to_index6, kk_std_core__list xx6, kk_context_t* _ctx) {
  struct kk_day5__mlift3849_execute_fun5779__t* _self = kk_function_alloc_as(struct kk_day5__mlift3849_execute_fun5779__t, 8, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3849_execute_fun5779, kk_context());
  _self->desc0 = desc0;
  _self->from_index6 = from_index6;
  _self->from4 = from4;
  _self->quantity4 = quantity4;
  _self->to_index6 = to_index6;
  _self->xx6 = xx6;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3849_execute_fun5779(kk_function_t _fself, kk_box_t _b_4484, kk_context_t* _ctx) {
  struct kk_day5__mlift3849_execute_fun5779__t* _self = kk_function_as(struct kk_day5__mlift3849_execute_fun5779__t*, _fself);
  kk_std_core__list desc0 = _self->desc0; /* list<stack/stack<string>> */
  kk_integer_t from_index6 = _self->from_index6; /* int */
  kk_stack__stack from4 = _self->from4; /* stack/stack<string> */
  kk_integer_t quantity4 = _self->quantity4; /* int */
  kk_integer_t to_index6 = _self->to_index6; /* int */
  kk_std_core__list xx6 = _self->xx6; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc0);kk_integer_dup(from_index6);kk_stack__stack_dup(from4);kk_integer_dup(quantity4);kk_integer_dup(to_index6);kk_std_core__list_dup(xx6);}, {}, _ctx)
  kk_stack__stack to6_4486 = kk_stack__stack_unbox(_b_4484, _ctx); /*stack/stack<string>*/;
  kk_std_core__list _x5780 = kk_day5__mlift3848_execute(desc0, from4, from_index6, quantity4, to_index6, xx6, to6_4486, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5780, _ctx);
}

kk_std_core__list kk_day5__mlift3849_execute(kk_std_core__list desc0, kk_integer_t from_index6, kk_integer_t quantity4, kk_integer_t to_index6, kk_std_core__list xx6, kk_stack__stack from4, kk_context_t* _ctx) { /* (desc : list<stack/stack<string>>, from-index : int, quantity : int, to-index : int, xx : list<list<int>>, from : stack/stack<string>) -> exn list<stack/stack<string>> */ 
  kk_std_core_types__maybe _b_4479_4478;
  kk_box_t _x5768;
  kk_box_t _x5773;
  kk_std_core__list _x5774 = kk_std_core__list_dup(desc0); /*list<stack/stack<string>>*/
  _x5773 = kk_std_core__list_box(_x5774, _ctx); /*1000*/
  kk_box_t _x5775;
  kk_integer_t _x5776 = kk_integer_dup(to_index6); /*int*/
  _x5775 = kk_integer_box(_x5776); /*1001*/
  _x5768 = kk_std_core_hnd__open_none2(kk_day5__new_mlift3849_execute_fun5769(_ctx), _x5773, _x5775, _ctx); /*1002*/
  _b_4479_4478 = kk_std_core_types__maybe_unbox(_x5768, _ctx); /*maybe<stack/stack<string>>*/
  kk_stack__stack x5_3913;
  kk_box_t _x5777 = kk_std_core_unjust(_b_4479_4478, _ctx); /*1001*/
  x5_3913 = kk_stack__stack_unbox(_x5777, _ctx); /*stack/stack<string>*/
  if (kk_yielding(kk_context())) {
    kk_stack__stack_drop(x5_3913, _ctx);
    kk_box_t _x5778 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3849_execute_fun5779(desc0, from_index6, from4, quantity4, to_index6, xx6, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x5778, _ctx);
  }
  {
    return kk_day5__mlift3848_execute(desc0, from4, from_index6, quantity4, to_index6, xx6, x5_3913, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3850_execute_fun5782__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3850_execute_fun5782(kk_function_t _fself, kk_box_t _b_4490, kk_box_t _b_4491, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3850_execute_fun5782(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3850_execute_fun5782, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3850_execute_fun5782(kk_function_t _fself, kk_box_t _b_4490, kk_box_t _b_4491, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5783;
  kk_std_core__list _x5784 = kk_std_core__list_unbox(_b_4490, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x5785 = kk_integer_unbox(_b_4491); /*int*/
  _x5783 = kk_day5_get(_x5784, _x5785, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x5783, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3850_execute_fun5792__t {
  struct kk_function_s _base;
  kk_std_core__list desc1;
  kk_integer_t from_index7;
  kk_integer_t quantity5;
  kk_integer_t to_index7;
  kk_std_core__list xx7;
};
static kk_box_t kk_day5__mlift3850_execute_fun5792(kk_function_t _fself, kk_box_t _b_4498, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3850_execute_fun5792(kk_std_core__list desc1, kk_integer_t from_index7, kk_integer_t quantity5, kk_integer_t to_index7, kk_std_core__list xx7, kk_context_t* _ctx) {
  struct kk_day5__mlift3850_execute_fun5792__t* _self = kk_function_alloc_as(struct kk_day5__mlift3850_execute_fun5792__t, 6, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3850_execute_fun5792, kk_context());
  _self->desc1 = desc1;
  _self->from_index7 = from_index7;
  _self->quantity5 = quantity5;
  _self->to_index7 = to_index7;
  _self->xx7 = xx7;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3850_execute_fun5792(kk_function_t _fself, kk_box_t _b_4498, kk_context_t* _ctx) {
  struct kk_day5__mlift3850_execute_fun5792__t* _self = kk_function_as(struct kk_day5__mlift3850_execute_fun5792__t*, _fself);
  kk_std_core__list desc1 = _self->desc1; /* list<stack/stack<string>> */
  kk_integer_t from_index7 = _self->from_index7; /* int */
  kk_integer_t quantity5 = _self->quantity5; /* int */
  kk_integer_t to_index7 = _self->to_index7; /* int */
  kk_std_core__list xx7 = _self->xx7; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc1);kk_integer_dup(from_index7);kk_integer_dup(quantity5);kk_integer_dup(to_index7);kk_std_core__list_dup(xx7);}, {}, _ctx)
  kk_stack__stack from5_4500 = kk_stack__stack_unbox(_b_4498, _ctx); /*stack/stack<string>*/;
  kk_std_core__list _x5793 = kk_day5__mlift3849_execute(desc1, from_index7, quantity5, to_index7, xx7, from5_4500, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5793, _ctx);
}

kk_std_core__list kk_day5__mlift3850_execute(kk_std_core__list desc1, kk_integer_t from_index7, kk_integer_t quantity5, kk_std_core__list xx7, kk_integer_t _y_3684, kk_context_t* _ctx) { /* (desc : list<stack/stack<string>>, from-index : int, quantity : int, xx : list<list<int>>, int) -> exn list<stack/stack<string>> */ 
  kk_integer_t to_index7 = kk_integer_add_small_const(_y_3684, -1, _ctx); /*int*/;
  kk_std_core_types__maybe _b_4493_4492;
  kk_box_t _x5781;
  kk_box_t _x5786;
  kk_std_core__list _x5787 = kk_std_core__list_dup(desc1); /*list<stack/stack<string>>*/
  _x5786 = kk_std_core__list_box(_x5787, _ctx); /*1000*/
  kk_box_t _x5788;
  kk_integer_t _x5789 = kk_integer_dup(from_index7); /*int*/
  _x5788 = kk_integer_box(_x5789); /*1001*/
  _x5781 = kk_std_core_hnd__open_none2(kk_day5__new_mlift3850_execute_fun5782(_ctx), _x5786, _x5788, _ctx); /*1002*/
  _b_4493_4492 = kk_std_core_types__maybe_unbox(_x5781, _ctx); /*maybe<stack/stack<string>>*/
  kk_stack__stack x6_3915;
  kk_box_t _x5790 = kk_std_core_unjust(_b_4493_4492, _ctx); /*1001*/
  x6_3915 = kk_stack__stack_unbox(_x5790, _ctx); /*stack/stack<string>*/
  if (kk_yielding(kk_context())) {
    kk_stack__stack_drop(x6_3915, _ctx);
    kk_box_t _x5791 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3850_execute_fun5792(desc1, from_index7, quantity5, to_index7, xx7, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x5791, _ctx);
  }
  {
    return kk_day5__mlift3849_execute(desc1, from_index7, quantity5, to_index7, xx7, x6_3915, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3851_execute_fun5795__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3851_execute_fun5795(kk_function_t _fself, kk_box_t _b_4504, kk_box_t _b_4505, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3851_execute_fun5795(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3851_execute_fun5795, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3851_execute_fun5795(kk_function_t _fself, kk_box_t _b_4504, kk_box_t _b_4505, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5796;
  kk_std_core__list _x5797 = kk_std_core__list_unbox(_b_4504, _ctx); /*list<int>*/
  kk_integer_t _x5798 = kk_integer_unbox(_b_4505); /*int*/
  _x5796 = kk_day5_get(_x5797, _x5798, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x5796, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3851_execute_fun5801__t {
  struct kk_function_s _base;
  kk_std_core__list desc2;
  kk_integer_t from_index8;
  kk_integer_t quantity6;
  kk_std_core__list xx8;
};
static kk_box_t kk_day5__mlift3851_execute_fun5801(kk_function_t _fself, kk_box_t _b_4512, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3851_execute_fun5801(kk_std_core__list desc2, kk_integer_t from_index8, kk_integer_t quantity6, kk_std_core__list xx8, kk_context_t* _ctx) {
  struct kk_day5__mlift3851_execute_fun5801__t* _self = kk_function_alloc_as(struct kk_day5__mlift3851_execute_fun5801__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3851_execute_fun5801, kk_context());
  _self->desc2 = desc2;
  _self->from_index8 = from_index8;
  _self->quantity6 = quantity6;
  _self->xx8 = xx8;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3851_execute_fun5801(kk_function_t _fself, kk_box_t _b_4512, kk_context_t* _ctx) {
  struct kk_day5__mlift3851_execute_fun5801__t* _self = kk_function_as(struct kk_day5__mlift3851_execute_fun5801__t*, _fself);
  kk_std_core__list desc2 = _self->desc2; /* list<stack/stack<string>> */
  kk_integer_t from_index8 = _self->from_index8; /* int */
  kk_integer_t quantity6 = _self->quantity6; /* int */
  kk_std_core__list xx8 = _self->xx8; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc2);kk_integer_dup(from_index8);kk_integer_dup(quantity6);kk_std_core__list_dup(xx8);}, {}, _ctx)
  kk_integer_t _y_4514_36840 = kk_integer_unbox(_b_4512); /*int*/;
  kk_std_core__list _x5802 = kk_day5__mlift3850_execute(desc2, from_index8, quantity6, xx8, _y_4514_36840, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5802, _ctx);
}

kk_std_core__list kk_day5__mlift3851_execute(kk_std_core__list desc2, kk_integer_t quantity6, kk_std_core__list x7, kk_std_core__list xx8, kk_integer_t _y_3683, kk_context_t* _ctx) { /* (desc : list<stack/stack<string>>, quantity : int, x : list<int>, xx : list<list<int>>, int) -> exn list<stack/stack<string>> */ 
  kk_integer_t from_index8 = kk_integer_add_small_const(_y_3683, -1, _ctx); /*int*/;
  kk_std_core_types__maybe _b_4507_4506;
  kk_box_t _x5794 = kk_std_core_hnd__open_none2(kk_day5__new_mlift3851_execute_fun5795(_ctx), kk_std_core__list_box(x7, _ctx), kk_integer_box(kk_integer_from_small(2)), _ctx); /*1002*/
  _b_4507_4506 = kk_std_core_types__maybe_unbox(_x5794, _ctx); /*maybe<int>*/
  kk_integer_t x8_3917;
  kk_box_t _x5799 = kk_std_core_unjust(_b_4507_4506, _ctx); /*1001*/
  x8_3917 = kk_integer_unbox(_x5799); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x8_3917, _ctx);
    kk_box_t _x5800 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3851_execute_fun5801(desc2, from_index8, quantity6, xx8, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x5800, _ctx);
  }
  {
    return kk_day5__mlift3850_execute(desc2, from_index8, quantity6, xx8, x8_3917, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3852_execute_fun5804__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3852_execute_fun5804(kk_function_t _fself, kk_box_t _b_4518, kk_box_t _b_4519, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3852_execute_fun5804(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3852_execute_fun5804, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3852_execute_fun5804(kk_function_t _fself, kk_box_t _b_4518, kk_box_t _b_4519, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5805;
  kk_std_core__list _x5806 = kk_std_core__list_unbox(_b_4518, _ctx); /*list<int>*/
  kk_integer_t _x5807 = kk_integer_unbox(_b_4519); /*int*/
  _x5805 = kk_day5_get(_x5806, _x5807, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x5805, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3852_execute_fun5812__t {
  struct kk_function_s _base;
  kk_std_core__list desc3;
  kk_integer_t quantity7;
  kk_std_core__list x9;
  kk_std_core__list xx9;
};
static kk_box_t kk_day5__mlift3852_execute_fun5812(kk_function_t _fself, kk_box_t _b_4526, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3852_execute_fun5812(kk_std_core__list desc3, kk_integer_t quantity7, kk_std_core__list x9, kk_std_core__list xx9, kk_context_t* _ctx) {
  struct kk_day5__mlift3852_execute_fun5812__t* _self = kk_function_alloc_as(struct kk_day5__mlift3852_execute_fun5812__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3852_execute_fun5812, kk_context());
  _self->desc3 = desc3;
  _self->quantity7 = quantity7;
  _self->x9 = x9;
  _self->xx9 = xx9;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3852_execute_fun5812(kk_function_t _fself, kk_box_t _b_4526, kk_context_t* _ctx) {
  struct kk_day5__mlift3852_execute_fun5812__t* _self = kk_function_as(struct kk_day5__mlift3852_execute_fun5812__t*, _fself);
  kk_std_core__list desc3 = _self->desc3; /* list<stack/stack<string>> */
  kk_integer_t quantity7 = _self->quantity7; /* int */
  kk_std_core__list x9 = _self->x9; /* list<int> */
  kk_std_core__list xx9 = _self->xx9; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc3);kk_integer_dup(quantity7);kk_std_core__list_dup(x9);kk_std_core__list_dup(xx9);}, {}, _ctx)
  kk_integer_t _y_4528_36830 = kk_integer_unbox(_b_4526); /*int*/;
  kk_std_core__list _x5813 = kk_day5__mlift3851_execute(desc3, quantity7, x9, xx9, _y_4528_36830, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5813, _ctx);
}

kk_std_core__list kk_day5__mlift3852_execute(kk_std_core__list desc3, kk_std_core__list x9, kk_std_core__list xx9, kk_integer_t quantity7, kk_context_t* _ctx) { /* (desc : list<stack/stack<string>>, x : list<int>, xx : list<list<int>>, quantity : int) -> exn list<stack/stack<string>> */ 
  kk_std_core_types__maybe _b_4521_4520;
  kk_box_t _x5803;
  kk_box_t _x5808;
  kk_std_core__list _x5809 = kk_std_core__list_dup(x9); /*list<int>*/
  _x5808 = kk_std_core__list_box(_x5809, _ctx); /*1000*/
  _x5803 = kk_std_core_hnd__open_none2(kk_day5__new_mlift3852_execute_fun5804(_ctx), _x5808, kk_integer_box(kk_integer_from_small(1)), _ctx); /*1002*/
  _b_4521_4520 = kk_std_core_types__maybe_unbox(_x5803, _ctx); /*maybe<int>*/
  kk_integer_t x10_3919;
  kk_box_t _x5810 = kk_std_core_unjust(_b_4521_4520, _ctx); /*1001*/
  x10_3919 = kk_integer_unbox(_x5810); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x10_3919, _ctx);
    kk_box_t _x5811 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3852_execute_fun5812(desc3, quantity7, x9, xx9, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x5811, _ctx);
  }
  {
    return kk_day5__mlift3851_execute(desc3, quantity7, x9, xx9, x10_3919, _ctx);
  }
}
 
// solution to part 2


// lift anonymous function
struct kk_day5_execute_fun5819__t {
  struct kk_function_s _base;
  kk_std_core__list desc4;
  kk_std_core__list x11;
  kk_std_core__list xx10;
};
static kk_box_t kk_day5_execute_fun5819(kk_function_t _fself, kk_box_t _b_4533, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5819(kk_std_core__list desc4, kk_std_core__list x11, kk_std_core__list xx10, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5819__t* _self = kk_function_alloc_as(struct kk_day5_execute_fun5819__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute_fun5819, kk_context());
  _self->desc4 = desc4;
  _self->x11 = x11;
  _self->xx10 = xx10;
  return &_self->_base;
}

static kk_box_t kk_day5_execute_fun5819(kk_function_t _fself, kk_box_t _b_4533, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5819__t* _self = kk_function_as(struct kk_day5_execute_fun5819__t*, _fself);
  kk_std_core__list desc4 = _self->desc4; /* list<stack/stack<string>> */
  kk_std_core__list x11 = _self->x11; /* list<int> */
  kk_std_core__list xx10 = _self->xx10; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc4);kk_std_core__list_dup(x11);kk_std_core__list_dup(xx10);}, {}, _ctx)
  kk_integer_t quantity8_4687 = kk_integer_unbox(_b_4533); /*int*/;
  kk_std_core__list _x5820 = kk_day5__mlift3852_execute(desc4, x11, xx10, quantity8_4687, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5820, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5822__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute_fun5822(kk_function_t _fself, kk_box_t _b_4537, kk_box_t _b_4538, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5822(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute_fun5822, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute_fun5822(kk_function_t _fself, kk_box_t _b_4537, kk_box_t _b_4538, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5823;
  kk_std_core__list _x5824 = kk_std_core__list_unbox(_b_4537, _ctx); /*list<int>*/
  kk_integer_t _x5825 = kk_integer_unbox(_b_4538); /*int*/
  _x5823 = kk_day5_get(_x5824, _x5825, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x5823, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5830__t {
  struct kk_function_s _base;
  kk_std_core__list desc4;
  kk_std_core__list x11;
  kk_integer_t x12_3921;
  kk_std_core__list xx10;
};
static kk_box_t kk_day5_execute_fun5830(kk_function_t _fself, kk_box_t _b_4545, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5830(kk_std_core__list desc4, kk_std_core__list x11, kk_integer_t x12_3921, kk_std_core__list xx10, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5830__t* _self = kk_function_alloc_as(struct kk_day5_execute_fun5830__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute_fun5830, kk_context());
  _self->desc4 = desc4;
  _self->x11 = x11;
  _self->x12_3921 = x12_3921;
  _self->xx10 = xx10;
  return &_self->_base;
}

static kk_box_t kk_day5_execute_fun5830(kk_function_t _fself, kk_box_t _b_4545, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5830__t* _self = kk_function_as(struct kk_day5_execute_fun5830__t*, _fself);
  kk_std_core__list desc4 = _self->desc4; /* list<stack/stack<string>> */
  kk_std_core__list x11 = _self->x11; /* list<int> */
  kk_integer_t x12_3921 = _self->x12_3921; /* int */
  kk_std_core__list xx10 = _self->xx10; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc4);kk_std_core__list_dup(x11);kk_integer_dup(x12_3921);kk_std_core__list_dup(xx10);}, {}, _ctx)
  kk_integer_t _y_4688_36831 = kk_integer_unbox(_b_4545); /*int*/;
  kk_std_core__list _x5831 = kk_day5__mlift3851_execute(desc4, x12_3921, x11, xx10, _y_4688_36831, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5831, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5833__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute_fun5833(kk_function_t _fself, kk_box_t _b_4549, kk_box_t _b_4550, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5833(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute_fun5833, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute_fun5833(kk_function_t _fself, kk_box_t _b_4549, kk_box_t _b_4550, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5834;
  kk_std_core__list _x5835 = kk_std_core__list_unbox(_b_4549, _ctx); /*list<int>*/
  kk_integer_t _x5836 = kk_integer_unbox(_b_4550); /*int*/
  _x5834 = kk_day5_get(_x5835, _x5836, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x5834, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5839__t {
  struct kk_function_s _base;
  kk_std_core__list desc4;
  kk_integer_t from_index9;
  kk_integer_t x12_3921;
  kk_std_core__list xx10;
};
static kk_box_t kk_day5_execute_fun5839(kk_function_t _fself, kk_box_t _b_4557, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5839(kk_std_core__list desc4, kk_integer_t from_index9, kk_integer_t x12_3921, kk_std_core__list xx10, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5839__t* _self = kk_function_alloc_as(struct kk_day5_execute_fun5839__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute_fun5839, kk_context());
  _self->desc4 = desc4;
  _self->from_index9 = from_index9;
  _self->x12_3921 = x12_3921;
  _self->xx10 = xx10;
  return &_self->_base;
}

static kk_box_t kk_day5_execute_fun5839(kk_function_t _fself, kk_box_t _b_4557, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5839__t* _self = kk_function_as(struct kk_day5_execute_fun5839__t*, _fself);
  kk_std_core__list desc4 = _self->desc4; /* list<stack/stack<string>> */
  kk_integer_t from_index9 = _self->from_index9; /* int */
  kk_integer_t x12_3921 = _self->x12_3921; /* int */
  kk_std_core__list xx10 = _self->xx10; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc4);kk_integer_dup(from_index9);kk_integer_dup(x12_3921);kk_std_core__list_dup(xx10);}, {}, _ctx)
  kk_integer_t _y_4689_36841 = kk_integer_unbox(_b_4557); /*int*/;
  kk_std_core__list _x5840 = kk_day5__mlift3850_execute(desc4, from_index9, x12_3921, xx10, _y_4689_36841, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5840, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5842__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute_fun5842(kk_function_t _fself, kk_box_t _b_4561, kk_box_t _b_4562, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5842(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute_fun5842, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute_fun5842(kk_function_t _fself, kk_box_t _b_4561, kk_box_t _b_4562, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5843;
  kk_std_core__list _x5844 = kk_std_core__list_unbox(_b_4561, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x5845 = kk_integer_unbox(_b_4562); /*int*/
  _x5843 = kk_day5_get(_x5844, _x5845, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x5843, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5852__t {
  struct kk_function_s _base;
  kk_std_core__list desc4;
  kk_integer_t from_index9;
  kk_integer_t to_index8;
  kk_integer_t x12_3921;
  kk_std_core__list xx10;
};
static kk_box_t kk_day5_execute_fun5852(kk_function_t _fself, kk_box_t _b_4569, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5852(kk_std_core__list desc4, kk_integer_t from_index9, kk_integer_t to_index8, kk_integer_t x12_3921, kk_std_core__list xx10, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5852__t* _self = kk_function_alloc_as(struct kk_day5_execute_fun5852__t, 6, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute_fun5852, kk_context());
  _self->desc4 = desc4;
  _self->from_index9 = from_index9;
  _self->to_index8 = to_index8;
  _self->x12_3921 = x12_3921;
  _self->xx10 = xx10;
  return &_self->_base;
}

static kk_box_t kk_day5_execute_fun5852(kk_function_t _fself, kk_box_t _b_4569, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5852__t* _self = kk_function_as(struct kk_day5_execute_fun5852__t*, _fself);
  kk_std_core__list desc4 = _self->desc4; /* list<stack/stack<string>> */
  kk_integer_t from_index9 = _self->from_index9; /* int */
  kk_integer_t to_index8 = _self->to_index8; /* int */
  kk_integer_t x12_3921 = _self->x12_3921; /* int */
  kk_std_core__list xx10 = _self->xx10; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc4);kk_integer_dup(from_index9);kk_integer_dup(to_index8);kk_integer_dup(x12_3921);kk_std_core__list_dup(xx10);}, {}, _ctx)
  kk_stack__stack from6_4690 = kk_stack__stack_unbox(_b_4569, _ctx); /*stack/stack<string>*/;
  kk_std_core__list _x5853 = kk_day5__mlift3849_execute(desc4, from_index9, x12_3921, to_index8, xx10, from6_4690, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5853, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5855__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute_fun5855(kk_function_t _fself, kk_box_t _b_4573, kk_box_t _b_4574, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5855(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute_fun5855, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute_fun5855(kk_function_t _fself, kk_box_t _b_4573, kk_box_t _b_4574, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5856;
  kk_std_core__list _x5857 = kk_std_core__list_unbox(_b_4573, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x5858 = kk_integer_unbox(_b_4574); /*int*/
  _x5856 = kk_day5_get(_x5857, _x5858, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x5856, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5865__t {
  struct kk_function_s _base;
  kk_std_core__list desc4;
  kk_integer_t from_index9;
  kk_integer_t to_index8;
  kk_integer_t x12_3921;
  kk_stack__stack x15_3930;
  kk_std_core__list xx10;
};
static kk_box_t kk_day5_execute_fun5865(kk_function_t _fself, kk_box_t _b_4581, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5865(kk_std_core__list desc4, kk_integer_t from_index9, kk_integer_t to_index8, kk_integer_t x12_3921, kk_stack__stack x15_3930, kk_std_core__list xx10, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5865__t* _self = kk_function_alloc_as(struct kk_day5_execute_fun5865__t, 8, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute_fun5865, kk_context());
  _self->desc4 = desc4;
  _self->from_index9 = from_index9;
  _self->to_index8 = to_index8;
  _self->x12_3921 = x12_3921;
  _self->x15_3930 = x15_3930;
  _self->xx10 = xx10;
  return &_self->_base;
}

static kk_box_t kk_day5_execute_fun5865(kk_function_t _fself, kk_box_t _b_4581, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5865__t* _self = kk_function_as(struct kk_day5_execute_fun5865__t*, _fself);
  kk_std_core__list desc4 = _self->desc4; /* list<stack/stack<string>> */
  kk_integer_t from_index9 = _self->from_index9; /* int */
  kk_integer_t to_index8 = _self->to_index8; /* int */
  kk_integer_t x12_3921 = _self->x12_3921; /* int */
  kk_stack__stack x15_3930 = _self->x15_3930; /* stack/stack<string> */
  kk_std_core__list xx10 = _self->xx10; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc4);kk_integer_dup(from_index9);kk_integer_dup(to_index8);kk_integer_dup(x12_3921);kk_stack__stack_dup(x15_3930);kk_std_core__list_dup(xx10);}, {}, _ctx)
  kk_stack__stack to7_4691 = kk_stack__stack_unbox(_b_4581, _ctx); /*stack/stack<string>*/;
  kk_std_core__list _x5866 = kk_day5__mlift3848_execute(desc4, x15_3930, from_index9, x12_3921, to_index8, xx10, to7_4691, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5866, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5869__t {
  struct kk_function_s _base;
  kk_integer_t from_index9;
  kk_integer_t to_index8;
  kk_integer_t x12_3921;
  kk_stack__stack x15_3930;
  kk_stack__stack x16_3933;
  kk_std_core__list xx10;
};
static kk_box_t kk_day5_execute_fun5869(kk_function_t _fself, kk_box_t _b_4583, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5869(kk_integer_t from_index9, kk_integer_t to_index8, kk_integer_t x12_3921, kk_stack__stack x15_3930, kk_stack__stack x16_3933, kk_std_core__list xx10, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5869__t* _self = kk_function_alloc_as(struct kk_day5_execute_fun5869__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute_fun5869, kk_context());
  _self->from_index9 = from_index9;
  _self->to_index8 = to_index8;
  _self->x12_3921 = x12_3921;
  _self->x15_3930 = x15_3930;
  _self->x16_3933 = x16_3933;
  _self->xx10 = xx10;
  return &_self->_base;
}

static kk_box_t kk_day5_execute_fun5869(kk_function_t _fself, kk_box_t _b_4583, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5869__t* _self = kk_function_as(struct kk_day5_execute_fun5869__t*, _fself);
  kk_integer_t from_index9 = _self->from_index9; /* int */
  kk_integer_t to_index8 = _self->to_index8; /* int */
  kk_integer_t x12_3921 = _self->x12_3921; /* int */
  kk_stack__stack x15_3930 = _self->x15_3930; /* stack/stack<string> */
  kk_stack__stack x16_3933 = _self->x16_3933; /* stack/stack<string> */
  kk_std_core__list xx10 = _self->xx10; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index9);kk_integer_dup(to_index8);kk_integer_dup(x12_3921);kk_stack__stack_dup(x15_3930);kk_stack__stack_dup(x16_3933);kk_std_core__list_dup(xx10);}, {}, _ctx)
  kk_std_core__list _y_4692_36871 = kk_std_core__list_unbox(_b_4583, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x5870 = kk_day5__mlift3844_execute(x15_3930, from_index9, x12_3921, x16_3933, to_index8, xx10, _y_4692_36871, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5870, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5873__t {
  struct kk_function_s _base;
  kk_integer_t from_index9;
  kk_integer_t to_index8;
  kk_integer_t x12_3921;
  kk_stack__stack x15_3930;
  kk_stack__stack x16_3933;
  kk_std_core__list xx10;
};
static kk_box_t kk_day5_execute_fun5873(kk_function_t _fself, kk_box_t _b_4585, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5873(kk_integer_t from_index9, kk_integer_t to_index8, kk_integer_t x12_3921, kk_stack__stack x15_3930, kk_stack__stack x16_3933, kk_std_core__list xx10, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5873__t* _self = kk_function_alloc_as(struct kk_day5_execute_fun5873__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute_fun5873, kk_context());
  _self->from_index9 = from_index9;
  _self->to_index8 = to_index8;
  _self->x12_3921 = x12_3921;
  _self->x15_3930 = x15_3930;
  _self->x16_3933 = x16_3933;
  _self->xx10 = xx10;
  return &_self->_base;
}

static kk_box_t kk_day5_execute_fun5873(kk_function_t _fself, kk_box_t _b_4585, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5873__t* _self = kk_function_as(struct kk_day5_execute_fun5873__t*, _fself);
  kk_integer_t from_index9 = _self->from_index9; /* int */
  kk_integer_t to_index8 = _self->to_index8; /* int */
  kk_integer_t x12_3921 = _self->x12_3921; /* int */
  kk_stack__stack x15_3930 = _self->x15_3930; /* stack/stack<string> */
  kk_stack__stack x16_3933 = _self->x16_3933; /* stack/stack<string> */
  kk_std_core__list xx10 = _self->xx10; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index9);kk_integer_dup(to_index8);kk_integer_dup(x12_3921);kk_stack__stack_dup(x15_3930);kk_stack__stack_dup(x16_3933);kk_std_core__list_dup(xx10);}, {}, _ctx)
  kk_std_core__list d2_4693 = kk_std_core__list_unbox(_b_4585, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x5874 = kk_day5__mlift3843_execute(x15_3930, from_index9, x12_3921, x16_3933, to_index8, xx10, d2_4693, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5874, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5876__t {
  struct kk_function_s _base;
  kk_integer_t from_index9;
  kk_integer_t to_index8;
  kk_stack__stack x16_3933;
  kk_std_core__list x18_3939;
  kk_std_core__list xx10;
};
static kk_box_t kk_day5_execute_fun5876(kk_function_t _fself, kk_box_t _b_4587, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5876(kk_integer_t from_index9, kk_integer_t to_index8, kk_stack__stack x16_3933, kk_std_core__list x18_3939, kk_std_core__list xx10, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5876__t* _self = kk_function_alloc_as(struct kk_day5_execute_fun5876__t, 7, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute_fun5876, kk_context());
  _self->from_index9 = from_index9;
  _self->to_index8 = to_index8;
  _self->x16_3933 = x16_3933;
  _self->x18_3939 = x18_3939;
  _self->xx10 = xx10;
  return &_self->_base;
}

static kk_box_t kk_day5_execute_fun5876(kk_function_t _fself, kk_box_t _b_4587, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5876__t* _self = kk_function_as(struct kk_day5_execute_fun5876__t*, _fself);
  kk_integer_t from_index9 = _self->from_index9; /* int */
  kk_integer_t to_index8 = _self->to_index8; /* int */
  kk_stack__stack x16_3933 = _self->x16_3933; /* stack/stack<string> */
  kk_std_core__list x18_3939 = _self->x18_3939; /* list<stack/stack<string>> */
  kk_std_core__list xx10 = _self->xx10; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index9);kk_integer_dup(to_index8);kk_stack__stack_dup(x16_3933);kk_std_core__list_dup(x18_3939);kk_std_core__list_dup(xx10);}, {}, _ctx)
  kk_std_core_types__tuple2_ _y_4694_36891 = kk_std_core_types__tuple2__unbox(_b_4587, _ctx); /*(list<string>, stack/stack<string>)*/;
  kk_std_core__list _x5877 = kk_day5__mlift3842_execute(x18_3939, from_index9, x16_3933, to_index8, xx10, _y_4694_36891, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5877, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5881__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute_fun5881(kk_function_t _fself, kk_box_t _b_4593, kk_box_t _b_4594, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5881(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute_fun5881, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute_fun5881(kk_function_t _fself, kk_box_t _b_4593, kk_box_t _b_4594, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_stack__stack _x5882;
  kk_stack__stack _x5883 = kk_stack__stack_unbox(_b_4593, _ctx); /*stack/stack<string>*/
  kk_std_core__list _x5884 = kk_std_core__list_unbox(_b_4594, _ctx); /*list<string>*/
  _x5882 = kk_stack_push_all(_x5883, _x5884, _ctx); /*stack/stack<1000>*/
  return kk_stack__stack_box(_x5882, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5886__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute_fun5886(kk_function_t _fself, kk_box_t _b_4605, kk_box_t _b_4606, kk_box_t _b_4607, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5886(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute_fun5886, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute_fun5886(kk_function_t _fself, kk_box_t _b_4605, kk_box_t _b_4606, kk_box_t _b_4607, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5887;
  kk_std_core__list _x5888 = kk_std_core__list_unbox(_b_4605, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x5889 = kk_integer_unbox(_b_4607); /*int*/
  _x5887 = kk_day5_insert(_x5888, _b_4606, _x5889, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x5887, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5892__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute_fun5892(kk_function_t _fself, kk_box_t _b_4622, kk_box_t _b_4623, kk_box_t _b_4624, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5892(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute_fun5892, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute_fun5892(kk_function_t _fself, kk_box_t _b_4622, kk_box_t _b_4623, kk_box_t _b_4624, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5893;
  kk_std_core__list _b_4698_4615 = kk_std_core__list_unbox(_b_4622, _ctx); /*list<stack/stack<string>>*/;
  kk_stack__stack _b_4699_4616 = kk_stack__stack_unbox(_b_4623, _ctx); /*stack/stack<string>*/;
  kk_integer_t _b_4700_4617 = kk_integer_unbox(_b_4624); /*int*/;
  _x5893 = kk_day5_insert(_b_4698_4615, kk_stack__stack_box(_b_4699_4616, _ctx), _b_4700_4617, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x5893, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5896__t {
  struct kk_function_s _base;
  kk_integer_t from_index9;
  kk_integer_t to_index8;
  kk_integer_t x12_3921;
  kk_stack__stack x15_3930;
  kk_stack__stack x16_3933;
  kk_std_core__list xx10;
};
static kk_box_t kk_day5_execute_fun5896(kk_function_t _fself, kk_box_t _b_4626, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5896(kk_integer_t from_index9, kk_integer_t to_index8, kk_integer_t x12_3921, kk_stack__stack x15_3930, kk_stack__stack x16_3933, kk_std_core__list xx10, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5896__t* _self = kk_function_alloc_as(struct kk_day5_execute_fun5896__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute_fun5896, kk_context());
  _self->from_index9 = from_index9;
  _self->to_index8 = to_index8;
  _self->x12_3921 = x12_3921;
  _self->x15_3930 = x15_3930;
  _self->x16_3933 = x16_3933;
  _self->xx10 = xx10;
  return &_self->_base;
}

static kk_box_t kk_day5_execute_fun5896(kk_function_t _fself, kk_box_t _b_4626, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5896__t* _self = kk_function_as(struct kk_day5_execute_fun5896__t*, _fself);
  kk_integer_t from_index9 = _self->from_index9; /* int */
  kk_integer_t to_index8 = _self->to_index8; /* int */
  kk_integer_t x12_3921 = _self->x12_3921; /* int */
  kk_stack__stack x15_3930 = _self->x15_3930; /* stack/stack<string> */
  kk_stack__stack x16_3933 = _self->x16_3933; /* stack/stack<string> */
  kk_std_core__list xx10 = _self->xx10; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index9);kk_integer_dup(to_index8);kk_integer_dup(x12_3921);kk_stack__stack_dup(x15_3930);kk_stack__stack_dup(x16_3933);kk_std_core__list_dup(xx10);}, {}, _ctx)
  kk_std_core__list _y_4695_36921 = kk_std_core__list_unbox(_b_4626, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x5897 = kk_day5__mlift3847_execute(x15_3930, from_index9, x12_3921, x16_3933, to_index8, xx10, _y_4695_36921, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5897, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5900__t {
  struct kk_function_s _base;
  kk_integer_t from_index9;
  kk_integer_t to_index8;
  kk_integer_t x12_3921;
  kk_stack__stack x15_3930;
  kk_stack__stack x16_3933;
  kk_std_core__list xx10;
};
static kk_box_t kk_day5_execute_fun5900(kk_function_t _fself, kk_box_t _b_4628, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5900(kk_integer_t from_index9, kk_integer_t to_index8, kk_integer_t x12_3921, kk_stack__stack x15_3930, kk_stack__stack x16_3933, kk_std_core__list xx10, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5900__t* _self = kk_function_alloc_as(struct kk_day5_execute_fun5900__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute_fun5900, kk_context());
  _self->from_index9 = from_index9;
  _self->to_index8 = to_index8;
  _self->x12_3921 = x12_3921;
  _self->x15_3930 = x15_3930;
  _self->x16_3933 = x16_3933;
  _self->xx10 = xx10;
  return &_self->_base;
}

static kk_box_t kk_day5_execute_fun5900(kk_function_t _fself, kk_box_t _b_4628, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5900__t* _self = kk_function_as(struct kk_day5_execute_fun5900__t*, _fself);
  kk_integer_t from_index9 = _self->from_index9; /* int */
  kk_integer_t to_index8 = _self->to_index8; /* int */
  kk_integer_t x12_3921 = _self->x12_3921; /* int */
  kk_stack__stack x15_3930 = _self->x15_3930; /* stack/stack<string> */
  kk_stack__stack x16_3933 = _self->x16_3933; /* stack/stack<string> */
  kk_std_core__list xx10 = _self->xx10; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index9);kk_integer_dup(to_index8);kk_integer_dup(x12_3921);kk_stack__stack_dup(x15_3930);kk_stack__stack_dup(x16_3933);kk_std_core__list_dup(xx10);}, {}, _ctx)
  kk_std_core__list d03_4696 = kk_std_core__list_unbox(_b_4628, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x5901 = kk_day5__mlift3846_execute(x15_3930, from_index9, x12_3921, x16_3933, to_index8, xx10, d03_4696, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5901, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5903__t {
  struct kk_function_s _base;
  kk_integer_t from_index9;
  kk_integer_t to_index8;
  kk_stack__stack x16_3933;
  kk_std_core__list x21_3948;
  kk_std_core__list xx10;
};
static kk_box_t kk_day5_execute_fun5903(kk_function_t _fself, kk_box_t _b_4630, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5903(kk_integer_t from_index9, kk_integer_t to_index8, kk_stack__stack x16_3933, kk_std_core__list x21_3948, kk_std_core__list xx10, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5903__t* _self = kk_function_alloc_as(struct kk_day5_execute_fun5903__t, 7, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute_fun5903, kk_context());
  _self->from_index9 = from_index9;
  _self->to_index8 = to_index8;
  _self->x16_3933 = x16_3933;
  _self->x21_3948 = x21_3948;
  _self->xx10 = xx10;
  return &_self->_base;
}

static kk_box_t kk_day5_execute_fun5903(kk_function_t _fself, kk_box_t _b_4630, kk_context_t* _ctx) {
  struct kk_day5_execute_fun5903__t* _self = kk_function_as(struct kk_day5_execute_fun5903__t*, _fself);
  kk_integer_t from_index9 = _self->from_index9; /* int */
  kk_integer_t to_index8 = _self->to_index8; /* int */
  kk_stack__stack x16_3933 = _self->x16_3933; /* stack/stack<string> */
  kk_std_core__list x21_3948 = _self->x21_3948; /* list<stack/stack<string>> */
  kk_std_core__list xx10 = _self->xx10; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index9);kk_integer_dup(to_index8);kk_stack__stack_dup(x16_3933);kk_std_core__list_dup(x21_3948);kk_std_core__list_dup(xx10);}, {}, _ctx)
  kk_std_core_types__tuple2_ _y_4697_36941 = kk_std_core_types__tuple2__unbox(_b_4630, _ctx); /*(list<string>, stack/stack<string>)*/;
  kk_std_core__list _x5904 = kk_day5__mlift3845_execute(x21_3948, from_index9, x16_3933, to_index8, xx10, _y_4697_36941, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5904, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5908__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute_fun5908(kk_function_t _fself, kk_box_t _b_4636, kk_box_t _b_4637, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5908(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute_fun5908, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute_fun5908(kk_function_t _fself, kk_box_t _b_4636, kk_box_t _b_4637, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_stack__stack _x5909;
  kk_stack__stack _x5910 = kk_stack__stack_unbox(_b_4636, _ctx); /*stack/stack<string>*/
  kk_std_core__list _x5911 = kk_std_core__list_unbox(_b_4637, _ctx); /*list<string>*/
  _x5909 = kk_stack_push_all(_x5910, _x5911, _ctx); /*stack/stack<1000>*/
  return kk_stack__stack_box(_x5909, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5913__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute_fun5913(kk_function_t _fself, kk_box_t _b_4648, kk_box_t _b_4649, kk_box_t _b_4650, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5913(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute_fun5913, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute_fun5913(kk_function_t _fself, kk_box_t _b_4648, kk_box_t _b_4649, kk_box_t _b_4650, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5914;
  kk_std_core__list _x5915 = kk_std_core__list_unbox(_b_4648, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x5916 = kk_integer_unbox(_b_4650); /*int*/
  _x5914 = kk_day5_insert(_x5915, _b_4649, _x5916, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x5914, _ctx);
}


// lift anonymous function
struct kk_day5_execute_fun5919__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute_fun5919(kk_function_t _fself, kk_box_t _b_4665, kk_box_t _b_4666, kk_box_t _b_4667, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute_fun5919(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute_fun5919, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute_fun5919(kk_function_t _fself, kk_box_t _b_4665, kk_box_t _b_4666, kk_box_t _b_4667, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5920;
  kk_std_core__list _b_4701_4658 = kk_std_core__list_unbox(_b_4665, _ctx); /*list<stack/stack<string>>*/;
  kk_stack__stack _b_4702_4659 = kk_stack__stack_unbox(_b_4666, _ctx); /*stack/stack<string>*/;
  kk_integer_t _b_4703_4660 = kk_integer_unbox(_b_4667); /*int*/;
  _x5920 = kk_day5_insert(_b_4701_4658, kk_stack__stack_box(_b_4702_4659, _ctx), _b_4703_4660, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x5920, _ctx);
}

kk_std_core__list kk_day5_execute(kk_std_core__list desc4, kk_std_core__list ins, kk_context_t* _ctx) { /* (desc : list<stack/stack<string>>, ins : list<list<int>>) -> pure list<stack/stack<string>> */ 
  kk__tailcall: ;
  if (kk_std_core__is_Nil(ins)) {
    return desc4;
  }
  {
    struct kk_std_core_Cons* _con5814 = kk_std_core__as_Cons(ins);
    kk_box_t _box_x4529 = _con5814->head;
    kk_std_core__list xx10 = _con5814->tail;
    kk_std_core__list x11 = kk_std_core__list_unbox(_box_x4529, NULL);
    if (kk_likely(kk_std_core__list_is_unique(ins))) {
      kk_std_core__list_free(ins, _ctx);
    }
    else {
      kk_std_core__list_dup(x11);
      kk_std_core__list_dup(xx10);
      kk_std_core__list_decref(ins, _ctx);
    }
    kk_std_core_types__maybe _b_4531_4530;
    kk_std_core__list _x5816 = kk_std_core__list_dup(x11); /*list<int>*/
    _b_4531_4530 = kk_std_core_head_1(_x5816, _ctx); /*maybe<int>*/
    kk_integer_t x12_3921;
    kk_box_t _x5817 = kk_std_core_unjust(_b_4531_4530, _ctx); /*1001*/
    x12_3921 = kk_integer_unbox(_x5817); /*int*/
    if (kk_yielding(kk_context())) {
      kk_integer_drop(x12_3921, _ctx);
      kk_box_t _x5818 = kk_std_core_hnd_yield_extend(kk_day5_new_execute_fun5819(desc4, x11, xx10, _ctx), _ctx); /*1001*/
      return kk_std_core__list_unbox(_x5818, _ctx);
    }
    {
      kk_std_core_types__maybe _b_4540_4539;
      kk_box_t _x5821;
      kk_box_t _x5826;
      kk_std_core__list _x5827 = kk_std_core__list_dup(x11); /*list<int>*/
      _x5826 = kk_std_core__list_box(_x5827, _ctx); /*1000*/
      _x5821 = kk_std_core_hnd__open_none2(kk_day5_new_execute_fun5822(_ctx), _x5826, kk_integer_box(kk_integer_from_small(1)), _ctx); /*1002*/
      _b_4540_4539 = kk_std_core_types__maybe_unbox(_x5821, _ctx); /*maybe<int>*/
      kk_integer_t x13_3924;
      kk_box_t _x5828 = kk_std_core_unjust(_b_4540_4539, _ctx); /*1001*/
      x13_3924 = kk_integer_unbox(_x5828); /*int*/
      if (kk_yielding(kk_context())) {
        kk_integer_drop(x13_3924, _ctx);
        kk_box_t _x5829 = kk_std_core_hnd_yield_extend(kk_day5_new_execute_fun5830(desc4, x11, x12_3921, xx10, _ctx), _ctx); /*1001*/
        return kk_std_core__list_unbox(_x5829, _ctx);
      }
      {
        kk_integer_t from_index9 = kk_integer_add_small_const(x13_3924, -1, _ctx); /*int*/;
        kk_std_core_types__maybe _b_4552_4551;
        kk_box_t _x5832 = kk_std_core_hnd__open_none2(kk_day5_new_execute_fun5833(_ctx), kk_std_core__list_box(x11, _ctx), kk_integer_box(kk_integer_from_small(2)), _ctx); /*1002*/
        _b_4552_4551 = kk_std_core_types__maybe_unbox(_x5832, _ctx); /*maybe<int>*/
        kk_integer_t x14_3927;
        kk_box_t _x5837 = kk_std_core_unjust(_b_4552_4551, _ctx); /*1001*/
        x14_3927 = kk_integer_unbox(_x5837); /*int*/
        if (kk_yielding(kk_context())) {
          kk_integer_drop(x14_3927, _ctx);
          kk_box_t _x5838 = kk_std_core_hnd_yield_extend(kk_day5_new_execute_fun5839(desc4, from_index9, x12_3921, xx10, _ctx), _ctx); /*1001*/
          return kk_std_core__list_unbox(_x5838, _ctx);
        }
        {
          kk_integer_t to_index8 = kk_integer_add_small_const(x14_3927, -1, _ctx); /*int*/;
          kk_std_core_types__maybe _b_4564_4563;
          kk_box_t _x5841;
          kk_box_t _x5846;
          kk_std_core__list _x5847 = kk_std_core__list_dup(desc4); /*list<stack/stack<string>>*/
          _x5846 = kk_std_core__list_box(_x5847, _ctx); /*1000*/
          kk_box_t _x5848;
          kk_integer_t _x5849 = kk_integer_dup(from_index9); /*int*/
          _x5848 = kk_integer_box(_x5849); /*1001*/
          _x5841 = kk_std_core_hnd__open_none2(kk_day5_new_execute_fun5842(_ctx), _x5846, _x5848, _ctx); /*1002*/
          _b_4564_4563 = kk_std_core_types__maybe_unbox(_x5841, _ctx); /*maybe<stack/stack<string>>*/
          kk_stack__stack x15_3930;
          kk_box_t _x5850 = kk_std_core_unjust(_b_4564_4563, _ctx); /*1001*/
          x15_3930 = kk_stack__stack_unbox(_x5850, _ctx); /*stack/stack<string>*/
          if (kk_yielding(kk_context())) {
            kk_stack__stack_drop(x15_3930, _ctx);
            kk_box_t _x5851 = kk_std_core_hnd_yield_extend(kk_day5_new_execute_fun5852(desc4, from_index9, to_index8, x12_3921, xx10, _ctx), _ctx); /*1001*/
            return kk_std_core__list_unbox(_x5851, _ctx);
          }
          {
            kk_std_core_types__maybe _b_4576_4575;
            kk_box_t _x5854;
            kk_box_t _x5859;
            kk_std_core__list _x5860 = kk_std_core__list_dup(desc4); /*list<stack/stack<string>>*/
            _x5859 = kk_std_core__list_box(_x5860, _ctx); /*1000*/
            kk_box_t _x5861;
            kk_integer_t _x5862 = kk_integer_dup(to_index8); /*int*/
            _x5861 = kk_integer_box(_x5862); /*1001*/
            _x5854 = kk_std_core_hnd__open_none2(kk_day5_new_execute_fun5855(_ctx), _x5859, _x5861, _ctx); /*1002*/
            _b_4576_4575 = kk_std_core_types__maybe_unbox(_x5854, _ctx); /*maybe<stack/stack<string>>*/
            kk_stack__stack x16_3933;
            kk_box_t _x5863 = kk_std_core_unjust(_b_4576_4575, _ctx); /*1001*/
            x16_3933 = kk_stack__stack_unbox(_x5863, _ctx); /*stack/stack<string>*/
            if (kk_yielding(kk_context())) {
              kk_stack__stack_drop(x16_3933, _ctx);
              kk_box_t _x5864 = kk_std_core_hnd_yield_extend(kk_day5_new_execute_fun5865(desc4, from_index9, to_index8, x12_3921, x15_3930, xx10, _ctx), _ctx); /*1001*/
              return kk_std_core__list_unbox(_x5864, _ctx);
            }
            {
              bool _match_5524 = kk_integer_lt_borrow(from_index9,to_index8,kk_context()); /*bool*/;
              if (_match_5524) {
                kk_std_core__list x17_3936;
                kk_integer_t _x5867 = kk_integer_dup(to_index8); /*int*/
                x17_3936 = kk_day5_remove(desc4, _x5867, _ctx); /*list<stack/stack<string>>*/
                if (kk_yielding(kk_context())) {
                  kk_std_core__list_drop(x17_3936, _ctx);
                  kk_box_t _x5868 = kk_std_core_hnd_yield_extend(kk_day5_new_execute_fun5869(from_index9, to_index8, x12_3921, x15_3930, x16_3933, xx10, _ctx), _ctx); /*1001*/
                  return kk_std_core__list_unbox(_x5868, _ctx);
                }
                {
                  kk_std_core__list x18_3939;
                  kk_integer_t _x5871 = kk_integer_dup(from_index9); /*int*/
                  x18_3939 = kk_day5_remove(x17_3936, _x5871, _ctx); /*list<stack/stack<string>>*/
                  if (kk_yielding(kk_context())) {
                    kk_std_core__list_drop(x18_3939, _ctx);
                    kk_box_t _x5872 = kk_std_core_hnd_yield_extend(kk_day5_new_execute_fun5873(from_index9, to_index8, x12_3921, x15_3930, x16_3933, xx10, _ctx), _ctx); /*1001*/
                    return kk_std_core__list_unbox(_x5872, _ctx);
                  }
                  {
                    kk_std_core_types__tuple2_ x19_3942 = kk_stack__lift803_pop_n(x15_3930, x12_3921, kk_std_core__new_Nil(_ctx), _ctx); /*(list<string>, stack/stack<string>)*/;
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__tuple2__drop(x19_3942, _ctx);
                      kk_box_t _x5875 = kk_std_core_hnd_yield_extend(kk_day5_new_execute_fun5876(from_index9, to_index8, x16_3933, x18_3939, xx10, _ctx), _ctx); /*1001*/
                      return kk_std_core__list_unbox(_x5875, _ctx);
                    }
                    {
                      kk_box_t _box_x4588 = x19_3942.fst;
                      kk_box_t _box_x4589 = x19_3942.snd;
                      kk_std_core__list vs1 = kk_std_core__list_unbox(_box_x4588, NULL);
                      kk_stack__stack f1 = kk_stack__stack_unbox(_box_x4589, NULL);
                      kk_stack__stack_dup(f1);
                      kk_std_core__list_dup(vs1);
                      kk_std_core_types__tuple2__drop(x19_3942, _ctx);
                      kk_stack__stack t1;
                      kk_box_t _x5880 = kk_std_core_hnd__open_none2(kk_day5_new_execute_fun5881(_ctx), kk_stack__stack_box(x16_3933, _ctx), kk_std_core__list_box(vs1, _ctx), _ctx); /*1002*/
                      t1 = kk_stack__stack_unbox(_x5880, _ctx); /*stack/stack<string>*/
                      kk_std_core__list _x14_37940;
                      kk_box_t _x5885 = kk_std_core_hnd__open_none3(kk_day5_new_execute_fun5886(_ctx), kk_std_core__list_box(x18_3939, _ctx), kk_stack__stack_box(f1, _ctx), kk_integer_box(from_index9), _ctx); /*1003*/
                      _x14_37940 = kk_std_core__list_unbox(_x5885, _ctx); /*list<stack/stack<string>>*/
                      { // tailcall
                        kk_std_core__list _x5890;
                        kk_box_t _x5891 = kk_std_core_hnd__open_none3(kk_day5_new_execute_fun5892(_ctx), kk_std_core__list_box(_x14_37940, _ctx), kk_stack__stack_box(t1, _ctx), kk_integer_box(to_index8), _ctx); /*1003*/
                        _x5890 = kk_std_core__list_unbox(_x5891, _ctx); /*list<stack/stack<string>>*/
                        desc4 = _x5890;
                        ins = xx10;
                        goto kk__tailcall;
                      }
                    }
                  }
                }
              }
              {
                kk_std_core__list x20_3945;
                kk_integer_t _x5894 = kk_integer_dup(from_index9); /*int*/
                x20_3945 = kk_day5_remove(desc4, _x5894, _ctx); /*list<stack/stack<string>>*/
                if (kk_yielding(kk_context())) {
                  kk_std_core__list_drop(x20_3945, _ctx);
                  kk_box_t _x5895 = kk_std_core_hnd_yield_extend(kk_day5_new_execute_fun5896(from_index9, to_index8, x12_3921, x15_3930, x16_3933, xx10, _ctx), _ctx); /*1001*/
                  return kk_std_core__list_unbox(_x5895, _ctx);
                }
                {
                  kk_std_core__list x21_3948;
                  kk_integer_t _x5898 = kk_integer_dup(to_index8); /*int*/
                  x21_3948 = kk_day5_remove(x20_3945, _x5898, _ctx); /*list<stack/stack<string>>*/
                  if (kk_yielding(kk_context())) {
                    kk_std_core__list_drop(x21_3948, _ctx);
                    kk_box_t _x5899 = kk_std_core_hnd_yield_extend(kk_day5_new_execute_fun5900(from_index9, to_index8, x12_3921, x15_3930, x16_3933, xx10, _ctx), _ctx); /*1001*/
                    return kk_std_core__list_unbox(_x5899, _ctx);
                  }
                  {
                    kk_std_core_types__tuple2_ x22_3951 = kk_stack__lift803_pop_n(x15_3930, x12_3921, kk_std_core__new_Nil(_ctx), _ctx); /*(list<string>, stack/stack<string>)*/;
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__tuple2__drop(x22_3951, _ctx);
                      kk_box_t _x5902 = kk_std_core_hnd_yield_extend(kk_day5_new_execute_fun5903(from_index9, to_index8, x16_3933, x21_3948, xx10, _ctx), _ctx); /*1001*/
                      return kk_std_core__list_unbox(_x5902, _ctx);
                    }
                    {
                      kk_box_t _box_x4631 = x22_3951.fst;
                      kk_box_t _box_x4632 = x22_3951.snd;
                      kk_std_core__list vs00 = kk_std_core__list_unbox(_box_x4631, NULL);
                      kk_stack__stack f00 = kk_stack__stack_unbox(_box_x4632, NULL);
                      kk_stack__stack_dup(f00);
                      kk_std_core__list_dup(vs00);
                      kk_std_core_types__tuple2__drop(x22_3951, _ctx);
                      kk_stack__stack t00;
                      kk_box_t _x5907 = kk_std_core_hnd__open_none2(kk_day5_new_execute_fun5908(_ctx), kk_stack__stack_box(x16_3933, _ctx), kk_std_core__list_box(vs00, _ctx), _ctx); /*1002*/
                      t00 = kk_stack__stack_unbox(_x5907, _ctx); /*stack/stack<string>*/
                      kk_std_core__list _x17_38020;
                      kk_box_t _x5912 = kk_std_core_hnd__open_none3(kk_day5_new_execute_fun5913(_ctx), kk_std_core__list_box(x21_3948, _ctx), kk_stack__stack_box(t00, _ctx), kk_integer_box(to_index8), _ctx); /*1003*/
                      _x17_38020 = kk_std_core__list_unbox(_x5912, _ctx); /*list<stack/stack<string>>*/
                      { // tailcall
                        kk_std_core__list _x5917;
                        kk_box_t _x5918 = kk_std_core_hnd__open_none3(kk_day5_new_execute_fun5919(_ctx), kk_std_core__list_box(_x17_38020, _ctx), kk_stack__stack_box(f00, _ctx), kk_integer_box(from_index9), _ctx); /*1003*/
                        _x5917 = kk_std_core__list_unbox(_x5918, _ctx); /*list<stack/stack<string>>*/
                        desc4 = _x5917;
                        ins = xx10;
                        goto kk__tailcall;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
 
// monadic lift

kk_std_core__list kk_day5__mlift3853_op(kk_std_core_types__ctail _acc, kk_std_core__list _ctail_3655, kk_std_core__list _y_3701, kk_context_t* _ctx) { /* forall<a> (ctail<list<list<a>>>, list<list<a>>, list<list<a>>) -> <exn,div> list<list<a>> */ 
  kk_box_t* _b_4712_4709 = (kk_box_t*)((&kk_std_core__as_Cons(_ctail_3655)->tail)); /*cfield<list<list<2505>>>*/;
  kk_std_core_types__ctail _x5921 = kk_ctail_link(_acc,(kk_std_core__list_box(_ctail_3655, _ctx)),_b_4712_4709); /*ctail<0>*/
  return kk_day5__ctail_transpose(_y_3701, _x5921, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3854_op_fun5922__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3854_op_fun5922(kk_function_t _fself, kk_box_t _b_4718, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3854_op_fun5922(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3854_op_fun5922, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3854_op_fun5922(kk_function_t _fself, kk_box_t _b_4718, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5923;
  kk_std_core__list _x5924 = kk_std_core__list_unbox(_b_4718, _ctx); /*list<2505>*/
  _x5923 = kk_std_core_tail_1(_x5924, _ctx); /*list<1001>*/
  return kk_std_core__list_box(_x5923, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3854_op_fun5925__t {
  struct kk_function_s _base;
  kk_std_core__list _ctail_3653;
  kk_std_core__list _ctail_3654;
  kk_std_core_types__ctail _acc0;
};
static kk_std_core__list kk_day5__mlift3854_op_fun5925(kk_function_t _fself, kk_std_core__list _y_37010, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3854_op_fun5925(kk_std_core__list _ctail_3653, kk_std_core__list _ctail_3654, kk_std_core_types__ctail _acc0, kk_context_t* _ctx) {
  struct kk_day5__mlift3854_op_fun5925__t* _self = kk_function_alloc_as(struct kk_day5__mlift3854_op_fun5925__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3854_op_fun5925, kk_context());
  _self->_ctail_3653 = _ctail_3653;
  _self->_ctail_3654 = _ctail_3654;
  _self->_acc0 = _acc0;
  return &_self->_base;
}

static kk_std_core__list kk_day5__mlift3854_op_fun5925(kk_function_t _fself, kk_std_core__list _y_37010, kk_context_t* _ctx) {
  struct kk_day5__mlift3854_op_fun5925__t* _self = kk_function_as(struct kk_day5__mlift3854_op_fun5925__t*, _fself);
  kk_std_core__list _ctail_3653 = _self->_ctail_3653; /* list<2505> */
  kk_std_core__list _ctail_3654 = _self->_ctail_3654; /* list<list<2505>> */
  kk_std_core_types__ctail _acc0 = _self->_acc0; /* ctail<list<list<2505>>> */
  kk_drop_match(_self, {kk_std_core__list_dup(_ctail_3653);kk_std_core__list_dup(_ctail_3654);kk_std_core_types__ctail_dup(_acc0);}, {}, _ctx)
  kk_std_core__list _x5926 = kk_std_core__new_Cons(kk_reuse_null, kk_std_core__list_box(_ctail_3653, _ctx), _ctail_3654, _ctx); /*list<1009>*/
  return kk_day5__mlift3853_op(_acc0, _x5926, _y_37010, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3854_op_fun5928__t {
  struct kk_function_s _base;
  kk_function_t next_3955;
};
static kk_box_t kk_day5__mlift3854_op_fun5928(kk_function_t _fself, kk_box_t _b_4727, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3854_op_fun5928(kk_function_t next_3955, kk_context_t* _ctx) {
  struct kk_day5__mlift3854_op_fun5928__t* _self = kk_function_alloc_as(struct kk_day5__mlift3854_op_fun5928__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3854_op_fun5928, kk_context());
  _self->next_3955 = next_3955;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3854_op_fun5928(kk_function_t _fself, kk_box_t _b_4727, kk_context_t* _ctx) {
  struct kk_day5__mlift3854_op_fun5928__t* _self = kk_function_as(struct kk_day5__mlift3854_op_fun5928__t*, _fself);
  kk_function_t next_3955 = _self->next_3955; /* (list<list<2505>>) -> <exn,div> list<list<2505>> */
  kk_drop_match(_self, {kk_function_dup(next_3955);}, {}, _ctx)
  kk_std_core__list _x5929;
  kk_std_core__list _x5930 = kk_std_core__list_unbox(_b_4727, _ctx); /*list<list<2505>>*/
  _x5929 = kk_function_call(kk_std_core__list, (kk_function_t, kk_std_core__list, kk_context_t*), next_3955, (next_3955, _x5930, _ctx)); /*list<list<2505>>*/
  return kk_std_core__list_box(_x5929, _ctx);
}

kk_std_core__list kk_day5__mlift3854_op(kk_std_core_types__ctail _acc0, kk_std_core__list ls, kk_std_core__list _ctail_3653, kk_context_t* _ctx) { /* forall<a> (ctail<list<list<a>>>, ls : list<list<a>>, list<a>) -> <exn,div> list<list<a>> */ 
  kk_std_core__list _ctail_3654 = kk_std_core__list_hole(); /*list<list<2505>>*/;
  kk_std_core__list x_3954 = kk_std_core_map_5(ls, kk_day5__new_mlift3854_op_fun5922(_ctx), _ctx); /*list<list<2505>>*/;
  kk_function_t next_3955 = kk_day5__new_mlift3854_op_fun5925(_ctail_3653, _ctail_3654, _acc0, _ctx); /*(list<list<2505>>) -> <exn,div> list<list<2505>>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3954, _ctx);
    kk_box_t _x5927 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3854_op_fun5928(next_3955, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x5927, _ctx);
  }
  {
    return kk_function_call(kk_std_core__list, (kk_function_t, kk_std_core__list, kk_context_t*), next_3955, (next_3955, x_3954, _ctx));
  }
}


// lift anonymous function
struct kk_day5__ctail_transpose_fun5936__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__ctail_transpose_fun5936(kk_function_t _fself, kk_box_t _b_4736, kk_context_t* _ctx);
static kk_function_t kk_day5__new_ctail_transpose_fun5936(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__ctail_transpose_fun5936, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__ctail_transpose_fun5936(kk_function_t _fself, kk_box_t _b_4736, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x5937;
  kk_std_core__list _x5938 = kk_std_core__list_unbox(_b_4736, _ctx); /*list<2505>*/
  _x5937 = kk_std_core_head_1(_x5938, _ctx); /*maybe<1001>*/
  return kk_std_core_unjust(_x5937, _ctx);
}


// lift anonymous function
struct kk_day5__ctail_transpose_fun5940__t {
  struct kk_function_s _base;
  kk_std_core__list ls0;
  kk_std_core_types__ctail _acc1;
};
static kk_box_t kk_day5__ctail_transpose_fun5940(kk_function_t _fself, kk_box_t _b_4741, kk_context_t* _ctx);
static kk_function_t kk_day5__new_ctail_transpose_fun5940(kk_std_core__list ls0, kk_std_core_types__ctail _acc1, kk_context_t* _ctx) {
  struct kk_day5__ctail_transpose_fun5940__t* _self = kk_function_alloc_as(struct kk_day5__ctail_transpose_fun5940__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__ctail_transpose_fun5940, kk_context());
  _self->ls0 = ls0;
  _self->_acc1 = _acc1;
  return &_self->_base;
}

static kk_box_t kk_day5__ctail_transpose_fun5940(kk_function_t _fself, kk_box_t _b_4741, kk_context_t* _ctx) {
  struct kk_day5__ctail_transpose_fun5940__t* _self = kk_function_as(struct kk_day5__ctail_transpose_fun5940__t*, _fself);
  kk_std_core__list ls0 = _self->ls0; /* list<list<2505>> */
  kk_std_core_types__ctail _acc1 = _self->_acc1; /* ctail<list<list<2505>>> */
  kk_drop_match(_self, {kk_std_core__list_dup(ls0);kk_std_core_types__ctail_dup(_acc1);}, {}, _ctx)
  kk_std_core__list _ctail_4772_36530 = kk_std_core__list_unbox(_b_4741, _ctx); /*list<2505>*/;
  kk_std_core__list _x5941 = kk_day5__mlift3854_op(_acc1, ls0, _ctail_4772_36530, _ctx); /*list<list<2505>>*/
  return kk_std_core__list_box(_x5941, _ctx);
}


// lift anonymous function
struct kk_day5__ctail_transpose_fun5942__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__ctail_transpose_fun5942(kk_function_t _fself, kk_box_t _b_4748, kk_context_t* _ctx);
static kk_function_t kk_day5__new_ctail_transpose_fun5942(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__ctail_transpose_fun5942, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__ctail_transpose_fun5942(kk_function_t _fself, kk_box_t _b_4748, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5943;
  kk_std_core__list _x5944 = kk_std_core__list_unbox(_b_4748, _ctx); /*list<2505>*/
  _x5943 = kk_std_core_tail_1(_x5944, _ctx); /*list<1001>*/
  return kk_std_core__list_box(_x5943, _ctx);
}


// lift anonymous function
struct kk_day5__ctail_transpose_fun5946__t {
  struct kk_function_s _base;
  kk_std_core__list _ctail_36551;
  kk_std_core_types__ctail _acc1;
};
static kk_box_t kk_day5__ctail_transpose_fun5946(kk_function_t _fself, kk_box_t _b_4753, kk_context_t* _ctx);
static kk_function_t kk_day5__new_ctail_transpose_fun5946(kk_std_core__list _ctail_36551, kk_std_core_types__ctail _acc1, kk_context_t* _ctx) {
  struct kk_day5__ctail_transpose_fun5946__t* _self = kk_function_alloc_as(struct kk_day5__ctail_transpose_fun5946__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__ctail_transpose_fun5946, kk_context());
  _self->_ctail_36551 = _ctail_36551;
  _self->_acc1 = _acc1;
  return &_self->_base;
}

static kk_box_t kk_day5__ctail_transpose_fun5946(kk_function_t _fself, kk_box_t _b_4753, kk_context_t* _ctx) {
  struct kk_day5__ctail_transpose_fun5946__t* _self = kk_function_as(struct kk_day5__ctail_transpose_fun5946__t*, _fself);
  kk_std_core__list _ctail_36551 = _self->_ctail_36551; /* list<list<2505>> */
  kk_std_core_types__ctail _acc1 = _self->_acc1; /* ctail<list<list<2505>>> */
  kk_drop_match(_self, {kk_std_core__list_dup(_ctail_36551);kk_std_core_types__ctail_dup(_acc1);}, {}, _ctx)
  kk_std_core__list _y_4773_37011 = kk_std_core__list_unbox(_b_4753, _ctx); /*list<list<2505>>*/;
  kk_std_core__list _x5947 = kk_day5__mlift3853_op(_acc1, _ctail_36551, _y_4773_37011, _ctx); /*list<list<2505>>*/
  return kk_std_core__list_box(_x5947, _ctx);
}

kk_std_core__list kk_day5__ctail_transpose(kk_std_core__list ls0, kk_std_core_types__ctail _acc1, kk_context_t* _ctx) { /* forall<a> (ls : list<list<a>>, ctail<list<list<a>>>) -> <exn,div> list<list<a>> */ 
  kk__tailcall: ;
  if (kk_std_core__is_Nil(ls0)) {
    kk_box_t _x5931 = kk_ctail_resolve(_acc1,(kk_std_core__list_box(kk_std_core__new_Nil(_ctx), _ctx))); /*-1*/
    return kk_std_core__list_unbox(_x5931, _ctx);
  }
  {
    struct kk_std_core_Cons* _con5932 = kk_std_core__as_Cons(ls0);
    kk_box_t _box_x4731 = _con5932->head;
    kk_std_core__list _pat2 = _con5932->tail;
    kk_std_core__list _pat10 = kk_std_core__list_unbox(_box_x4731, NULL);
    if (kk_std_core__is_Nil(_pat10)) {
      if (kk_likely(kk_std_core__list_is_unique(ls0))) {
        kk_std_core__list_drop(_pat2, _ctx);
        kk_box_drop(_box_x4731, _ctx);
        kk_std_core__list_free(ls0, _ctx);
      }
      else {
        kk_std_core__list_decref(ls0, _ctx);
      }
      kk_box_t _x5934 = kk_ctail_resolve(_acc1,(kk_std_core__list_box(kk_std_core__new_Nil(_ctx), _ctx))); /*-1*/
      return kk_std_core__list_unbox(_x5934, _ctx);
    }
  }
  {
    kk_std_core__list x1_3956;
    kk_std_core__list _x5935 = kk_std_core__list_dup(ls0); /*list<list<2505>>*/
    x1_3956 = kk_std_core_map_5(_x5935, kk_day5__new_ctail_transpose_fun5936(_ctx), _ctx); /*list<2505>*/
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x1_3956, _ctx);
      kk_box_t _x5939 = kk_std_core_hnd_yield_extend(kk_day5__new_ctail_transpose_fun5940(ls0, _acc1, _ctx), _ctx); /*1001*/
      return kk_std_core__list_unbox(_x5939, _ctx);
    }
    {
      kk_std_core__list _ctail_36540 = kk_std_core__list_hole(); /*list<list<2505>>*/;
      kk_std_core__list _ctail_36551 = kk_std_core__new_Cons(kk_reuse_null, kk_std_core__list_box(x1_3956, _ctx), _ctail_36540, _ctx); /*list<list<2505>>*/;
      kk_std_core__list x3_3959 = kk_std_core_map_5(ls0, kk_day5__new_ctail_transpose_fun5942(_ctx), _ctx); /*list<list<2505>>*/;
      if (kk_yielding(kk_context())) {
        kk_std_core__list_drop(x3_3959, _ctx);
        kk_box_t _x5945 = kk_std_core_hnd_yield_extend(kk_day5__new_ctail_transpose_fun5946(_ctail_36551, _acc1, _ctx), _ctx); /*1001*/
        return kk_std_core__list_unbox(_x5945, _ctx);
      }
      {
        kk_box_t* _b_4768_4759 = (kk_box_t*)((&kk_std_core__as_Cons(_ctail_36551)->tail)); /*cfield<list<list<2505>>>*/;
        { // tailcall
          kk_std_core_types__ctail _x5948 = kk_ctail_link(_acc1,(kk_std_core__list_box(_ctail_36551, _ctx)),_b_4768_4759); /*ctail<0>*/
          ls0 = x3_3959;
          _acc1 = _x5948;
          goto kk__tailcall;
        }
      }
    }
  }
}

kk_std_core__list kk_day5_transpose(kk_std_core__list ls1, kk_context_t* _ctx) { /* forall<a> (ls : list<list<a>>) -> <exn,div> list<list<a>> */ 
  kk_std_core_types__ctail _x5949 = kk_ctail_nil(); /*ctail<0>*/
  return kk_day5__ctail_transpose(ls1, _x5949, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3856_parse_desc_fun5950__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3856_parse_desc_fun5950(kk_function_t _fself, kk_box_t _b_4784, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3856_parse_desc_fun5950(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3856_parse_desc_fun5950, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5__mlift3856_parse_desc_fun5951__t {
  struct kk_function_s _base;
};
static bool kk_day5__mlift3856_parse_desc_fun5951(kk_function_t _fself, kk_box_t _b_4776, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3856_parse_desc_fun5951(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3856_parse_desc_fun5951, _ctx)
  return kk_function_dup(_fself);
}

static bool kk_day5__mlift3856_parse_desc_fun5951(kk_function_t _fself, kk_box_t _b_4776, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5952 = kk_string_unbox(_b_4776); /*string*/
  kk_string_t _x5953;
  kk_define_string_literal(, _s5954, 1, "x")
  _x5953 = kk_string_dup(_s5954); /*string*/
  return kk_string_is_neq(_x5952,_x5953,kk_context());
}


// lift anonymous function
struct kk_day5__mlift3856_parse_desc_fun5957__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3856_parse_desc_fun5957(kk_function_t _fself, kk_box_t _b_4781, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3856_parse_desc_fun5957(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3856_parse_desc_fun5957, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3856_parse_desc_fun5957(kk_function_t _fself, kk_box_t _b_4781, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_stack__stack _x5958;
  kk_std_core__list _x5959 = kk_std_core__list_unbox(_b_4781, _ctx); /*list<string>*/
  _x5958 = kk_day5__mlift3855_parse_desc(_x5959, _ctx); /*stack/stack<string>*/
  return kk_stack__stack_box(_x5958, _ctx);
}
static kk_box_t kk_day5__mlift3856_parse_desc_fun5950(kk_function_t _fself, kk_box_t _b_4784, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list x0_4788 = kk_std_core__list_unbox(_b_4784, _ctx); /*list<string>*/;
  kk_std_core__list x_3962 = kk_std_core_filter(x0_4788, kk_day5__new_mlift3856_parse_desc_fun5951(_ctx), _ctx); /*list<string>*/;
  kk_stack__stack _x5955;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3962, _ctx);
    kk_box_t _x5956 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3856_parse_desc_fun5957(_ctx), _ctx); /*1001*/
    _x5955 = kk_stack__stack_unbox(_x5956, _ctx); /*stack/stack<string>*/
  }
  else {
    _x5955 = kk_stack_from_list(x_3962, _ctx); /*stack/stack<string>*/
  }
  return kk_stack__stack_box(_x5955, _ctx);
}

kk_std_core__list kk_day5__mlift3856_parse_desc(kk_std_core__list _y_3706, kk_context_t* _ctx) { /* (list<list<string>>) -> <exn,div> list<stack/stack<string>> */ 
  return kk_std_core_map_5(_y_3706, kk_day5__new_mlift3856_parse_desc_fun5950(_ctx), _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3857_parse_desc_fun5961__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3857_parse_desc_fun5961(kk_function_t _fself, kk_box_t _b_4790, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3857_parse_desc_fun5961(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3857_parse_desc_fun5961, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3857_parse_desc_fun5961(kk_function_t _fself, kk_box_t _b_4790, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5962;
  kk_std_core__list _x5963 = kk_std_core__list_unbox(_b_4790, _ctx); /*list<list<string>>*/
  _x5962 = kk_day5__mlift3856_parse_desc(_x5963, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5962, _ctx);
}

kk_std_core__list kk_day5__mlift3857_parse_desc(kk_std_core__list _y_3705, kk_context_t* _ctx) { /* (list<list<string>>) -> <div,exn> list<stack/stack<string>> */ 
  kk_std_core__list desc = kk_std_core_init(_y_3705, _ctx); /*list<list<string>>*/;
  kk_std_core__list x_3964 = kk_day5_transpose(desc, _ctx); /*list<list<string>>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3964, _ctx);
    kk_box_t _x5960 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3857_parse_desc_fun5961(_ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x5960, _ctx);
  }
  {
    return kk_day5__mlift3856_parse_desc(x_3964, _ctx);
  }
}


// lift anonymous function
struct kk_day5_parse_desc_fun5964__t {
  struct kk_function_s _base;
};
static bool kk_day5_parse_desc_fun5964(kk_function_t _fself, kk_box_t _b_4797, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_desc_fun5964(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_desc_fun5964, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5_parse_desc_fun5966__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_parse_desc_fun5966(kk_function_t _fself, kk_box_t _b_4794, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_desc_fun5966(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_desc_fun5966, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_parse_desc_fun5966(kk_function_t _fself, kk_box_t _b_4794, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x5967;
  bool _match_5511 = kk_bool_unbox(_b_4794); /*bool*/;
  if (_match_5511) {
    _x5967 = false; /*bool*/
  }
  else {
    _x5967 = true; /*bool*/
  }
  return kk_bool_box(_x5967);
}
static bool kk_day5_parse_desc_fun5964(kk_function_t _fself, kk_box_t _b_4797, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x1_3808;
  kk_std_core__list _brw_5512 = kk_std_core__list_unbox(_b_4797, _ctx); /*list<string>*/;
  bool _brw_5513 = kk_std_core_is_nil(_brw_5512, _ctx); /*bool*/;
  kk_std_core__list_drop(_brw_5512, _ctx);
  _x1_3808 = _brw_5513; /*bool*/
  kk_box_t _x5965 = kk_std_core_hnd__open_none1(kk_day5_new_parse_desc_fun5966(_ctx), kk_bool_box(_x1_3808), _ctx); /*1001*/
  return kk_bool_unbox(_x5965);
}


// lift anonymous function
struct kk_day5_parse_desc_fun5969__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_parse_desc_fun5969(kk_function_t _fself, kk_box_t _b_4805, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_desc_fun5969(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_desc_fun5969, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_parse_desc_fun5969(kk_function_t _fself, kk_box_t _b_4805, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5970;
  kk_std_core__list _x5971 = kk_std_core__list_unbox(_b_4805, _ctx); /*list<list<string>>*/
  _x5970 = kk_day5__mlift3857_parse_desc(_x5971, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5970, _ctx);
}


// lift anonymous function
struct kk_day5_parse_desc_fun5973__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_parse_desc_fun5973(kk_function_t _fself, kk_box_t _b_4807, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_desc_fun5973(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_desc_fun5973, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_parse_desc_fun5973(kk_function_t _fself, kk_box_t _b_4807, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x5974;
  kk_std_core__list _x5975 = kk_std_core__list_unbox(_b_4807, _ctx); /*list<list<string>>*/
  _x5974 = kk_day5__mlift3856_parse_desc(_x5975, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x5974, _ctx);
}


// lift anonymous function
struct kk_day5_parse_desc_fun5976__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_parse_desc_fun5976(kk_function_t _fself, kk_box_t _b_4818, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_desc_fun5976(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_desc_fun5976, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5_parse_desc_fun5977__t {
  struct kk_function_s _base;
};
static bool kk_day5_parse_desc_fun5977(kk_function_t _fself, kk_box_t _b_4810, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_desc_fun5977(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_desc_fun5977, _ctx)
  return kk_function_dup(_fself);
}

static bool kk_day5_parse_desc_fun5977(kk_function_t _fself, kk_box_t _b_4810, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5978 = kk_string_unbox(_b_4810); /*string*/
  kk_string_t _x5979;
  kk_define_string_literal(, _s5980, 1, "x")
  _x5979 = kk_string_dup(_s5980); /*string*/
  return kk_string_is_neq(_x5978,_x5979,kk_context());
}


// lift anonymous function
struct kk_day5_parse_desc_fun5983__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_parse_desc_fun5983(kk_function_t _fself, kk_box_t _b_4815, kk_context_t* _ctx);
static kk_function_t kk_day5_new_parse_desc_fun5983(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_parse_desc_fun5983, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_parse_desc_fun5983(kk_function_t _fself, kk_box_t _b_4815, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_stack__stack _x5984;
  kk_std_core__list _x5985 = kk_std_core__list_unbox(_b_4815, _ctx); /*list<string>*/
  _x5984 = kk_day5__mlift3855_parse_desc(_x5985, _ctx); /*stack/stack<string>*/
  return kk_stack__stack_box(_x5984, _ctx);
}
static kk_box_t kk_day5_parse_desc_fun5976(kk_function_t _fself, kk_box_t _b_4818, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list x00_4824 = kk_std_core__list_unbox(_b_4818, _ctx); /*list<string>*/;
  kk_std_core__list x2_3972 = kk_std_core_filter(x00_4824, kk_day5_new_parse_desc_fun5977(_ctx), _ctx); /*list<string>*/;
  kk_stack__stack _x5981;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x2_3972, _ctx);
    kk_box_t _x5982 = kk_std_core_hnd_yield_extend(kk_day5_new_parse_desc_fun5983(_ctx), _ctx); /*1001*/
    _x5981 = kk_stack__stack_unbox(_x5982, _ctx); /*stack/stack<string>*/
  }
  else {
    _x5981 = kk_stack_from_list(x2_3972, _ctx); /*stack/stack<string>*/
  }
  return kk_stack__stack_box(_x5981, _ctx);
}

kk_std_core__list kk_day5_parse_desc(kk_std_core__list lexbuf, kk_context_t* _ctx) { /* (lexbuf : list<list<string>>) -> pure list<stack/stack<string>> */ 
  kk_std_core__list x_3966 = kk_std_core_take_while(lexbuf, kk_day5_new_parse_desc_fun5964(_ctx), _ctx); /*list<list<string>>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3966, _ctx);
    kk_box_t _x5968 = kk_std_core_hnd_yield_extend(kk_day5_new_parse_desc_fun5969(_ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x5968, _ctx);
  }
  {
    kk_std_core__list desc = kk_std_core_init(x_3966, _ctx); /*list<list<string>>*/;
    kk_std_core__list x1_3969 = kk_day5_transpose(desc, _ctx); /*list<list<string>>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x1_3969, _ctx);
      kk_box_t _x5972 = kk_std_core_hnd_yield_extend(kk_day5_new_parse_desc_fun5973(_ctx), _ctx); /*1001*/
      return kk_std_core__list_unbox(_x5972, _ctx);
    }
    {
      return kk_std_core_map_5(x1_3969, kk_day5_new_parse_desc_fun5976(_ctx), _ctx);
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3859_main_fun5987__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3859_main_fun5987(kk_function_t _fself, kk_box_t _b_4832, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3859_main_fun5987(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3859_main_fun5987, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5__mlift3859_main_fun5991__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3859_main_fun5991(kk_function_t _fself, kk_box_t _b_4829, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3859_main_fun5991(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3859_main_fun5991, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3859_main_fun5991(kk_function_t _fself, kk_box_t _b_4829, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x5992;
  kk_stack__stack _x5993 = kk_stack__stack_unbox(_b_4829, _ctx); /*stack/stack<string>*/
  _x5992 = kk_stack_show(_x5993, _ctx); /*string*/
  return kk_string_box(_x5992);
}
static kk_box_t kk_day5__mlift3859_main_fun5987(kk_function_t _fself, kk_box_t _b_4832, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x5988 = kk_Unit;
  kk_string_t _x5989;
  kk_box_t _x5990 = kk_std_core_hnd__open_none1(kk_day5__new_mlift3859_main_fun5991(_ctx), _b_4832, _ctx); /*1001*/
  _x5989 = kk_string_unbox(_x5990); /*string*/
  kk_std_core_printsln(_x5989, _ctx);
  return kk_unit_box(_x5988);
}


// lift anonymous function
struct kk_day5__mlift3859_main_fun5995__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3859_main_fun5995(kk_function_t _fself, kk_box_t _b_4839, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3859_main_fun5995(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3859_main_fun5995, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3859_main_fun5995(kk_function_t _fself, kk_box_t _b_4839, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x5996 = kk_Unit;
  kk_std_core__list _x5997 = kk_std_core__list_unbox(_b_4839, _ctx); /*list<()>*/
  kk_day5__mlift3858_main(_x5997, _ctx);
  return kk_unit_box(_x5996);
}

kk_unit_t kk_day5__mlift3859_main(kk_std_core__list _y_3716, kk_context_t* _ctx) { /* (list<stack/stack<string>>) -> pure () */ 
  kk_std_core__list x_3974 = kk_std_core_map_5(_y_3716, kk_day5__new_mlift3859_main_fun5987(_ctx), _ctx); /*list<()>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3974, _ctx);
    kk_box_t _x5994 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3859_main_fun5995(_ctx), _ctx); /*1001*/
    kk_unit_unbox(_x5994); return kk_Unit;
  }
  {
    kk_std_core_types__maybe _b_4842_4840 = kk_std_core_head_1(x_3974, _ctx); /*maybe<()>*/;
    kk_box_t _x5998 = kk_std_core_unjust(_b_4842_4840, _ctx); /*1001*/
    kk_unit_unbox(_x5998); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3860_main_fun6000__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3860_main_fun6000(kk_function_t _fself, kk_box_t _b_4844, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3860_main_fun6000(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3860_main_fun6000, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3860_main_fun6000(kk_function_t _fself, kk_box_t _b_4844, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x6001 = kk_Unit;
  kk_std_core__list _x6002 = kk_std_core__list_unbox(_b_4844, _ctx); /*list<stack/stack<string>>*/
  kk_day5__mlift3859_main(_x6002, _ctx);
  return kk_unit_box(_x6001);
}

kk_unit_t kk_day5__mlift3860_main(kk_std_core__list description, kk_std_core__list instructions, kk_std_core__list wild__, kk_context_t* _ctx) { /* (description : list<stack/stack<string>>, instructions : list<list<int>>, wild_ : list<()>) -> <console,div,exn,fsys> () */ 
  kk_std_core__list_drop(wild__, _ctx);
  kk_std_core__list x_3976 = kk_day5_execute(description, instructions, _ctx); /*list<stack/stack<string>>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3976, _ctx);
    kk_box_t _x5999 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3860_main_fun6000(_ctx), _ctx); /*1001*/
    kk_unit_unbox(_x5999); return kk_Unit;
  }
  {
    kk_day5__mlift3859_main(x_3976, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3861_main_fun6004__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3861_main_fun6004(kk_function_t _fself, kk_box_t _b_4851, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3861_main_fun6004(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3861_main_fun6004, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5__mlift3861_main_fun6008__t {
  struct kk_function_s _base;
};
static kk_string_t kk_day5__mlift3861_main_fun6008(kk_function_t _fself, kk_box_t _b_4848, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3861_main_fun6008(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3861_main_fun6008, _ctx)
  return kk_function_dup(_fself);
}

static kk_string_t kk_day5__mlift3861_main_fun6008(kk_function_t _fself, kk_box_t _b_4848, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x6009 = kk_integer_unbox(_b_4848); /*int*/
  return kk_std_core_show(_x6009, _ctx);
}
static kk_box_t kk_day5__mlift3861_main_fun6004(kk_function_t _fself, kk_box_t _b_4851, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x6005 = kk_Unit;
  kk_string_t _x6006;
  kk_std_core__list _x6007 = kk_std_core__list_unbox(_b_4851, _ctx); /*list<int>*/
  _x6006 = kk_std_core_show_list(_x6007, kk_day5__new_mlift3861_main_fun6008(_ctx), _ctx); /*string*/
  kk_std_core_printsln(_x6006, _ctx);
  return kk_unit_box(_x6005);
}


// lift anonymous function
struct kk_day5__mlift3861_main_fun6011__t {
  struct kk_function_s _base;
  kk_std_core__list description;
  kk_std_core__list instructions;
};
static kk_box_t kk_day5__mlift3861_main_fun6011(kk_function_t _fself, kk_box_t _b_4858, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3861_main_fun6011(kk_std_core__list description, kk_std_core__list instructions, kk_context_t* _ctx) {
  struct kk_day5__mlift3861_main_fun6011__t* _self = kk_function_alloc_as(struct kk_day5__mlift3861_main_fun6011__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3861_main_fun6011, kk_context());
  _self->description = description;
  _self->instructions = instructions;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3861_main_fun6011(kk_function_t _fself, kk_box_t _b_4858, kk_context_t* _ctx) {
  struct kk_day5__mlift3861_main_fun6011__t* _self = kk_function_as(struct kk_day5__mlift3861_main_fun6011__t*, _fself);
  kk_std_core__list description = _self->description; /* list<stack/stack<string>> */
  kk_std_core__list instructions = _self->instructions; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(description);kk_std_core__list_dup(instructions);}, {}, _ctx)
  kk_std_core__list wild___4860 = kk_std_core__list_unbox(_b_4858, _ctx); /*list<()>*/;
  kk_unit_t _x6012 = kk_Unit;
  kk_day5__mlift3860_main(description, instructions, wild___4860, _ctx);
  return kk_unit_box(_x6012);
}

kk_unit_t kk_day5__mlift3861_main(kk_std_core__list description, kk_std_core__list instructions, kk_context_t* _ctx) { /* (description : list<stack/stack<string>>, instructions : list<list<int>>) -> exn () */ 
  kk_std_core__list x_3978;
  kk_std_core__list _x6003 = kk_std_core__list_dup(instructions); /*list<list<int>>*/
  x_3978 = kk_std_core_map_5(_x6003, kk_day5__new_mlift3861_main_fun6004(_ctx), _ctx); /*list<()>*/
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3978, _ctx);
    kk_box_t _x6010 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3861_main_fun6011(description, instructions, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x6010); return kk_Unit;
  }
  {
    kk_day5__mlift3860_main(description, instructions, x_3978, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3862_main_fun6014__t {
  struct kk_function_s _base;
  kk_std_core__list description;
};
static kk_box_t kk_day5__mlift3862_main_fun6014(kk_function_t _fself, kk_box_t _b_4862, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3862_main_fun6014(kk_std_core__list description, kk_context_t* _ctx) {
  struct kk_day5__mlift3862_main_fun6014__t* _self = kk_function_alloc_as(struct kk_day5__mlift3862_main_fun6014__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3862_main_fun6014, kk_context());
  _self->description = description;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3862_main_fun6014(kk_function_t _fself, kk_box_t _b_4862, kk_context_t* _ctx) {
  struct kk_day5__mlift3862_main_fun6014__t* _self = kk_function_as(struct kk_day5__mlift3862_main_fun6014__t*, _fself);
  kk_std_core__list description = _self->description; /* list<stack/stack<string>> */
  kk_drop_match(_self, {kk_std_core__list_dup(description);}, {}, _ctx)
  kk_std_core__list instructions_4864 = kk_std_core__list_unbox(_b_4862, _ctx); /*list<list<int>>*/;
  kk_unit_t _x6015 = kk_Unit;
  kk_day5__mlift3861_main(description, instructions_4864, _ctx);
  return kk_unit_box(_x6015);
}

kk_unit_t kk_day5__mlift3862_main(kk_std_core__list lexed, kk_std_core__list description, kk_context_t* _ctx) { /* (lexed : list<list<string>>, description : list<stack/stack<string>>) -> pure () */ 
  kk_std_core__list x_3980 = kk_day5_parse_instrs(lexed, _ctx); /*list<list<int>>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3980, _ctx);
    kk_box_t _x6013 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3862_main_fun6014(description, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x6013); return kk_Unit;
  }
  {
    kk_day5__mlift3861_main(description, x_3980, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3863_main_fun6018__t {
  struct kk_function_s _base;
  kk_std_core__list lexed;
};
static kk_box_t kk_day5__mlift3863_main_fun6018(kk_function_t _fself, kk_box_t _b_4866, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3863_main_fun6018(kk_std_core__list lexed, kk_context_t* _ctx) {
  struct kk_day5__mlift3863_main_fun6018__t* _self = kk_function_alloc_as(struct kk_day5__mlift3863_main_fun6018__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3863_main_fun6018, kk_context());
  _self->lexed = lexed;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3863_main_fun6018(kk_function_t _fself, kk_box_t _b_4866, kk_context_t* _ctx) {
  struct kk_day5__mlift3863_main_fun6018__t* _self = kk_function_as(struct kk_day5__mlift3863_main_fun6018__t*, _fself);
  kk_std_core__list lexed = _self->lexed; /* list<list<string>> */
  kk_drop_match(_self, {kk_std_core__list_dup(lexed);}, {}, _ctx)
  kk_std_core__list description_4868 = kk_std_core__list_unbox(_b_4866, _ctx); /*list<stack/stack<string>>*/;
  kk_unit_t _x6019 = kk_Unit;
  kk_day5__mlift3862_main(lexed, description_4868, _ctx);
  return kk_unit_box(_x6019);
}

kk_unit_t kk_day5__mlift3863_main(kk_std_core__list lexed, kk_context_t* _ctx) { /* (lexed : list<list<string>>) -> <console,div,exn,fsys> () */ 
  kk_std_core__list x_3982;
  kk_std_core__list _x6016 = kk_std_core__list_dup(lexed); /*list<list<string>>*/
  x_3982 = kk_day5_parse_desc(_x6016, _ctx); /*list<stack/stack<string>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3982, _ctx);
    kk_box_t _x6017 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3863_main_fun6018(lexed, _ctx), _ctx); /*1001*/
    kk_unit_unbox(_x6017); return kk_Unit;
  }
  {
    kk_day5__mlift3862_main(lexed, x_3982, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3864_main_fun6035__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3864_main_fun6035(kk_function_t _fself, kk_box_t _b_4871, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3864_main_fun6035(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3864_main_fun6035, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3864_main_fun6035(kk_function_t _fself, kk_box_t _b_4871, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_vector_t v_17126;
  kk_string_t _x6036 = kk_string_unbox(_b_4871); /*string*/
  kk_string_t _x6037;
  kk_define_string_literal(, _s6038, 1, "\n")
  _x6037 = kk_string_dup(_s6038); /*string*/
  v_17126 = kk_string_splitv(_x6036,_x6037,kk_context()); /*vector<string>*/
  kk_std_core__list _x6039 = kk_std_core_vlist(v_17126, kk_std_core_types__new_None(_ctx), _ctx); /*list<1001>*/
  return kk_std_core__list_box(_x6039, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3864_main_fun6040__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3864_main_fun6040(kk_function_t _fself, kk_box_t _b_4882, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3864_main_fun6040(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3864_main_fun6040, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5__mlift3864_main_fun6042__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3864_main_fun6042(kk_function_t _fself, kk_box_t _b_4875, kk_box_t _b_4876, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3864_main_fun6042(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3864_main_fun6042, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3864_main_fun6042(kk_function_t _fself, kk_box_t _b_4875, kk_box_t _b_4876, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_vector_t v_17122;
  kk_string_t _x6043 = kk_string_unbox(_b_4875); /*string*/
  kk_string_t _x6044 = kk_string_unbox(_b_4876); /*string*/
  v_17122 = kk_string_splitv(_x6043,_x6044,kk_context()); /*vector<string>*/
  kk_std_core__list _x6045 = kk_std_core_vlist(v_17122, kk_std_core_types__new_None(_ctx), _ctx); /*list<1001>*/
  return kk_std_core__list_box(_x6045, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3864_main_fun6050__t {
  struct kk_function_s _base;
};
static bool kk_day5__mlift3864_main_fun6050(kk_function_t _fself, kk_box_t _b_4879, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3864_main_fun6050(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3864_main_fun6050, _ctx)
  return kk_function_dup(_fself);
}

static bool kk_day5__mlift3864_main_fun6050(kk_function_t _fself, kk_box_t _b_4879, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x6051 = kk_string_unbox(_b_4879); /*string*/
  kk_string_t _x6052 = kk_string_empty(); /*string*/
  return kk_string_is_neq(_x6051,_x6052,kk_context());
}
static kk_box_t kk_day5__mlift3864_main_fun6040(kk_function_t _fself, kk_box_t _b_4882, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _b_4887_4877;
  kk_box_t _x6041;
  kk_box_t _x6046;
  kk_string_t _x6047;
  kk_define_string_literal(, _s6048, 1, " ")
  _x6047 = kk_string_dup(_s6048); /*string*/
  _x6046 = kk_string_box(_x6047); /*1001*/
  _x6041 = kk_std_core_hnd__open_none2(kk_day5__new_mlift3864_main_fun6042(_ctx), _b_4882, _x6046, _ctx); /*1002*/
  _b_4887_4877 = kk_std_core__list_unbox(_x6041, _ctx); /*list<string>*/
  kk_std_core__list _x6049 = kk_std_core_filter(_b_4887_4877, kk_day5__new_mlift3864_main_fun6050(_ctx), _ctx); /*list<1001>*/
  return kk_std_core__list_box(_x6049, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3864_main_fun6055__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3864_main_fun6055(kk_function_t _fself, kk_box_t _b_4897, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3864_main_fun6055(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3864_main_fun6055, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3864_main_fun6055(kk_function_t _fself, kk_box_t _b_4897, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x6056 = kk_Unit;
  kk_std_core__list _x6057 = kk_std_core__list_unbox(_b_4897, _ctx); /*list<list<string>>*/
  kk_day5__mlift3863_main(_x6057, _ctx);
  return kk_unit_box(_x6056);
}

kk_unit_t kk_day5__mlift3864_main(kk_string_t contents, kk_context_t* _ctx) { /* (contents : string) -> <exn,fsys> () */ 
  kk_string_t _x10_3810;
  kk_string_t _x6020;
  kk_string_t _x6021;
  kk_string_t _x6022;
  kk_define_string_literal(, _s6023, 4, "    ")
  _x6022 = kk_string_dup(_s6023); /*string*/
  kk_string_t _x6024;
  kk_define_string_literal(, _s6025, 3, " x ")
  _x6024 = kk_string_dup(_s6025); /*string*/
  _x6021 = kk_string_replace_all(contents,_x6022,_x6024,kk_context()); /*string*/
  kk_string_t _x6026;
  kk_define_string_literal(, _s6027, 1, "[")
  _x6026 = kk_string_dup(_s6027); /*string*/
  kk_string_t _x6028;
  kk_define_string_literal(, _s6029, 1, " ")
  _x6028 = kk_string_dup(_s6029); /*string*/
  _x6020 = kk_string_replace_all(_x6021,_x6026,_x6028,kk_context()); /*string*/
  kk_string_t _x6030;
  kk_define_string_literal(, _s6031, 1, "]")
  _x6030 = kk_string_dup(_s6031); /*string*/
  kk_string_t _x6032;
  kk_define_string_literal(, _s6033, 1, " ")
  _x6032 = kk_string_dup(_s6033); /*string*/
  _x10_3810 = kk_string_replace_all(_x6020,_x6030,_x6032,kk_context()); /*string*/
  kk_std_core__list _b_4883_4880;
  kk_box_t _x6034 = kk_std_core_hnd__open_none1(kk_day5__new_mlift3864_main_fun6035(_ctx), kk_string_box(_x10_3810), _ctx); /*1001*/
  _b_4883_4880 = kk_std_core__list_unbox(_x6034, _ctx); /*list<string>*/
  kk_std_core__list x_3984 = kk_std_core_map_5(_b_4883_4880, kk_day5__new_mlift3864_main_fun6040(_ctx), _ctx); /*list<list<string>>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_3984, _ctx);
    kk_box_t _x6054 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3864_main_fun6055(_ctx), _ctx); /*1001*/
    kk_unit_unbox(_x6054); return kk_Unit;
  }
  {
    kk_day5__mlift3863_main(x_3984, _ctx); return kk_Unit;
  }
}


// lift anonymous function
struct kk_day5_main_fun6060__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_main_fun6060(kk_function_t _fself, kk_box_t _b_4902, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6060(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_main_fun6060, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_main_fun6060(kk_function_t _fself, kk_box_t _b_4902, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x6061;
  kk_string_t _x6062 = kk_string_unbox(_b_4902); /*string*/
  _x6061 = kk_std_os_path_path(_x6062, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x6061, _ctx);
}


// lift anonymous function
struct kk_day5_main_fun6067__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_main_fun6067(kk_function_t _fself, kk_box_t _b_4906, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6067(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_main_fun6067, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_main_fun6067(kk_function_t _fself, kk_box_t _b_4906, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x6068 = kk_Unit;
  kk_string_t _x6069 = kk_string_unbox(_b_4906); /*string*/
  kk_day5__mlift3864_main(_x6069, _ctx);
  return kk_unit_box(_x6068);
}


// lift anonymous function
struct kk_day5_main_fun6085__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_main_fun6085(kk_function_t _fself, kk_box_t _b_4909, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6085(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_main_fun6085, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_main_fun6085(kk_function_t _fself, kk_box_t _b_4909, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_vector_t v_17126;
  kk_string_t _x6086 = kk_string_unbox(_b_4909); /*string*/
  kk_string_t _x6087;
  kk_define_string_literal(, _s6088, 1, "\n")
  _x6087 = kk_string_dup(_s6088); /*string*/
  v_17126 = kk_string_splitv(_x6086,_x6087,kk_context()); /*vector<string>*/
  kk_std_core__list _x6089 = kk_std_core_vlist(v_17126, kk_std_core_types__new_None(_ctx), _ctx); /*list<1001>*/
  return kk_std_core__list_box(_x6089, _ctx);
}


// lift anonymous function
struct kk_day5_main_fun6090__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_main_fun6090(kk_function_t _fself, kk_box_t _b_4920, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6090(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_main_fun6090, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5_main_fun6092__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_main_fun6092(kk_function_t _fself, kk_box_t _b_4913, kk_box_t _b_4914, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6092(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_main_fun6092, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_main_fun6092(kk_function_t _fself, kk_box_t _b_4913, kk_box_t _b_4914, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_vector_t v_17122;
  kk_string_t _x6093 = kk_string_unbox(_b_4913); /*string*/
  kk_string_t _x6094 = kk_string_unbox(_b_4914); /*string*/
  v_17122 = kk_string_splitv(_x6093,_x6094,kk_context()); /*vector<string>*/
  kk_std_core__list _x6095 = kk_std_core_vlist(v_17122, kk_std_core_types__new_None(_ctx), _ctx); /*list<1001>*/
  return kk_std_core__list_box(_x6095, _ctx);
}


// lift anonymous function
struct kk_day5_main_fun6100__t {
  struct kk_function_s _base;
};
static bool kk_day5_main_fun6100(kk_function_t _fself, kk_box_t _b_4917, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6100(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_main_fun6100, _ctx)
  return kk_function_dup(_fself);
}

static bool kk_day5_main_fun6100(kk_function_t _fself, kk_box_t _b_4917, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x6101 = kk_string_unbox(_b_4917); /*string*/
  kk_string_t _x6102 = kk_string_empty(); /*string*/
  return kk_string_is_neq(_x6101,_x6102,kk_context());
}
static kk_box_t kk_day5_main_fun6090(kk_function_t _fself, kk_box_t _b_4920, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _b_4925_4915;
  kk_box_t _x6091;
  kk_box_t _x6096;
  kk_string_t _x6097;
  kk_define_string_literal(, _s6098, 1, " ")
  _x6097 = kk_string_dup(_s6098); /*string*/
  _x6096 = kk_string_box(_x6097); /*1001*/
  _x6091 = kk_std_core_hnd__open_none2(kk_day5_new_main_fun6092(_ctx), _b_4920, _x6096, _ctx); /*1002*/
  _b_4925_4915 = kk_std_core__list_unbox(_x6091, _ctx); /*list<string>*/
  kk_std_core__list _x6099 = kk_std_core_filter(_b_4925_4915, kk_day5_new_main_fun6100(_ctx), _ctx); /*list<1001>*/
  return kk_std_core__list_box(_x6099, _ctx);
}


// lift anonymous function
struct kk_day5_main_fun6105__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_main_fun6105(kk_function_t _fself, kk_box_t _b_4935, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6105(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_main_fun6105, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_main_fun6105(kk_function_t _fself, kk_box_t _b_4935, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x6106 = kk_Unit;
  kk_std_core__list _x6107 = kk_std_core__list_unbox(_b_4935, _ctx); /*list<list<string>>*/
  kk_day5__mlift3863_main(_x6107, _ctx);
  return kk_unit_box(_x6106);
}


// lift anonymous function
struct kk_day5_main_fun6110__t {
  struct kk_function_s _base;
  kk_std_core__list x0_3989;
};
static kk_box_t kk_day5_main_fun6110(kk_function_t _fself, kk_box_t _b_4937, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6110(kk_std_core__list x0_3989, kk_context_t* _ctx) {
  struct kk_day5_main_fun6110__t* _self = kk_function_alloc_as(struct kk_day5_main_fun6110__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_main_fun6110, kk_context());
  _self->x0_3989 = x0_3989;
  return &_self->_base;
}

static kk_box_t kk_day5_main_fun6110(kk_function_t _fself, kk_box_t _b_4937, kk_context_t* _ctx) {
  struct kk_day5_main_fun6110__t* _self = kk_function_as(struct kk_day5_main_fun6110__t*, _fself);
  kk_std_core__list x0_3989 = _self->x0_3989; /* list<list<string>> */
  kk_drop_match(_self, {kk_std_core__list_dup(x0_3989);}, {}, _ctx)
  kk_std_core__list description_4978 = kk_std_core__list_unbox(_b_4937, _ctx); /*list<stack/stack<string>>*/;
  kk_unit_t _x6111 = kk_Unit;
  kk_day5__mlift3862_main(x0_3989, description_4978, _ctx);
  return kk_unit_box(_x6111);
}


// lift anonymous function
struct kk_day5_main_fun6113__t {
  struct kk_function_s _base;
  kk_std_core__list x2_3992;
};
static kk_box_t kk_day5_main_fun6113(kk_function_t _fself, kk_box_t _b_4939, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6113(kk_std_core__list x2_3992, kk_context_t* _ctx) {
  struct kk_day5_main_fun6113__t* _self = kk_function_alloc_as(struct kk_day5_main_fun6113__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_main_fun6113, kk_context());
  _self->x2_3992 = x2_3992;
  return &_self->_base;
}

static kk_box_t kk_day5_main_fun6113(kk_function_t _fself, kk_box_t _b_4939, kk_context_t* _ctx) {
  struct kk_day5_main_fun6113__t* _self = kk_function_as(struct kk_day5_main_fun6113__t*, _fself);
  kk_std_core__list x2_3992 = _self->x2_3992; /* list<stack/stack<string>> */
  kk_drop_match(_self, {kk_std_core__list_dup(x2_3992);}, {}, _ctx)
  kk_std_core__list instructions_4979 = kk_std_core__list_unbox(_b_4939, _ctx); /*list<list<int>>*/;
  kk_unit_t _x6114 = kk_Unit;
  kk_day5__mlift3861_main(x2_3992, instructions_4979, _ctx);
  return kk_unit_box(_x6114);
}


// lift anonymous function
struct kk_day5_main_fun6116__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_main_fun6116(kk_function_t _fself, kk_box_t _b_4945, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6116(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_main_fun6116, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5_main_fun6120__t {
  struct kk_function_s _base;
};
static kk_string_t kk_day5_main_fun6120(kk_function_t _fself, kk_box_t _b_4942, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6120(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_main_fun6120, _ctx)
  return kk_function_dup(_fself);
}

static kk_string_t kk_day5_main_fun6120(kk_function_t _fself, kk_box_t _b_4942, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x6121 = kk_integer_unbox(_b_4942); /*int*/
  return kk_std_core_show(_x6121, _ctx);
}
static kk_box_t kk_day5_main_fun6116(kk_function_t _fself, kk_box_t _b_4945, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x6117 = kk_Unit;
  kk_string_t _x6118;
  kk_std_core__list _x6119 = kk_std_core__list_unbox(_b_4945, _ctx); /*list<int>*/
  _x6118 = kk_std_core_show_list(_x6119, kk_day5_new_main_fun6120(_ctx), _ctx); /*string*/
  kk_std_core_printsln(_x6118, _ctx);
  return kk_unit_box(_x6117);
}


// lift anonymous function
struct kk_day5_main_fun6123__t {
  struct kk_function_s _base;
  kk_std_core__list x2_3992;
  kk_std_core__list x3_3995;
};
static kk_box_t kk_day5_main_fun6123(kk_function_t _fself, kk_box_t _b_4952, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6123(kk_std_core__list x2_3992, kk_std_core__list x3_3995, kk_context_t* _ctx) {
  struct kk_day5_main_fun6123__t* _self = kk_function_alloc_as(struct kk_day5_main_fun6123__t, 3, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_main_fun6123, kk_context());
  _self->x2_3992 = x2_3992;
  _self->x3_3995 = x3_3995;
  return &_self->_base;
}

static kk_box_t kk_day5_main_fun6123(kk_function_t _fself, kk_box_t _b_4952, kk_context_t* _ctx) {
  struct kk_day5_main_fun6123__t* _self = kk_function_as(struct kk_day5_main_fun6123__t*, _fself);
  kk_std_core__list x2_3992 = _self->x2_3992; /* list<stack/stack<string>> */
  kk_std_core__list x3_3995 = _self->x3_3995; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(x2_3992);kk_std_core__list_dup(x3_3995);}, {}, _ctx)
  kk_std_core__list wild___4980 = kk_std_core__list_unbox(_b_4952, _ctx); /*list<()>*/;
  kk_unit_t _x6124 = kk_Unit;
  kk_day5__mlift3860_main(x2_3992, x3_3995, wild___4980, _ctx);
  return kk_unit_box(_x6124);
}


// lift anonymous function
struct kk_day5_main_fun6126__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_main_fun6126(kk_function_t _fself, kk_box_t _b_4954, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6126(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_main_fun6126, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_main_fun6126(kk_function_t _fself, kk_box_t _b_4954, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x6127 = kk_Unit;
  kk_std_core__list _x6128 = kk_std_core__list_unbox(_b_4954, _ctx); /*list<stack/stack<string>>*/
  kk_day5__mlift3859_main(_x6128, _ctx);
  return kk_unit_box(_x6127);
}


// lift anonymous function
struct kk_day5_main_fun6129__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_main_fun6129(kk_function_t _fself, kk_box_t _b_4960, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6129(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_main_fun6129, _ctx)
  return kk_function_dup(_fself);
}



// lift anonymous function
struct kk_day5_main_fun6133__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_main_fun6133(kk_function_t _fself, kk_box_t _b_4957, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6133(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_main_fun6133, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_main_fun6133(kk_function_t _fself, kk_box_t _b_4957, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x6134;
  kk_stack__stack _x6135 = kk_stack__stack_unbox(_b_4957, _ctx); /*stack/stack<string>*/
  _x6134 = kk_stack_show(_x6135, _ctx); /*string*/
  return kk_string_box(_x6134);
}
static kk_box_t kk_day5_main_fun6129(kk_function_t _fself, kk_box_t _b_4960, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x6130 = kk_Unit;
  kk_string_t _x6131;
  kk_box_t _x6132 = kk_std_core_hnd__open_none1(kk_day5_new_main_fun6133(_ctx), _b_4960, _ctx); /*1001*/
  _x6131 = kk_string_unbox(_x6132); /*string*/
  kk_std_core_printsln(_x6131, _ctx);
  return kk_unit_box(_x6130);
}


// lift anonymous function
struct kk_day5_main_fun6137__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_main_fun6137(kk_function_t _fself, kk_box_t _b_4967, kk_context_t* _ctx);
static kk_function_t kk_day5_new_main_fun6137(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_main_fun6137, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_main_fun6137(kk_function_t _fself, kk_box_t _b_4967, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x6138 = kk_Unit;
  kk_std_core__list _x6139 = kk_std_core__list_unbox(_b_4967, _ctx); /*list<()>*/
  kk_day5__mlift3858_main(_x6139, _ctx);
  return kk_unit_box(_x6138);
}

kk_unit_t kk_day5_main(kk_context_t* _ctx) { /* () -> <pure,console,fsys> () */ 
  kk_string_t x_3986;
  kk_std_os_path__path _x6058;
  kk_box_t _x6059;
  kk_box_t _x6063;
  kk_string_t _x6064;
  kk_define_string_literal(, _s6065, 8, "data.txt")
  _x6064 = kk_string_dup(_s6065); /*string*/
  _x6063 = kk_string_box(_x6064); /*1000*/
  _x6059 = kk_std_core_hnd__open_none1(kk_day5_new_main_fun6060(_ctx), _x6063, _ctx); /*1001*/
  _x6058 = kk_std_os_path__path_unbox(_x6059, _ctx); /*std/os/path/path*/
  x_3986 = kk_std_os_file_read_text_file(_x6058, _ctx); /*string*/
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_3986, _ctx);
    kk_box_t _x6066 = kk_std_core_hnd_yield_extend(kk_day5_new_main_fun6067(_ctx), _ctx); /*1001*/
    kk_unit_unbox(_x6066); return kk_Unit;
  }
  {
    kk_string_t _x10_3810;
    kk_string_t _x6070;
    kk_string_t _x6071;
    kk_string_t _x6072;
    kk_define_string_literal(, _s6073, 4, "    ")
    _x6072 = kk_string_dup(_s6073); /*string*/
    kk_string_t _x6074;
    kk_define_string_literal(, _s6075, 3, " x ")
    _x6074 = kk_string_dup(_s6075); /*string*/
    _x6071 = kk_string_replace_all(x_3986,_x6072,_x6074,kk_context()); /*string*/
    kk_string_t _x6076;
    kk_define_string_literal(, _s6077, 1, "[")
    _x6076 = kk_string_dup(_s6077); /*string*/
    kk_string_t _x6078;
    kk_define_string_literal(, _s6079, 1, " ")
    _x6078 = kk_string_dup(_s6079); /*string*/
    _x6070 = kk_string_replace_all(_x6071,_x6076,_x6078,kk_context()); /*string*/
    kk_string_t _x6080;
    kk_define_string_literal(, _s6081, 1, "]")
    _x6080 = kk_string_dup(_s6081); /*string*/
    kk_string_t _x6082;
    kk_define_string_literal(, _s6083, 1, " ")
    _x6082 = kk_string_dup(_s6083); /*string*/
    _x10_3810 = kk_string_replace_all(_x6070,_x6080,_x6082,kk_context()); /*string*/
    kk_std_core__list _b_4921_4918;
    kk_box_t _x6084 = kk_std_core_hnd__open_none1(kk_day5_new_main_fun6085(_ctx), kk_string_box(_x10_3810), _ctx); /*1001*/
    _b_4921_4918 = kk_std_core__list_unbox(_x6084, _ctx); /*list<string>*/
    kk_std_core__list x0_3989 = kk_std_core_map_5(_b_4921_4918, kk_day5_new_main_fun6090(_ctx), _ctx); /*list<list<string>>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x0_3989, _ctx);
      kk_box_t _x6104 = kk_std_core_hnd_yield_extend(kk_day5_new_main_fun6105(_ctx), _ctx); /*1001*/
      kk_unit_unbox(_x6104); return kk_Unit;
    }
    {
      kk_std_core__list x2_3992;
      kk_std_core__list _x6108 = kk_std_core__list_dup(x0_3989); /*list<list<string>>*/
      x2_3992 = kk_day5_parse_desc(_x6108, _ctx); /*list<stack/stack<string>>*/
      if (kk_yielding(kk_context())) {
        kk_std_core__list_drop(x2_3992, _ctx);
        kk_box_t _x6109 = kk_std_core_hnd_yield_extend(kk_day5_new_main_fun6110(x0_3989, _ctx), _ctx); /*1001*/
        kk_unit_unbox(_x6109); return kk_Unit;
      }
      {
        kk_std_core__list x3_3995 = kk_day5_parse_instrs(x0_3989, _ctx); /*list<list<int>>*/;
        if (kk_yielding(kk_context())) {
          kk_std_core__list_drop(x3_3995, _ctx);
          kk_box_t _x6112 = kk_std_core_hnd_yield_extend(kk_day5_new_main_fun6113(x2_3992, _ctx), _ctx); /*1001*/
          kk_unit_unbox(_x6112); return kk_Unit;
        }
        {
          kk_std_core__list x4_3998;
          kk_std_core__list _x6115 = kk_std_core__list_dup(x3_3995); /*list<list<int>>*/
          x4_3998 = kk_std_core_map_5(_x6115, kk_day5_new_main_fun6116(_ctx), _ctx); /*list<()>*/
          kk_std_core__list_drop(x4_3998, _ctx);
          if (kk_yielding(kk_context())) {
            kk_box_t _x6122 = kk_std_core_hnd_yield_extend(kk_day5_new_main_fun6123(x2_3992, x3_3995, _ctx), _ctx); /*1001*/
            kk_unit_unbox(_x6122); return kk_Unit;
          }
          {
            kk_std_core__list x5_4001 = kk_day5_execute(x2_3992, x3_3995, _ctx); /*list<stack/stack<string>>*/;
            if (kk_yielding(kk_context())) {
              kk_std_core__list_drop(x5_4001, _ctx);
              kk_box_t _x6125 = kk_std_core_hnd_yield_extend(kk_day5_new_main_fun6126(_ctx), _ctx); /*1001*/
              kk_unit_unbox(_x6125); return kk_Unit;
            }
            {
              kk_std_core__list x6_4004 = kk_std_core_map_5(x5_4001, kk_day5_new_main_fun6129(_ctx), _ctx); /*list<()>*/;
              if (kk_yielding(kk_context())) {
                kk_std_core__list_drop(x6_4004, _ctx);
                kk_box_t _x6136 = kk_std_core_hnd_yield_extend(kk_day5_new_main_fun6137(_ctx), _ctx); /*1001*/
                kk_unit_unbox(_x6136); return kk_Unit;
              }
              {
                kk_std_core_types__maybe _b_4977_4968 = kk_std_core_head_1(x6_4004, _ctx); /*maybe<()>*/;
                kk_box_t _x6140 = kk_std_core_unjust(_b_4977_4968, _ctx); /*1001*/
                kk_unit_unbox(_x6140); return kk_Unit;
              }
            }
          }
        }
      }
    }
  }
}


// lift anonymous function
struct kk_day5__hmain_fun6141__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_day5__hmain_fun6141(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_day5__new_hmain_fun6141(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__hmain_fun6141, _ctx)
  return kk_function_dup(_fself);
}

static kk_unit_t kk_day5__hmain_fun6141(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_day5_main(_ctx);
}

kk_unit_t kk_day5__hmain(kk_context_t* _ctx) { /* () -> <console,div,fsys> () */ 
  kk_std_core__default_exn(kk_day5__new_hmain_fun6141(_ctx), _ctx); return kk_Unit;
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3865_op_fun6145__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3865_op_fun6145(kk_function_t _fself, kk_box_t _b_4988, kk_box_t _b_4989, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3865_op_fun6145(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3865_op_fun6145, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3865_op_fun6145(kk_function_t _fself, kk_box_t _b_4988, kk_box_t _b_4989, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_stack__stack _x6146;
  kk_stack__stack _x6147 = kk_stack__stack_unbox(_b_4988, _ctx); /*stack/stack<string>*/
  _x6146 = kk_stack_push(_x6147, _b_4989, _ctx); /*stack/stack<1000>*/
  return kk_stack__stack_box(_x6146, _ctx);
}

kk_std_core_types__tuple2_ kk_day5__mlift3865_op(kk_integer_t n, kk_stack__stack to, kk_std_core_types__tuple2_ _y_3719, kk_context_t* _ctx) { /* (n : int, to : stack/stack<string>, (string, stack/stack<string>)) -> exn (stack/stack<string>, stack/stack<string>) */ 
  {
    kk_box_t _box_x4981 = _y_3719.fst;
    kk_box_t _box_x4982 = _y_3719.snd;
    kk_string_t p = kk_string_unbox(_box_x4981);
    kk_stack__stack f = kk_stack__stack_unbox(_box_x4982, NULL);
    kk_stack__stack_dup(f);
    kk_string_dup(p);
    kk_std_core_types__tuple2__drop(_y_3719, _ctx);
    kk_stack__stack t;
    kk_box_t _x6144 = kk_std_core_hnd__open_none2(kk_day5__new_mlift3865_op_fun6145(_ctx), kk_stack__stack_box(to, _ctx), kk_string_box(p), _ctx); /*1002*/
    t = kk_stack__stack_unbox(_x6144, _ctx); /*stack/stack<string>*/
    kk_integer_t _x6148 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
    return kk_day5__lift3648_execute0(_x6148, f, t, _ctx);
  }
}
 
// lifted local: execute0, pop-n


// lift anonymous function
struct kk_day5__lift3648_execute0_fun6150__t {
  struct kk_function_s _base;
  kk_integer_t n0;
  kk_stack__stack to0;
};
static kk_box_t kk_day5__lift3648_execute0_fun6150(kk_function_t _fself, kk_box_t _b_4998, kk_context_t* _ctx);
static kk_function_t kk_day5__new_lift3648_execute0_fun6150(kk_integer_t n0, kk_stack__stack to0, kk_context_t* _ctx) {
  struct kk_day5__lift3648_execute0_fun6150__t* _self = kk_function_alloc_as(struct kk_day5__lift3648_execute0_fun6150__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__lift3648_execute0_fun6150, kk_context());
  _self->n0 = n0;
  _self->to0 = to0;
  return &_self->_base;
}

static kk_box_t kk_day5__lift3648_execute0_fun6150(kk_function_t _fself, kk_box_t _b_4998, kk_context_t* _ctx) {
  struct kk_day5__lift3648_execute0_fun6150__t* _self = kk_function_as(struct kk_day5__lift3648_execute0_fun6150__t*, _fself);
  kk_integer_t n0 = _self->n0; /* int */
  kk_stack__stack to0 = _self->to0; /* stack/stack<string> */
  kk_drop_match(_self, {kk_integer_dup(n0);kk_stack__stack_dup(to0);}, {}, _ctx)
  kk_std_core_types__tuple2_ _y_5016_37190 = kk_std_core_types__tuple2__unbox(_b_4998, _ctx); /*(string, stack/stack<string>)*/;
  kk_std_core_types__tuple2_ _x6151 = kk_day5__mlift3865_op(n0, to0, _y_5016_37190, _ctx); /*(stack/stack<string>, stack/stack<string>)*/
  return kk_std_core_types__tuple2__box(_x6151, _ctx);
}


// lift anonymous function
struct kk_day5__lift3648_execute0_fun6155__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__lift3648_execute0_fun6155(kk_function_t _fself, kk_box_t _b_5006, kk_box_t _b_5007, kk_context_t* _ctx);
static kk_function_t kk_day5__new_lift3648_execute0_fun6155(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__lift3648_execute0_fun6155, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__lift3648_execute0_fun6155(kk_function_t _fself, kk_box_t _b_5006, kk_box_t _b_5007, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_stack__stack _x6156;
  kk_stack__stack _x6157 = kk_stack__stack_unbox(_b_5006, _ctx); /*stack/stack<string>*/
  _x6156 = kk_stack_push(_x6157, _b_5007, _ctx); /*stack/stack<1000>*/
  return kk_stack__stack_box(_x6156, _ctx);
}

kk_std_core_types__tuple2_ kk_day5__lift3648_execute0(kk_integer_t n0, kk_stack__stack from, kk_stack__stack to0, kk_context_t* _ctx) { /* (n : int, from : stack/stack<string>, to : stack/stack<string>) -> <exn,div> (stack/stack<string>, stack/stack<string>) */ 
  kk__tailcall: ;
  bool _match_5493 = kk_integer_eq_borrow(n0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_5493) {
    kk_integer_drop(n0, _ctx);
    return kk_std_core_types__new_dash__lp__comma__rp_(kk_stack__stack_box(from, _ctx), kk_stack__stack_box(to0, _ctx), _ctx);
  }
  {
    kk_std_core_types__tuple2_ x_4007 = kk_stack_pop(from, _ctx); /*(string, stack/stack<string>)*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__tuple2__drop(x_4007, _ctx);
      kk_box_t _x6149 = kk_std_core_hnd_yield_extend(kk_day5__new_lift3648_execute0_fun6150(n0, to0, _ctx), _ctx); /*1001*/
      return kk_std_core_types__tuple2__unbox(_x6149, _ctx);
    }
    {
      kk_box_t _box_x4999 = x_4007.fst;
      kk_box_t _box_x5000 = x_4007.snd;
      kk_string_t p0 = kk_string_unbox(_box_x4999);
      kk_stack__stack f0 = kk_stack__stack_unbox(_box_x5000, NULL);
      kk_stack__stack_dup(f0);
      kk_string_dup(p0);
      kk_std_core_types__tuple2__drop(x_4007, _ctx);
      kk_stack__stack t0;
      kk_box_t _x6154 = kk_std_core_hnd__open_none2(kk_day5__new_lift3648_execute0_fun6155(_ctx), kk_stack__stack_box(to0, _ctx), kk_string_box(p0), _ctx); /*1002*/
      t0 = kk_stack__stack_unbox(_x6154, _ctx); /*stack/stack<string>*/
      { // tailcall
        kk_integer_t _x6158 = kk_integer_add_small_const(n0, -1, _ctx); /*int*/
        n0 = _x6158;
        from = f0;
        to0 = t0;
        goto kk__tailcall;
      }
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3866_execute0_fun6162__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3866_execute0_fun6162(kk_function_t _fself, kk_box_t _b_5026, kk_box_t _b_5027, kk_box_t _b_5028, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3866_execute0_fun6162(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3866_execute0_fun6162, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3866_execute0_fun6162(kk_function_t _fself, kk_box_t _b_5026, kk_box_t _b_5027, kk_box_t _b_5028, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6163;
  kk_std_core__list _x6164 = kk_std_core__list_unbox(_b_5026, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x6165 = kk_integer_unbox(_b_5028); /*int*/
  _x6163 = kk_day5_insert(_x6164, _b_5027, _x6165, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6163, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3866_execute0_fun6168__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3866_execute0_fun6168(kk_function_t _fself, kk_box_t _b_5043, kk_box_t _b_5044, kk_box_t _b_5045, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3866_execute0_fun6168(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3866_execute0_fun6168, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3866_execute0_fun6168(kk_function_t _fself, kk_box_t _b_5043, kk_box_t _b_5044, kk_box_t _b_5045, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6169;
  kk_std_core__list _b_5050_5036 = kk_std_core__list_unbox(_b_5043, _ctx); /*list<stack/stack<string>>*/;
  kk_stack__stack _b_5051_5037 = kk_stack__stack_unbox(_b_5044, _ctx); /*stack/stack<string>*/;
  kk_integer_t _b_5052_5038 = kk_integer_unbox(_b_5045); /*int*/;
  _x6169 = kk_day5_insert(_b_5050_5036, kk_stack__stack_box(_b_5051_5037, _ctx), _b_5052_5038, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6169, _ctx);
}

kk_std_core__list kk_day5__mlift3866_execute0(kk_std_core__list d, kk_integer_t from_index, kk_integer_t to_index, kk_std_core__list xx, kk_std_core_types__tuple2_ _y_3730, kk_context_t* _ctx) { /* (d : list<stack/stack<string>>, from-index : int, to-index : int, xx : list<list<int>>, (stack/stack<string>, stack/stack<string>)) -> <exn,div> list<stack/stack<string>> */ 
  {
    kk_box_t _box_x5017 = _y_3730.fst;
    kk_box_t _box_x5018 = _y_3730.snd;
    kk_stack__stack from1 = kk_stack__stack_unbox(_box_x5017, NULL);
    kk_stack__stack to1 = kk_stack__stack_unbox(_box_x5018, NULL);
    kk_stack__stack_dup(from1);
    kk_stack__stack_dup(to1);
    kk_std_core_types__tuple2__drop(_y_3730, _ctx);
    kk_std_core__list _x13_3824;
    kk_box_t _x6161 = kk_std_core_hnd__open_none3(kk_day5__new_mlift3866_execute0_fun6162(_ctx), kk_std_core__list_box(d, _ctx), kk_stack__stack_box(from1, _ctx), kk_integer_box(from_index), _ctx); /*1003*/
    _x13_3824 = kk_std_core__list_unbox(_x6161, _ctx); /*list<stack/stack<string>>*/
    kk_std_core__list _x6166;
    kk_box_t _x6167 = kk_std_core_hnd__open_none3(kk_day5__new_mlift3866_execute0_fun6168(_ctx), kk_std_core__list_box(_x13_3824, _ctx), kk_stack__stack_box(to1, _ctx), kk_integer_box(to_index), _ctx); /*1003*/
    _x6166 = kk_std_core__list_unbox(_x6167, _ctx); /*list<stack/stack<string>>*/
    return kk_day5_execute(_x6166, xx, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3867_execute0_fun6170__t {
  struct kk_function_s _base;
  kk_std_core__list d;
  kk_integer_t from_index;
  kk_integer_t to_index;
  kk_std_core__list xx;
};
static kk_std_core__list kk_day5__mlift3867_execute0_fun6170(kk_function_t _fself, kk_std_core_types__tuple2_ _y_3730, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3867_execute0_fun6170(kk_std_core__list d, kk_integer_t from_index, kk_integer_t to_index, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5__mlift3867_execute0_fun6170__t* _self = kk_function_alloc_as(struct kk_day5__mlift3867_execute0_fun6170__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3867_execute0_fun6170, kk_context());
  _self->d = d;
  _self->from_index = from_index;
  _self->to_index = to_index;
  _self->xx = xx;
  return &_self->_base;
}



// lift anonymous function
struct kk_day5__mlift3867_execute0_fun6174__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3867_execute0_fun6174(kk_function_t _fself, kk_box_t _b_5062, kk_box_t _b_5063, kk_box_t _b_5064, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3867_execute0_fun6174(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3867_execute0_fun6174, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3867_execute0_fun6174(kk_function_t _fself, kk_box_t _b_5062, kk_box_t _b_5063, kk_box_t _b_5064, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6175;
  kk_std_core__list _x6176 = kk_std_core__list_unbox(_b_5062, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x6177 = kk_integer_unbox(_b_5064); /*int*/
  _x6175 = kk_day5_insert(_x6176, _b_5063, _x6177, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6175, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3867_execute0_fun6180__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3867_execute0_fun6180(kk_function_t _fself, kk_box_t _b_5079, kk_box_t _b_5080, kk_box_t _b_5081, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3867_execute0_fun6180(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3867_execute0_fun6180, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3867_execute0_fun6180(kk_function_t _fself, kk_box_t _b_5079, kk_box_t _b_5080, kk_box_t _b_5081, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6181;
  kk_std_core__list _x6182 = kk_std_core__list_unbox(_b_5079, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x6183 = kk_integer_unbox(_b_5081); /*int*/
  _x6181 = kk_day5_insert(_x6182, _b_5080, _x6183, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6181, _ctx);
}
static kk_std_core__list kk_day5__mlift3867_execute0_fun6170(kk_function_t _fself, kk_std_core_types__tuple2_ _y_3730, kk_context_t* _ctx) {
  struct kk_day5__mlift3867_execute0_fun6170__t* _self = kk_function_as(struct kk_day5__mlift3867_execute0_fun6170__t*, _fself);
  kk_std_core__list d = _self->d; /* list<stack/stack<string>> */
  kk_integer_t from_index = _self->from_index; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(d);kk_integer_dup(from_index);kk_integer_dup(to_index);kk_std_core__list_dup(xx);}, {}, _ctx)
  {
    kk_box_t _box_x5053 = _y_3730.fst;
    kk_box_t _box_x5054 = _y_3730.snd;
    kk_stack__stack from1 = kk_stack__stack_unbox(_box_x5053, NULL);
    kk_stack__stack to1 = kk_stack__stack_unbox(_box_x5054, NULL);
    kk_stack__stack_dup(from1);
    kk_stack__stack_dup(to1);
    kk_std_core_types__tuple2__drop(_y_3730, _ctx);
    kk_std_core__list _x13_3824;
    kk_box_t _x6173 = kk_std_core_hnd__open_none3(kk_day5__new_mlift3867_execute0_fun6174(_ctx), kk_std_core__list_box(d, _ctx), kk_stack__stack_box(from1, _ctx), kk_integer_box(from_index), _ctx); /*1003*/
    _x13_3824 = kk_std_core__list_unbox(_x6173, _ctx); /*list<stack/stack<string>>*/
    kk_std_core__list _x6178;
    kk_box_t _x6179 = kk_std_core_hnd__open_none3(kk_day5__new_mlift3867_execute0_fun6180(_ctx), kk_std_core__list_box(_x13_3824, _ctx), kk_stack__stack_box(to1, _ctx), kk_integer_box(to_index), _ctx); /*1003*/
    _x6178 = kk_std_core__list_unbox(_x6179, _ctx); /*list<stack/stack<string>>*/
    return kk_day5_execute(_x6178, xx, _ctx);
  }
}


// lift anonymous function
struct kk_day5__mlift3867_execute0_fun6185__t {
  struct kk_function_s _base;
  kk_function_t next_4011;
};
static kk_box_t kk_day5__mlift3867_execute0_fun6185(kk_function_t _fself, kk_box_t _b_5090, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3867_execute0_fun6185(kk_function_t next_4011, kk_context_t* _ctx) {
  struct kk_day5__mlift3867_execute0_fun6185__t* _self = kk_function_alloc_as(struct kk_day5__mlift3867_execute0_fun6185__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3867_execute0_fun6185, kk_context());
  _self->next_4011 = next_4011;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3867_execute0_fun6185(kk_function_t _fself, kk_box_t _b_5090, kk_context_t* _ctx) {
  struct kk_day5__mlift3867_execute0_fun6185__t* _self = kk_function_as(struct kk_day5__mlift3867_execute0_fun6185__t*, _fself);
  kk_function_t next_4011 = _self->next_4011; /* ((stack/stack<string>, stack/stack<string>)) -> <exn,div> list<stack/stack<string>> */
  kk_drop_match(_self, {kk_function_dup(next_4011);}, {}, _ctx)
  kk_std_core__list _x6186;
  kk_std_core_types__tuple2_ _x6187 = kk_std_core_types__tuple2__unbox(_b_5090, _ctx); /*(stack/stack<string>, stack/stack<string>)*/
  _x6186 = kk_function_call(kk_std_core__list, (kk_function_t, kk_std_core_types__tuple2_, kk_context_t*), next_4011, (next_4011, _x6187, _ctx)); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6186, _ctx);
}

kk_std_core__list kk_day5__mlift3867_execute0(kk_integer_t from_index, kk_stack__stack from0, kk_integer_t quantity, kk_integer_t to_index, kk_stack__stack to0, kk_std_core__list xx, kk_std_core__list d, kk_context_t* _ctx) { /* (from-index : int, from0 : stack/stack<string>, quantity : int, to-index : int, to0 : stack/stack<string>, xx : list<list<int>>, d : list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 
  kk_std_core_types__tuple2_ x_4010 = kk_day5__lift3648_execute0(quantity, from0, to0, _ctx); /*(stack/stack<string>, stack/stack<string>)*/;
  kk_function_t next_4011 = kk_day5__new_mlift3867_execute0_fun6170(d, from_index, to_index, xx, _ctx); /*((stack/stack<string>, stack/stack<string>)) -> <exn,div> list<stack/stack<string>>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__tuple2__drop(x_4010, _ctx);
    kk_box_t _x6184 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3867_execute0_fun6185(next_4011, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x6184, _ctx);
  }
  {
    return kk_function_call(kk_std_core__list, (kk_function_t, kk_std_core_types__tuple2_, kk_context_t*), next_4011, (next_4011, x_4010, _ctx));
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3868_execute0_fun6190__t {
  struct kk_function_s _base;
  kk_integer_t from_index;
  kk_stack__stack from0;
  kk_integer_t quantity;
  kk_integer_t to_index;
  kk_stack__stack to0;
  kk_std_core__list xx;
};
static kk_box_t kk_day5__mlift3868_execute0_fun6190(kk_function_t _fself, kk_box_t _b_5093, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3868_execute0_fun6190(kk_integer_t from_index, kk_stack__stack from0, kk_integer_t quantity, kk_integer_t to_index, kk_stack__stack to0, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5__mlift3868_execute0_fun6190__t* _self = kk_function_alloc_as(struct kk_day5__mlift3868_execute0_fun6190__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3868_execute0_fun6190, kk_context());
  _self->from_index = from_index;
  _self->from0 = from0;
  _self->quantity = quantity;
  _self->to_index = to_index;
  _self->to0 = to0;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3868_execute0_fun6190(kk_function_t _fself, kk_box_t _b_5093, kk_context_t* _ctx) {
  struct kk_day5__mlift3868_execute0_fun6190__t* _self = kk_function_as(struct kk_day5__mlift3868_execute0_fun6190__t*, _fself);
  kk_integer_t from_index = _self->from_index; /* int */
  kk_stack__stack from0 = _self->from0; /* stack/stack<string> */
  kk_integer_t quantity = _self->quantity; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_stack__stack to0 = _self->to0; /* stack/stack<string> */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index);kk_stack__stack_dup(from0);kk_integer_dup(quantity);kk_integer_dup(to_index);kk_stack__stack_dup(to0);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_std_core__list d_5095 = kk_std_core__list_unbox(_b_5093, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x6191 = kk_day5__mlift3867_execute0(from_index, from0, quantity, to_index, to0, xx, d_5095, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6191, _ctx);
}

kk_std_core__list kk_day5__mlift3868_execute0(kk_integer_t from_index, kk_stack__stack from0, kk_integer_t quantity, kk_integer_t to_index, kk_stack__stack to0, kk_std_core__list xx, kk_std_core__list _y_3728, kk_context_t* _ctx) { /* (from-index : int, from0 : stack/stack<string>, quantity : int, to-index : int, to0 : stack/stack<string>, xx : list<list<int>>, list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 
  kk_std_core__list x_4017;
  kk_integer_t _x6188 = kk_integer_dup(from_index); /*int*/
  x_4017 = kk_day5_remove(_y_3728, _x6188, _ctx); /*list<stack/stack<string>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_4017, _ctx);
    kk_box_t _x6189 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3868_execute0_fun6190(from_index, from0, quantity, to_index, to0, xx, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x6189, _ctx);
  }
  {
    return kk_day5__mlift3867_execute0(from_index, from0, quantity, to_index, to0, xx, x_4017, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3869_execute0_fun6195__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3869_execute0_fun6195(kk_function_t _fself, kk_box_t _b_5105, kk_box_t _b_5106, kk_box_t _b_5107, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3869_execute0_fun6195(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3869_execute0_fun6195, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3869_execute0_fun6195(kk_function_t _fself, kk_box_t _b_5105, kk_box_t _b_5106, kk_box_t _b_5107, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6196;
  kk_std_core__list _x6197 = kk_std_core__list_unbox(_b_5105, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x6198 = kk_integer_unbox(_b_5107); /*int*/
  _x6196 = kk_day5_insert(_x6197, _b_5106, _x6198, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6196, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3869_execute0_fun6201__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3869_execute0_fun6201(kk_function_t _fself, kk_box_t _b_5122, kk_box_t _b_5123, kk_box_t _b_5124, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3869_execute0_fun6201(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3869_execute0_fun6201, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3869_execute0_fun6201(kk_function_t _fself, kk_box_t _b_5122, kk_box_t _b_5123, kk_box_t _b_5124, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6202;
  kk_std_core__list _b_5129_5115 = kk_std_core__list_unbox(_b_5122, _ctx); /*list<stack/stack<string>>*/;
  kk_stack__stack _b_5130_5116 = kk_stack__stack_unbox(_b_5123, _ctx); /*stack/stack<string>*/;
  kk_integer_t _b_5131_5117 = kk_integer_unbox(_b_5124); /*int*/;
  _x6202 = kk_day5_insert(_b_5129_5115, kk_stack__stack_box(_b_5130_5116, _ctx), _b_5131_5117, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6202, _ctx);
}

kk_std_core__list kk_day5__mlift3869_execute0(kk_std_core__list d0, kk_integer_t from_index, kk_integer_t to_index, kk_std_core__list xx, kk_std_core_types__tuple2_ _y_3735, kk_context_t* _ctx) { /* (d0 : list<stack/stack<string>>, from-index : int, to-index : int, xx : list<list<int>>, (stack/stack<string>, stack/stack<string>)) -> <exn,div> list<stack/stack<string>> */ 
  {
    kk_box_t _box_x5096 = _y_3735.fst;
    kk_box_t _box_x5097 = _y_3735.snd;
    kk_stack__stack from2 = kk_stack__stack_unbox(_box_x5096, NULL);
    kk_stack__stack to2 = kk_stack__stack_unbox(_box_x5097, NULL);
    kk_stack__stack_dup(from2);
    kk_stack__stack_dup(to2);
    kk_std_core_types__tuple2__drop(_y_3735, _ctx);
    kk_std_core__list _x15_3830;
    kk_box_t _x6194 = kk_std_core_hnd__open_none3(kk_day5__new_mlift3869_execute0_fun6195(_ctx), kk_std_core__list_box(d0, _ctx), kk_stack__stack_box(to2, _ctx), kk_integer_box(to_index), _ctx); /*1003*/
    _x15_3830 = kk_std_core__list_unbox(_x6194, _ctx); /*list<stack/stack<string>>*/
    kk_std_core__list _x6199;
    kk_box_t _x6200 = kk_std_core_hnd__open_none3(kk_day5__new_mlift3869_execute0_fun6201(_ctx), kk_std_core__list_box(_x15_3830, _ctx), kk_stack__stack_box(from2, _ctx), kk_integer_box(from_index), _ctx); /*1003*/
    _x6199 = kk_std_core__list_unbox(_x6200, _ctx); /*list<stack/stack<string>>*/
    return kk_day5_execute(_x6199, xx, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3870_execute0_fun6203__t {
  struct kk_function_s _base;
  kk_std_core__list d0;
  kk_integer_t from_index;
  kk_integer_t to_index;
  kk_std_core__list xx;
};
static kk_std_core__list kk_day5__mlift3870_execute0_fun6203(kk_function_t _fself, kk_std_core_types__tuple2_ _y_3735, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3870_execute0_fun6203(kk_std_core__list d0, kk_integer_t from_index, kk_integer_t to_index, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5__mlift3870_execute0_fun6203__t* _self = kk_function_alloc_as(struct kk_day5__mlift3870_execute0_fun6203__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3870_execute0_fun6203, kk_context());
  _self->d0 = d0;
  _self->from_index = from_index;
  _self->to_index = to_index;
  _self->xx = xx;
  return &_self->_base;
}



// lift anonymous function
struct kk_day5__mlift3870_execute0_fun6207__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3870_execute0_fun6207(kk_function_t _fself, kk_box_t _b_5141, kk_box_t _b_5142, kk_box_t _b_5143, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3870_execute0_fun6207(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3870_execute0_fun6207, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3870_execute0_fun6207(kk_function_t _fself, kk_box_t _b_5141, kk_box_t _b_5142, kk_box_t _b_5143, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6208;
  kk_std_core__list _x6209 = kk_std_core__list_unbox(_b_5141, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x6210 = kk_integer_unbox(_b_5143); /*int*/
  _x6208 = kk_day5_insert(_x6209, _b_5142, _x6210, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6208, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3870_execute0_fun6213__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3870_execute0_fun6213(kk_function_t _fself, kk_box_t _b_5158, kk_box_t _b_5159, kk_box_t _b_5160, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3870_execute0_fun6213(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3870_execute0_fun6213, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3870_execute0_fun6213(kk_function_t _fself, kk_box_t _b_5158, kk_box_t _b_5159, kk_box_t _b_5160, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6214;
  kk_std_core__list _x6215 = kk_std_core__list_unbox(_b_5158, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x6216 = kk_integer_unbox(_b_5160); /*int*/
  _x6214 = kk_day5_insert(_x6215, _b_5159, _x6216, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6214, _ctx);
}
static kk_std_core__list kk_day5__mlift3870_execute0_fun6203(kk_function_t _fself, kk_std_core_types__tuple2_ _y_3735, kk_context_t* _ctx) {
  struct kk_day5__mlift3870_execute0_fun6203__t* _self = kk_function_as(struct kk_day5__mlift3870_execute0_fun6203__t*, _fself);
  kk_std_core__list d0 = _self->d0; /* list<stack/stack<string>> */
  kk_integer_t from_index = _self->from_index; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(d0);kk_integer_dup(from_index);kk_integer_dup(to_index);kk_std_core__list_dup(xx);}, {}, _ctx)
  {
    kk_box_t _box_x5132 = _y_3735.fst;
    kk_box_t _box_x5133 = _y_3735.snd;
    kk_stack__stack from2 = kk_stack__stack_unbox(_box_x5132, NULL);
    kk_stack__stack to2 = kk_stack__stack_unbox(_box_x5133, NULL);
    kk_stack__stack_dup(from2);
    kk_stack__stack_dup(to2);
    kk_std_core_types__tuple2__drop(_y_3735, _ctx);
    kk_std_core__list _x15_3830;
    kk_box_t _x6206 = kk_std_core_hnd__open_none3(kk_day5__new_mlift3870_execute0_fun6207(_ctx), kk_std_core__list_box(d0, _ctx), kk_stack__stack_box(to2, _ctx), kk_integer_box(to_index), _ctx); /*1003*/
    _x15_3830 = kk_std_core__list_unbox(_x6206, _ctx); /*list<stack/stack<string>>*/
    kk_std_core__list _x6211;
    kk_box_t _x6212 = kk_std_core_hnd__open_none3(kk_day5__new_mlift3870_execute0_fun6213(_ctx), kk_std_core__list_box(_x15_3830, _ctx), kk_stack__stack_box(from2, _ctx), kk_integer_box(from_index), _ctx); /*1003*/
    _x6211 = kk_std_core__list_unbox(_x6212, _ctx); /*list<stack/stack<string>>*/
    return kk_day5_execute(_x6211, xx, _ctx);
  }
}


// lift anonymous function
struct kk_day5__mlift3870_execute0_fun6218__t {
  struct kk_function_s _base;
  kk_function_t next_4020;
};
static kk_box_t kk_day5__mlift3870_execute0_fun6218(kk_function_t _fself, kk_box_t _b_5169, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3870_execute0_fun6218(kk_function_t next_4020, kk_context_t* _ctx) {
  struct kk_day5__mlift3870_execute0_fun6218__t* _self = kk_function_alloc_as(struct kk_day5__mlift3870_execute0_fun6218__t, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3870_execute0_fun6218, kk_context());
  _self->next_4020 = next_4020;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3870_execute0_fun6218(kk_function_t _fself, kk_box_t _b_5169, kk_context_t* _ctx) {
  struct kk_day5__mlift3870_execute0_fun6218__t* _self = kk_function_as(struct kk_day5__mlift3870_execute0_fun6218__t*, _fself);
  kk_function_t next_4020 = _self->next_4020; /* ((stack/stack<string>, stack/stack<string>)) -> <exn,div> list<stack/stack<string>> */
  kk_drop_match(_self, {kk_function_dup(next_4020);}, {}, _ctx)
  kk_std_core__list _x6219;
  kk_std_core_types__tuple2_ _x6220 = kk_std_core_types__tuple2__unbox(_b_5169, _ctx); /*(stack/stack<string>, stack/stack<string>)*/
  _x6219 = kk_function_call(kk_std_core__list, (kk_function_t, kk_std_core_types__tuple2_, kk_context_t*), next_4020, (next_4020, _x6220, _ctx)); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6219, _ctx);
}

kk_std_core__list kk_day5__mlift3870_execute0(kk_integer_t from_index, kk_stack__stack from0, kk_integer_t quantity, kk_integer_t to_index, kk_stack__stack to0, kk_std_core__list xx, kk_std_core__list d0, kk_context_t* _ctx) { /* (from-index : int, from0 : stack/stack<string>, quantity : int, to-index : int, to0 : stack/stack<string>, xx : list<list<int>>, d0 : list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 
  kk_std_core_types__tuple2_ x_4019 = kk_day5__lift3648_execute0(quantity, from0, to0, _ctx); /*(stack/stack<string>, stack/stack<string>)*/;
  kk_function_t next_4020 = kk_day5__new_mlift3870_execute0_fun6203(d0, from_index, to_index, xx, _ctx); /*((stack/stack<string>, stack/stack<string>)) -> <exn,div> list<stack/stack<string>>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__tuple2__drop(x_4019, _ctx);
    kk_box_t _x6217 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3870_execute0_fun6218(next_4020, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x6217, _ctx);
  }
  {
    return kk_function_call(kk_std_core__list, (kk_function_t, kk_std_core_types__tuple2_, kk_context_t*), next_4020, (next_4020, x_4019, _ctx));
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3871_execute0_fun6223__t {
  struct kk_function_s _base;
  kk_integer_t from_index;
  kk_stack__stack from0;
  kk_integer_t quantity;
  kk_integer_t to_index;
  kk_stack__stack to0;
  kk_std_core__list xx;
};
static kk_box_t kk_day5__mlift3871_execute0_fun6223(kk_function_t _fself, kk_box_t _b_5172, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3871_execute0_fun6223(kk_integer_t from_index, kk_stack__stack from0, kk_integer_t quantity, kk_integer_t to_index, kk_stack__stack to0, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5__mlift3871_execute0_fun6223__t* _self = kk_function_alloc_as(struct kk_day5__mlift3871_execute0_fun6223__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3871_execute0_fun6223, kk_context());
  _self->from_index = from_index;
  _self->from0 = from0;
  _self->quantity = quantity;
  _self->to_index = to_index;
  _self->to0 = to0;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3871_execute0_fun6223(kk_function_t _fself, kk_box_t _b_5172, kk_context_t* _ctx) {
  struct kk_day5__mlift3871_execute0_fun6223__t* _self = kk_function_as(struct kk_day5__mlift3871_execute0_fun6223__t*, _fself);
  kk_integer_t from_index = _self->from_index; /* int */
  kk_stack__stack from0 = _self->from0; /* stack/stack<string> */
  kk_integer_t quantity = _self->quantity; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_stack__stack to0 = _self->to0; /* stack/stack<string> */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index);kk_stack__stack_dup(from0);kk_integer_dup(quantity);kk_integer_dup(to_index);kk_stack__stack_dup(to0);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_std_core__list d0_5174 = kk_std_core__list_unbox(_b_5172, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x6224 = kk_day5__mlift3870_execute0(from_index, from0, quantity, to_index, to0, xx, d0_5174, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6224, _ctx);
}

kk_std_core__list kk_day5__mlift3871_execute0(kk_integer_t from_index, kk_stack__stack from0, kk_integer_t quantity, kk_integer_t to_index, kk_stack__stack to0, kk_std_core__list xx, kk_std_core__list _y_3733, kk_context_t* _ctx) { /* (from-index : int, from0 : stack/stack<string>, quantity : int, to-index : int, to0 : stack/stack<string>, xx : list<list<int>>, list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 
  kk_std_core__list x_4026;
  kk_integer_t _x6221 = kk_integer_dup(to_index); /*int*/
  x_4026 = kk_day5_remove(_y_3733, _x6221, _ctx); /*list<stack/stack<string>>*/
  if (kk_yielding(kk_context())) {
    kk_std_core__list_drop(x_4026, _ctx);
    kk_box_t _x6222 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3871_execute0_fun6223(from_index, from0, quantity, to_index, to0, xx, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x6222, _ctx);
  }
  {
    return kk_day5__mlift3870_execute0(from_index, from0, quantity, to_index, to0, xx, x_4026, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3872_execute0_fun6227__t {
  struct kk_function_s _base;
  kk_integer_t from_index;
  kk_stack__stack from0;
  kk_integer_t quantity;
  kk_integer_t to_index;
  kk_stack__stack to0;
  kk_std_core__list xx;
};
static kk_box_t kk_day5__mlift3872_execute0_fun6227(kk_function_t _fself, kk_box_t _b_5176, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3872_execute0_fun6227(kk_integer_t from_index, kk_stack__stack from0, kk_integer_t quantity, kk_integer_t to_index, kk_stack__stack to0, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5__mlift3872_execute0_fun6227__t* _self = kk_function_alloc_as(struct kk_day5__mlift3872_execute0_fun6227__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3872_execute0_fun6227, kk_context());
  _self->from_index = from_index;
  _self->from0 = from0;
  _self->quantity = quantity;
  _self->to_index = to_index;
  _self->to0 = to0;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3872_execute0_fun6227(kk_function_t _fself, kk_box_t _b_5176, kk_context_t* _ctx) {
  struct kk_day5__mlift3872_execute0_fun6227__t* _self = kk_function_as(struct kk_day5__mlift3872_execute0_fun6227__t*, _fself);
  kk_integer_t from_index = _self->from_index; /* int */
  kk_stack__stack from0 = _self->from0; /* stack/stack<string> */
  kk_integer_t quantity = _self->quantity; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_stack__stack to0 = _self->to0; /* stack/stack<string> */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index);kk_stack__stack_dup(from0);kk_integer_dup(quantity);kk_integer_dup(to_index);kk_stack__stack_dup(to0);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_std_core__list _y_5181_3728 = kk_std_core__list_unbox(_b_5176, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x6228 = kk_day5__mlift3868_execute0(from_index, from0, quantity, to_index, to0, xx, _y_5181_3728, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6228, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3872_execute0_fun6231__t {
  struct kk_function_s _base;
  kk_integer_t from_index;
  kk_stack__stack from0;
  kk_integer_t quantity;
  kk_integer_t to_index;
  kk_stack__stack to0;
  kk_std_core__list xx;
};
static kk_box_t kk_day5__mlift3872_execute0_fun6231(kk_function_t _fself, kk_box_t _b_5178, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3872_execute0_fun6231(kk_integer_t from_index, kk_stack__stack from0, kk_integer_t quantity, kk_integer_t to_index, kk_stack__stack to0, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5__mlift3872_execute0_fun6231__t* _self = kk_function_alloc_as(struct kk_day5__mlift3872_execute0_fun6231__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3872_execute0_fun6231, kk_context());
  _self->from_index = from_index;
  _self->from0 = from0;
  _self->quantity = quantity;
  _self->to_index = to_index;
  _self->to0 = to0;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3872_execute0_fun6231(kk_function_t _fself, kk_box_t _b_5178, kk_context_t* _ctx) {
  struct kk_day5__mlift3872_execute0_fun6231__t* _self = kk_function_as(struct kk_day5__mlift3872_execute0_fun6231__t*, _fself);
  kk_integer_t from_index = _self->from_index; /* int */
  kk_stack__stack from0 = _self->from0; /* stack/stack<string> */
  kk_integer_t quantity = _self->quantity; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_stack__stack to0 = _self->to0; /* stack/stack<string> */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index);kk_stack__stack_dup(from0);kk_integer_dup(quantity);kk_integer_dup(to_index);kk_stack__stack_dup(to0);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_std_core__list _y_5182_3733 = kk_std_core__list_unbox(_b_5178, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x6232 = kk_day5__mlift3871_execute0(from_index, from0, quantity, to_index, to0, xx, _y_5182_3733, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6232, _ctx);
}

kk_std_core__list kk_day5__mlift3872_execute0(kk_std_core__list desc, kk_integer_t from_index, kk_stack__stack from0, kk_integer_t quantity, kk_integer_t to_index, kk_std_core__list xx, kk_stack__stack to0, kk_context_t* _ctx) { /* (desc : list<stack/stack<string>>, from-index : int, from0 : stack/stack<string>, quantity : int, to-index : int, xx : list<list<int>>, to0 : stack/stack<string>) -> exn list<stack/stack<string>> */ 
  bool _match_5486 = kk_integer_lt_borrow(from_index,to_index,kk_context()); /*bool*/;
  if (_match_5486) {
    kk_std_core__list x_4028;
    kk_integer_t _x6225 = kk_integer_dup(to_index); /*int*/
    x_4028 = kk_day5_remove(desc, _x6225, _ctx); /*list<stack/stack<string>>*/
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x_4028, _ctx);
      kk_box_t _x6226 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3872_execute0_fun6227(from_index, from0, quantity, to_index, to0, xx, _ctx), _ctx); /*1001*/
      return kk_std_core__list_unbox(_x6226, _ctx);
    }
    {
      return kk_day5__mlift3868_execute0(from_index, from0, quantity, to_index, to0, xx, x_4028, _ctx);
    }
  }
  {
    kk_std_core__list x0_4030;
    kk_integer_t _x6229 = kk_integer_dup(from_index); /*int*/
    x0_4030 = kk_day5_remove(desc, _x6229, _ctx); /*list<stack/stack<string>>*/
    if (kk_yielding(kk_context())) {
      kk_std_core__list_drop(x0_4030, _ctx);
      kk_box_t _x6230 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3872_execute0_fun6231(from_index, from0, quantity, to_index, to0, xx, _ctx), _ctx); /*1001*/
      return kk_std_core__list_unbox(_x6230, _ctx);
    }
    {
      return kk_day5__mlift3871_execute0(from_index, from0, quantity, to_index, to0, xx, x0_4030, _ctx);
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3873_execute0_fun6234__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3873_execute0_fun6234(kk_function_t _fself, kk_box_t _b_5186, kk_box_t _b_5187, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3873_execute0_fun6234(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3873_execute0_fun6234, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3873_execute0_fun6234(kk_function_t _fself, kk_box_t _b_5186, kk_box_t _b_5187, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6235;
  kk_std_core__list _x6236 = kk_std_core__list_unbox(_b_5186, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x6237 = kk_integer_unbox(_b_5187); /*int*/
  _x6235 = kk_day5_get(_x6236, _x6237, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x6235, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3873_execute0_fun6244__t {
  struct kk_function_s _base;
  kk_std_core__list desc;
  kk_integer_t from_index;
  kk_stack__stack from0;
  kk_integer_t quantity;
  kk_integer_t to_index;
  kk_std_core__list xx;
};
static kk_box_t kk_day5__mlift3873_execute0_fun6244(kk_function_t _fself, kk_box_t _b_5194, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3873_execute0_fun6244(kk_std_core__list desc, kk_integer_t from_index, kk_stack__stack from0, kk_integer_t quantity, kk_integer_t to_index, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5__mlift3873_execute0_fun6244__t* _self = kk_function_alloc_as(struct kk_day5__mlift3873_execute0_fun6244__t, 8, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3873_execute0_fun6244, kk_context());
  _self->desc = desc;
  _self->from_index = from_index;
  _self->from0 = from0;
  _self->quantity = quantity;
  _self->to_index = to_index;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3873_execute0_fun6244(kk_function_t _fself, kk_box_t _b_5194, kk_context_t* _ctx) {
  struct kk_day5__mlift3873_execute0_fun6244__t* _self = kk_function_as(struct kk_day5__mlift3873_execute0_fun6244__t*, _fself);
  kk_std_core__list desc = _self->desc; /* list<stack/stack<string>> */
  kk_integer_t from_index = _self->from_index; /* int */
  kk_stack__stack from0 = _self->from0; /* stack/stack<string> */
  kk_integer_t quantity = _self->quantity; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc);kk_integer_dup(from_index);kk_stack__stack_dup(from0);kk_integer_dup(quantity);kk_integer_dup(to_index);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_stack__stack to0_5196 = kk_stack__stack_unbox(_b_5194, _ctx); /*stack/stack<string>*/;
  kk_std_core__list _x6245 = kk_day5__mlift3872_execute0(desc, from_index, from0, quantity, to_index, xx, to0_5196, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6245, _ctx);
}

kk_std_core__list kk_day5__mlift3873_execute0(kk_std_core__list desc, kk_integer_t from_index, kk_integer_t quantity, kk_integer_t to_index, kk_std_core__list xx, kk_stack__stack from0, kk_context_t* _ctx) { /* (desc : list<stack/stack<string>>, from-index : int, quantity : int, to-index : int, xx : list<list<int>>, from0 : stack/stack<string>) -> exn list<stack/stack<string>> */ 
  kk_std_core_types__maybe _b_5189_5188;
  kk_box_t _x6233;
  kk_box_t _x6238;
  kk_std_core__list _x6239 = kk_std_core__list_dup(desc); /*list<stack/stack<string>>*/
  _x6238 = kk_std_core__list_box(_x6239, _ctx); /*1000*/
  kk_box_t _x6240;
  kk_integer_t _x6241 = kk_integer_dup(to_index); /*int*/
  _x6240 = kk_integer_box(_x6241); /*1001*/
  _x6233 = kk_std_core_hnd__open_none2(kk_day5__new_mlift3873_execute0_fun6234(_ctx), _x6238, _x6240, _ctx); /*1002*/
  _b_5189_5188 = kk_std_core_types__maybe_unbox(_x6233, _ctx); /*maybe<stack/stack<string>>*/
  kk_stack__stack x_4032;
  kk_box_t _x6242 = kk_std_core_unjust(_b_5189_5188, _ctx); /*1001*/
  x_4032 = kk_stack__stack_unbox(_x6242, _ctx); /*stack/stack<string>*/
  if (kk_yielding(kk_context())) {
    kk_stack__stack_drop(x_4032, _ctx);
    kk_box_t _x6243 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3873_execute0_fun6244(desc, from_index, from0, quantity, to_index, xx, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x6243, _ctx);
  }
  {
    return kk_day5__mlift3872_execute0(desc, from_index, from0, quantity, to_index, xx, x_4032, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3874_execute0_fun6247__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3874_execute0_fun6247(kk_function_t _fself, kk_box_t _b_5200, kk_box_t _b_5201, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3874_execute0_fun6247(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3874_execute0_fun6247, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3874_execute0_fun6247(kk_function_t _fself, kk_box_t _b_5200, kk_box_t _b_5201, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6248;
  kk_std_core__list _x6249 = kk_std_core__list_unbox(_b_5200, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x6250 = kk_integer_unbox(_b_5201); /*int*/
  _x6248 = kk_day5_get(_x6249, _x6250, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x6248, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3874_execute0_fun6257__t {
  struct kk_function_s _base;
  kk_std_core__list desc;
  kk_integer_t from_index;
  kk_integer_t quantity;
  kk_integer_t to_index;
  kk_std_core__list xx;
};
static kk_box_t kk_day5__mlift3874_execute0_fun6257(kk_function_t _fself, kk_box_t _b_5208, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3874_execute0_fun6257(kk_std_core__list desc, kk_integer_t from_index, kk_integer_t quantity, kk_integer_t to_index, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5__mlift3874_execute0_fun6257__t* _self = kk_function_alloc_as(struct kk_day5__mlift3874_execute0_fun6257__t, 6, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3874_execute0_fun6257, kk_context());
  _self->desc = desc;
  _self->from_index = from_index;
  _self->quantity = quantity;
  _self->to_index = to_index;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3874_execute0_fun6257(kk_function_t _fself, kk_box_t _b_5208, kk_context_t* _ctx) {
  struct kk_day5__mlift3874_execute0_fun6257__t* _self = kk_function_as(struct kk_day5__mlift3874_execute0_fun6257__t*, _fself);
  kk_std_core__list desc = _self->desc; /* list<stack/stack<string>> */
  kk_integer_t from_index = _self->from_index; /* int */
  kk_integer_t quantity = _self->quantity; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc);kk_integer_dup(from_index);kk_integer_dup(quantity);kk_integer_dup(to_index);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_stack__stack from0_5210 = kk_stack__stack_unbox(_b_5208, _ctx); /*stack/stack<string>*/;
  kk_std_core__list _x6258 = kk_day5__mlift3873_execute0(desc, from_index, quantity, to_index, xx, from0_5210, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6258, _ctx);
}

kk_std_core__list kk_day5__mlift3874_execute0(kk_std_core__list desc, kk_integer_t from_index, kk_integer_t quantity, kk_std_core__list xx, kk_integer_t _y_3725, kk_context_t* _ctx) { /* (desc : list<stack/stack<string>>, from-index : int, quantity : int, xx : list<list<int>>, int) -> exn list<stack/stack<string>> */ 
  kk_integer_t to_index = kk_integer_add_small_const(_y_3725, -1, _ctx); /*int*/;
  kk_std_core_types__maybe _b_5203_5202;
  kk_box_t _x6246;
  kk_box_t _x6251;
  kk_std_core__list _x6252 = kk_std_core__list_dup(desc); /*list<stack/stack<string>>*/
  _x6251 = kk_std_core__list_box(_x6252, _ctx); /*1000*/
  kk_box_t _x6253;
  kk_integer_t _x6254 = kk_integer_dup(from_index); /*int*/
  _x6253 = kk_integer_box(_x6254); /*1001*/
  _x6246 = kk_std_core_hnd__open_none2(kk_day5__new_mlift3874_execute0_fun6247(_ctx), _x6251, _x6253, _ctx); /*1002*/
  _b_5203_5202 = kk_std_core_types__maybe_unbox(_x6246, _ctx); /*maybe<stack/stack<string>>*/
  kk_stack__stack x_4034;
  kk_box_t _x6255 = kk_std_core_unjust(_b_5203_5202, _ctx); /*1001*/
  x_4034 = kk_stack__stack_unbox(_x6255, _ctx); /*stack/stack<string>*/
  if (kk_yielding(kk_context())) {
    kk_stack__stack_drop(x_4034, _ctx);
    kk_box_t _x6256 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3874_execute0_fun6257(desc, from_index, quantity, to_index, xx, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x6256, _ctx);
  }
  {
    return kk_day5__mlift3873_execute0(desc, from_index, quantity, to_index, xx, x_4034, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3875_execute0_fun6260__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3875_execute0_fun6260(kk_function_t _fself, kk_box_t _b_5214, kk_box_t _b_5215, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3875_execute0_fun6260(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3875_execute0_fun6260, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3875_execute0_fun6260(kk_function_t _fself, kk_box_t _b_5214, kk_box_t _b_5215, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6261;
  kk_std_core__list _x6262 = kk_std_core__list_unbox(_b_5214, _ctx); /*list<int>*/
  kk_integer_t _x6263 = kk_integer_unbox(_b_5215); /*int*/
  _x6261 = kk_day5_get(_x6262, _x6263, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x6261, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3875_execute0_fun6266__t {
  struct kk_function_s _base;
  kk_std_core__list desc;
  kk_integer_t from_index;
  kk_integer_t quantity;
  kk_std_core__list xx;
};
static kk_box_t kk_day5__mlift3875_execute0_fun6266(kk_function_t _fself, kk_box_t _b_5222, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3875_execute0_fun6266(kk_std_core__list desc, kk_integer_t from_index, kk_integer_t quantity, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5__mlift3875_execute0_fun6266__t* _self = kk_function_alloc_as(struct kk_day5__mlift3875_execute0_fun6266__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3875_execute0_fun6266, kk_context());
  _self->desc = desc;
  _self->from_index = from_index;
  _self->quantity = quantity;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3875_execute0_fun6266(kk_function_t _fself, kk_box_t _b_5222, kk_context_t* _ctx) {
  struct kk_day5__mlift3875_execute0_fun6266__t* _self = kk_function_as(struct kk_day5__mlift3875_execute0_fun6266__t*, _fself);
  kk_std_core__list desc = _self->desc; /* list<stack/stack<string>> */
  kk_integer_t from_index = _self->from_index; /* int */
  kk_integer_t quantity = _self->quantity; /* int */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc);kk_integer_dup(from_index);kk_integer_dup(quantity);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_integer_t _y_5224_3725 = kk_integer_unbox(_b_5222); /*int*/;
  kk_std_core__list _x6267 = kk_day5__mlift3874_execute0(desc, from_index, quantity, xx, _y_5224_3725, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6267, _ctx);
}

kk_std_core__list kk_day5__mlift3875_execute0(kk_std_core__list desc, kk_integer_t quantity, kk_std_core__list x0, kk_std_core__list xx, kk_integer_t _y_3724, kk_context_t* _ctx) { /* (desc : list<stack/stack<string>>, quantity : int, x0 : list<int>, xx : list<list<int>>, int) -> exn list<stack/stack<string>> */ 
  kk_integer_t from_index = kk_integer_add_small_const(_y_3724, -1, _ctx); /*int*/;
  kk_std_core_types__maybe _b_5217_5216;
  kk_box_t _x6259 = kk_std_core_hnd__open_none2(kk_day5__new_mlift3875_execute0_fun6260(_ctx), kk_std_core__list_box(x0, _ctx), kk_integer_box(kk_integer_from_small(2)), _ctx); /*1002*/
  _b_5217_5216 = kk_std_core_types__maybe_unbox(_x6259, _ctx); /*maybe<int>*/
  kk_integer_t x_4036;
  kk_box_t _x6264 = kk_std_core_unjust(_b_5217_5216, _ctx); /*1001*/
  x_4036 = kk_integer_unbox(_x6264); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_4036, _ctx);
    kk_box_t _x6265 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3875_execute0_fun6266(desc, from_index, quantity, xx, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x6265, _ctx);
  }
  {
    return kk_day5__mlift3874_execute0(desc, from_index, quantity, xx, x_4036, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_day5__mlift3876_execute0_fun6269__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5__mlift3876_execute0_fun6269(kk_function_t _fself, kk_box_t _b_5228, kk_box_t _b_5229, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3876_execute0_fun6269(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5__mlift3876_execute0_fun6269, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5__mlift3876_execute0_fun6269(kk_function_t _fself, kk_box_t _b_5228, kk_box_t _b_5229, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6270;
  kk_std_core__list _x6271 = kk_std_core__list_unbox(_b_5228, _ctx); /*list<int>*/
  kk_integer_t _x6272 = kk_integer_unbox(_b_5229); /*int*/
  _x6270 = kk_day5_get(_x6271, _x6272, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x6270, _ctx);
}


// lift anonymous function
struct kk_day5__mlift3876_execute0_fun6277__t {
  struct kk_function_s _base;
  kk_std_core__list desc;
  kk_integer_t quantity;
  kk_std_core__list x0;
  kk_std_core__list xx;
};
static kk_box_t kk_day5__mlift3876_execute0_fun6277(kk_function_t _fself, kk_box_t _b_5236, kk_context_t* _ctx);
static kk_function_t kk_day5__new_mlift3876_execute0_fun6277(kk_std_core__list desc, kk_integer_t quantity, kk_std_core__list x0, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5__mlift3876_execute0_fun6277__t* _self = kk_function_alloc_as(struct kk_day5__mlift3876_execute0_fun6277__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5__mlift3876_execute0_fun6277, kk_context());
  _self->desc = desc;
  _self->quantity = quantity;
  _self->x0 = x0;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5__mlift3876_execute0_fun6277(kk_function_t _fself, kk_box_t _b_5236, kk_context_t* _ctx) {
  struct kk_day5__mlift3876_execute0_fun6277__t* _self = kk_function_as(struct kk_day5__mlift3876_execute0_fun6277__t*, _fself);
  kk_std_core__list desc = _self->desc; /* list<stack/stack<string>> */
  kk_integer_t quantity = _self->quantity; /* int */
  kk_std_core__list x0 = _self->x0; /* list<int> */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc);kk_integer_dup(quantity);kk_std_core__list_dup(x0);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_integer_t _y_5238_3724 = kk_integer_unbox(_b_5236); /*int*/;
  kk_std_core__list _x6278 = kk_day5__mlift3875_execute0(desc, quantity, x0, xx, _y_5238_3724, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6278, _ctx);
}

kk_std_core__list kk_day5__mlift3876_execute0(kk_std_core__list desc, kk_std_core__list x0, kk_std_core__list xx, kk_integer_t quantity, kk_context_t* _ctx) { /* (desc : list<stack/stack<string>>, x0 : list<int>, xx : list<list<int>>, quantity : int) -> exn list<stack/stack<string>> */ 
  kk_std_core_types__maybe _b_5231_5230;
  kk_box_t _x6268;
  kk_box_t _x6273;
  kk_std_core__list _x6274 = kk_std_core__list_dup(x0); /*list<int>*/
  _x6273 = kk_std_core__list_box(_x6274, _ctx); /*1000*/
  _x6268 = kk_std_core_hnd__open_none2(kk_day5__new_mlift3876_execute0_fun6269(_ctx), _x6273, kk_integer_box(kk_integer_from_small(1)), _ctx); /*1002*/
  _b_5231_5230 = kk_std_core_types__maybe_unbox(_x6268, _ctx); /*maybe<int>*/
  kk_integer_t x_4038;
  kk_box_t _x6275 = kk_std_core_unjust(_b_5231_5230, _ctx); /*1001*/
  x_4038 = kk_integer_unbox(_x6275); /*int*/
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_4038, _ctx);
    kk_box_t _x6276 = kk_std_core_hnd_yield_extend(kk_day5__new_mlift3876_execute0_fun6277(desc, quantity, x0, xx, _ctx), _ctx); /*1001*/
    return kk_std_core__list_unbox(_x6276, _ctx);
  }
  {
    return kk_day5__mlift3875_execute0(desc, quantity, x0, xx, x_4038, _ctx);
  }
}
 
// solution to part 1


// lift anonymous function
struct kk_day5_execute0_fun6284__t {
  struct kk_function_s _base;
  kk_std_core__list desc;
  kk_std_core__list x0;
  kk_std_core__list xx;
};
static kk_box_t kk_day5_execute0_fun6284(kk_function_t _fself, kk_box_t _b_5243, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6284(kk_std_core__list desc, kk_std_core__list x0, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6284__t* _self = kk_function_alloc_as(struct kk_day5_execute0_fun6284__t, 4, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute0_fun6284, kk_context());
  _self->desc = desc;
  _self->x0 = x0;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5_execute0_fun6284(kk_function_t _fself, kk_box_t _b_5243, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6284__t* _self = kk_function_as(struct kk_day5_execute0_fun6284__t*, _fself);
  kk_std_core__list desc = _self->desc; /* list<stack/stack<string>> */
  kk_std_core__list x0 = _self->x0; /* list<int> */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc);kk_std_core__list_dup(x0);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_integer_t quantity_5447 = kk_integer_unbox(_b_5243); /*int*/;
  kk_std_core__list _x6285 = kk_day5__mlift3876_execute0(desc, x0, xx, quantity_5447, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6285, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6287__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute0_fun6287(kk_function_t _fself, kk_box_t _b_5247, kk_box_t _b_5248, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6287(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute0_fun6287, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute0_fun6287(kk_function_t _fself, kk_box_t _b_5247, kk_box_t _b_5248, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6288;
  kk_std_core__list _x6289 = kk_std_core__list_unbox(_b_5247, _ctx); /*list<int>*/
  kk_integer_t _x6290 = kk_integer_unbox(_b_5248); /*int*/
  _x6288 = kk_day5_get(_x6289, _x6290, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x6288, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6295__t {
  struct kk_function_s _base;
  kk_std_core__list desc;
  kk_integer_t x_4040;
  kk_std_core__list x0;
  kk_std_core__list xx;
};
static kk_box_t kk_day5_execute0_fun6295(kk_function_t _fself, kk_box_t _b_5255, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6295(kk_std_core__list desc, kk_integer_t x_4040, kk_std_core__list x0, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6295__t* _self = kk_function_alloc_as(struct kk_day5_execute0_fun6295__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute0_fun6295, kk_context());
  _self->desc = desc;
  _self->x_4040 = x_4040;
  _self->x0 = x0;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5_execute0_fun6295(kk_function_t _fself, kk_box_t _b_5255, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6295__t* _self = kk_function_as(struct kk_day5_execute0_fun6295__t*, _fself);
  kk_std_core__list desc = _self->desc; /* list<stack/stack<string>> */
  kk_integer_t x_4040 = _self->x_4040; /* int */
  kk_std_core__list x0 = _self->x0; /* list<int> */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc);kk_integer_dup(x_4040);kk_std_core__list_dup(x0);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_integer_t _y_5448_3724 = kk_integer_unbox(_b_5255); /*int*/;
  kk_std_core__list _x6296 = kk_day5__mlift3875_execute0(desc, x_4040, x0, xx, _y_5448_3724, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6296, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6298__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute0_fun6298(kk_function_t _fself, kk_box_t _b_5259, kk_box_t _b_5260, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6298(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute0_fun6298, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute0_fun6298(kk_function_t _fself, kk_box_t _b_5259, kk_box_t _b_5260, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6299;
  kk_std_core__list _x6300 = kk_std_core__list_unbox(_b_5259, _ctx); /*list<int>*/
  kk_integer_t _x6301 = kk_integer_unbox(_b_5260); /*int*/
  _x6299 = kk_day5_get(_x6300, _x6301, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x6299, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6304__t {
  struct kk_function_s _base;
  kk_std_core__list desc;
  kk_integer_t from_index;
  kk_integer_t x_4040;
  kk_std_core__list xx;
};
static kk_box_t kk_day5_execute0_fun6304(kk_function_t _fself, kk_box_t _b_5267, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6304(kk_std_core__list desc, kk_integer_t from_index, kk_integer_t x_4040, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6304__t* _self = kk_function_alloc_as(struct kk_day5_execute0_fun6304__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute0_fun6304, kk_context());
  _self->desc = desc;
  _self->from_index = from_index;
  _self->x_4040 = x_4040;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5_execute0_fun6304(kk_function_t _fself, kk_box_t _b_5267, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6304__t* _self = kk_function_as(struct kk_day5_execute0_fun6304__t*, _fself);
  kk_std_core__list desc = _self->desc; /* list<stack/stack<string>> */
  kk_integer_t from_index = _self->from_index; /* int */
  kk_integer_t x_4040 = _self->x_4040; /* int */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc);kk_integer_dup(from_index);kk_integer_dup(x_4040);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_integer_t _y_5449_3725 = kk_integer_unbox(_b_5267); /*int*/;
  kk_std_core__list _x6305 = kk_day5__mlift3874_execute0(desc, from_index, x_4040, xx, _y_5449_3725, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6305, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6307__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute0_fun6307(kk_function_t _fself, kk_box_t _b_5271, kk_box_t _b_5272, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6307(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute0_fun6307, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute0_fun6307(kk_function_t _fself, kk_box_t _b_5271, kk_box_t _b_5272, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6308;
  kk_std_core__list _x6309 = kk_std_core__list_unbox(_b_5271, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x6310 = kk_integer_unbox(_b_5272); /*int*/
  _x6308 = kk_day5_get(_x6309, _x6310, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x6308, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6317__t {
  struct kk_function_s _base;
  kk_std_core__list desc;
  kk_integer_t from_index;
  kk_integer_t to_index;
  kk_integer_t x_4040;
  kk_std_core__list xx;
};
static kk_box_t kk_day5_execute0_fun6317(kk_function_t _fself, kk_box_t _b_5279, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6317(kk_std_core__list desc, kk_integer_t from_index, kk_integer_t to_index, kk_integer_t x_4040, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6317__t* _self = kk_function_alloc_as(struct kk_day5_execute0_fun6317__t, 6, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute0_fun6317, kk_context());
  _self->desc = desc;
  _self->from_index = from_index;
  _self->to_index = to_index;
  _self->x_4040 = x_4040;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5_execute0_fun6317(kk_function_t _fself, kk_box_t _b_5279, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6317__t* _self = kk_function_as(struct kk_day5_execute0_fun6317__t*, _fself);
  kk_std_core__list desc = _self->desc; /* list<stack/stack<string>> */
  kk_integer_t from_index = _self->from_index; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_integer_t x_4040 = _self->x_4040; /* int */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc);kk_integer_dup(from_index);kk_integer_dup(to_index);kk_integer_dup(x_4040);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_stack__stack from0_5450 = kk_stack__stack_unbox(_b_5279, _ctx); /*stack/stack<string>*/;
  kk_std_core__list _x6318 = kk_day5__mlift3873_execute0(desc, from_index, x_4040, to_index, xx, from0_5450, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6318, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6320__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute0_fun6320(kk_function_t _fself, kk_box_t _b_5283, kk_box_t _b_5284, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6320(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute0_fun6320, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute0_fun6320(kk_function_t _fself, kk_box_t _b_5283, kk_box_t _b_5284, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x6321;
  kk_std_core__list _x6322 = kk_std_core__list_unbox(_b_5283, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x6323 = kk_integer_unbox(_b_5284); /*int*/
  _x6321 = kk_day5_get(_x6322, _x6323, _ctx); /*maybe<1671>*/
  return kk_std_core_types__maybe_box(_x6321, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6330__t {
  struct kk_function_s _base;
  kk_std_core__list desc;
  kk_integer_t from_index;
  kk_integer_t to_index;
  kk_integer_t x_4040;
  kk_stack__stack x3_4049;
  kk_std_core__list xx;
};
static kk_box_t kk_day5_execute0_fun6330(kk_function_t _fself, kk_box_t _b_5291, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6330(kk_std_core__list desc, kk_integer_t from_index, kk_integer_t to_index, kk_integer_t x_4040, kk_stack__stack x3_4049, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6330__t* _self = kk_function_alloc_as(struct kk_day5_execute0_fun6330__t, 8, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute0_fun6330, kk_context());
  _self->desc = desc;
  _self->from_index = from_index;
  _self->to_index = to_index;
  _self->x_4040 = x_4040;
  _self->x3_4049 = x3_4049;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5_execute0_fun6330(kk_function_t _fself, kk_box_t _b_5291, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6330__t* _self = kk_function_as(struct kk_day5_execute0_fun6330__t*, _fself);
  kk_std_core__list desc = _self->desc; /* list<stack/stack<string>> */
  kk_integer_t from_index = _self->from_index; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_integer_t x_4040 = _self->x_4040; /* int */
  kk_stack__stack x3_4049 = _self->x3_4049; /* stack/stack<string> */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_std_core__list_dup(desc);kk_integer_dup(from_index);kk_integer_dup(to_index);kk_integer_dup(x_4040);kk_stack__stack_dup(x3_4049);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_stack__stack to0_5451 = kk_stack__stack_unbox(_b_5291, _ctx); /*stack/stack<string>*/;
  kk_std_core__list _x6331 = kk_day5__mlift3872_execute0(desc, from_index, x3_4049, x_4040, to_index, xx, to0_5451, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6331, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6334__t {
  struct kk_function_s _base;
  kk_integer_t from_index;
  kk_integer_t to_index;
  kk_integer_t x_4040;
  kk_stack__stack x3_4049;
  kk_stack__stack x4_4052;
  kk_std_core__list xx;
};
static kk_box_t kk_day5_execute0_fun6334(kk_function_t _fself, kk_box_t _b_5293, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6334(kk_integer_t from_index, kk_integer_t to_index, kk_integer_t x_4040, kk_stack__stack x3_4049, kk_stack__stack x4_4052, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6334__t* _self = kk_function_alloc_as(struct kk_day5_execute0_fun6334__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute0_fun6334, kk_context());
  _self->from_index = from_index;
  _self->to_index = to_index;
  _self->x_4040 = x_4040;
  _self->x3_4049 = x3_4049;
  _self->x4_4052 = x4_4052;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5_execute0_fun6334(kk_function_t _fself, kk_box_t _b_5293, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6334__t* _self = kk_function_as(struct kk_day5_execute0_fun6334__t*, _fself);
  kk_integer_t from_index = _self->from_index; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_integer_t x_4040 = _self->x_4040; /* int */
  kk_stack__stack x3_4049 = _self->x3_4049; /* stack/stack<string> */
  kk_stack__stack x4_4052 = _self->x4_4052; /* stack/stack<string> */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index);kk_integer_dup(to_index);kk_integer_dup(x_4040);kk_stack__stack_dup(x3_4049);kk_stack__stack_dup(x4_4052);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_std_core__list _y_5452_3728 = kk_std_core__list_unbox(_b_5293, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x6335 = kk_day5__mlift3868_execute0(from_index, x3_4049, x_4040, to_index, x4_4052, xx, _y_5452_3728, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6335, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6338__t {
  struct kk_function_s _base;
  kk_integer_t from_index;
  kk_integer_t to_index;
  kk_integer_t x_4040;
  kk_stack__stack x3_4049;
  kk_stack__stack x4_4052;
  kk_std_core__list xx;
};
static kk_box_t kk_day5_execute0_fun6338(kk_function_t _fself, kk_box_t _b_5295, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6338(kk_integer_t from_index, kk_integer_t to_index, kk_integer_t x_4040, kk_stack__stack x3_4049, kk_stack__stack x4_4052, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6338__t* _self = kk_function_alloc_as(struct kk_day5_execute0_fun6338__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute0_fun6338, kk_context());
  _self->from_index = from_index;
  _self->to_index = to_index;
  _self->x_4040 = x_4040;
  _self->x3_4049 = x3_4049;
  _self->x4_4052 = x4_4052;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5_execute0_fun6338(kk_function_t _fself, kk_box_t _b_5295, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6338__t* _self = kk_function_as(struct kk_day5_execute0_fun6338__t*, _fself);
  kk_integer_t from_index = _self->from_index; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_integer_t x_4040 = _self->x_4040; /* int */
  kk_stack__stack x3_4049 = _self->x3_4049; /* stack/stack<string> */
  kk_stack__stack x4_4052 = _self->x4_4052; /* stack/stack<string> */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index);kk_integer_dup(to_index);kk_integer_dup(x_4040);kk_stack__stack_dup(x3_4049);kk_stack__stack_dup(x4_4052);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_std_core__list d_5453 = kk_std_core__list_unbox(_b_5295, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x6339 = kk_day5__mlift3867_execute0(from_index, x3_4049, x_4040, to_index, x4_4052, xx, d_5453, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6339, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6341__t {
  struct kk_function_s _base;
  kk_integer_t from_index;
  kk_integer_t to_index;
  kk_std_core__list x6_4058;
  kk_std_core__list xx;
};
static kk_box_t kk_day5_execute0_fun6341(kk_function_t _fself, kk_box_t _b_5326, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6341(kk_integer_t from_index, kk_integer_t to_index, kk_std_core__list x6_4058, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6341__t* _self = kk_function_alloc_as(struct kk_day5_execute0_fun6341__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute0_fun6341, kk_context());
  _self->from_index = from_index;
  _self->to_index = to_index;
  _self->x6_4058 = x6_4058;
  _self->xx = xx;
  return &_self->_base;
}



// lift anonymous function
struct kk_day5_execute0_fun6346__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute0_fun6346(kk_function_t _fself, kk_box_t _b_5305, kk_box_t _b_5306, kk_box_t _b_5307, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6346(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute0_fun6346, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute0_fun6346(kk_function_t _fself, kk_box_t _b_5305, kk_box_t _b_5306, kk_box_t _b_5307, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6347;
  kk_std_core__list _x6348 = kk_std_core__list_unbox(_b_5305, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x6349 = kk_integer_unbox(_b_5307); /*int*/
  _x6347 = kk_day5_insert(_x6348, _b_5306, _x6349, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6347, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6352__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute0_fun6352(kk_function_t _fself, kk_box_t _b_5322, kk_box_t _b_5323, kk_box_t _b_5324, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6352(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute0_fun6352, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute0_fun6352(kk_function_t _fself, kk_box_t _b_5322, kk_box_t _b_5323, kk_box_t _b_5324, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6353;
  kk_std_core__list _b_5458_5315 = kk_std_core__list_unbox(_b_5322, _ctx); /*list<stack/stack<string>>*/;
  kk_stack__stack _b_5459_5316 = kk_stack__stack_unbox(_b_5323, _ctx); /*stack/stack<string>*/;
  kk_integer_t _b_5460_5317 = kk_integer_unbox(_b_5324); /*int*/;
  _x6353 = kk_day5_insert(_b_5458_5315, kk_stack__stack_box(_b_5459_5316, _ctx), _b_5460_5317, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6353, _ctx);
}
static kk_box_t kk_day5_execute0_fun6341(kk_function_t _fself, kk_box_t _b_5326, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6341__t* _self = kk_function_as(struct kk_day5_execute0_fun6341__t*, _fself);
  kk_integer_t from_index = _self->from_index; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_std_core__list x6_4058 = _self->x6_4058; /* list<stack/stack<string>> */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index);kk_integer_dup(to_index);kk_std_core__list_dup(x6_4058);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_std_core_types__tuple2_ _y_5454_3730 = kk_std_core_types__tuple2__unbox(_b_5326, _ctx); /*(stack/stack<string>, stack/stack<string>)*/;
  kk_std_core__list _x6342;
  {
    kk_box_t _box_x5296 = _y_5454_3730.fst;
    kk_box_t _box_x5297 = _y_5454_3730.snd;
    kk_stack__stack from1 = kk_stack__stack_unbox(_box_x5296, NULL);
    kk_stack__stack to1 = kk_stack__stack_unbox(_box_x5297, NULL);
    kk_stack__stack_dup(from1);
    kk_stack__stack_dup(to1);
    kk_std_core_types__tuple2__drop(_y_5454_3730, _ctx);
    kk_std_core__list _x13_3824;
    kk_box_t _x6345 = kk_std_core_hnd__open_none3(kk_day5_new_execute0_fun6346(_ctx), kk_std_core__list_box(x6_4058, _ctx), kk_stack__stack_box(from1, _ctx), kk_integer_box(from_index), _ctx); /*1003*/
    _x13_3824 = kk_std_core__list_unbox(_x6345, _ctx); /*list<stack/stack<string>>*/
    kk_std_core__list _x6350;
    kk_box_t _x6351 = kk_std_core_hnd__open_none3(kk_day5_new_execute0_fun6352(_ctx), kk_std_core__list_box(_x13_3824, _ctx), kk_stack__stack_box(to1, _ctx), kk_integer_box(to_index), _ctx); /*1003*/
    _x6350 = kk_std_core__list_unbox(_x6351, _ctx); /*list<stack/stack<string>>*/
    _x6342 = kk_day5_execute(_x6350, xx, _ctx); /*list<stack/stack<string>>*/
  }
  return kk_std_core__list_box(_x6342, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6357__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute0_fun6357(kk_function_t _fself, kk_box_t _b_5336, kk_box_t _b_5337, kk_box_t _b_5338, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6357(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute0_fun6357, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute0_fun6357(kk_function_t _fself, kk_box_t _b_5336, kk_box_t _b_5337, kk_box_t _b_5338, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6358;
  kk_std_core__list _x6359 = kk_std_core__list_unbox(_b_5336, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x6360 = kk_integer_unbox(_b_5338); /*int*/
  _x6358 = kk_day5_insert(_x6359, _b_5337, _x6360, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6358, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6363__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute0_fun6363(kk_function_t _fself, kk_box_t _b_5353, kk_box_t _b_5354, kk_box_t _b_5355, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6363(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute0_fun6363, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute0_fun6363(kk_function_t _fself, kk_box_t _b_5353, kk_box_t _b_5354, kk_box_t _b_5355, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6364;
  kk_std_core__list _b_5461_5346 = kk_std_core__list_unbox(_b_5353, _ctx); /*list<stack/stack<string>>*/;
  kk_stack__stack _b_5462_5347 = kk_stack__stack_unbox(_b_5354, _ctx); /*stack/stack<string>*/;
  kk_integer_t _b_5463_5348 = kk_integer_unbox(_b_5355); /*int*/;
  _x6364 = kk_day5_insert(_b_5461_5346, kk_stack__stack_box(_b_5462_5347, _ctx), _b_5463_5348, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6364, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6367__t {
  struct kk_function_s _base;
  kk_integer_t from_index;
  kk_integer_t to_index;
  kk_integer_t x_4040;
  kk_stack__stack x3_4049;
  kk_stack__stack x4_4052;
  kk_std_core__list xx;
};
static kk_box_t kk_day5_execute0_fun6367(kk_function_t _fself, kk_box_t _b_5357, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6367(kk_integer_t from_index, kk_integer_t to_index, kk_integer_t x_4040, kk_stack__stack x3_4049, kk_stack__stack x4_4052, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6367__t* _self = kk_function_alloc_as(struct kk_day5_execute0_fun6367__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute0_fun6367, kk_context());
  _self->from_index = from_index;
  _self->to_index = to_index;
  _self->x_4040 = x_4040;
  _self->x3_4049 = x3_4049;
  _self->x4_4052 = x4_4052;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5_execute0_fun6367(kk_function_t _fself, kk_box_t _b_5357, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6367__t* _self = kk_function_as(struct kk_day5_execute0_fun6367__t*, _fself);
  kk_integer_t from_index = _self->from_index; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_integer_t x_4040 = _self->x_4040; /* int */
  kk_stack__stack x3_4049 = _self->x3_4049; /* stack/stack<string> */
  kk_stack__stack x4_4052 = _self->x4_4052; /* stack/stack<string> */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index);kk_integer_dup(to_index);kk_integer_dup(x_4040);kk_stack__stack_dup(x3_4049);kk_stack__stack_dup(x4_4052);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_std_core__list _y_5455_3733 = kk_std_core__list_unbox(_b_5357, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x6368 = kk_day5__mlift3871_execute0(from_index, x3_4049, x_4040, to_index, x4_4052, xx, _y_5455_3733, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6368, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6371__t {
  struct kk_function_s _base;
  kk_integer_t from_index;
  kk_integer_t to_index;
  kk_integer_t x_4040;
  kk_stack__stack x3_4049;
  kk_stack__stack x4_4052;
  kk_std_core__list xx;
};
static kk_box_t kk_day5_execute0_fun6371(kk_function_t _fself, kk_box_t _b_5359, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6371(kk_integer_t from_index, kk_integer_t to_index, kk_integer_t x_4040, kk_stack__stack x3_4049, kk_stack__stack x4_4052, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6371__t* _self = kk_function_alloc_as(struct kk_day5_execute0_fun6371__t, 9, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute0_fun6371, kk_context());
  _self->from_index = from_index;
  _self->to_index = to_index;
  _self->x_4040 = x_4040;
  _self->x3_4049 = x3_4049;
  _self->x4_4052 = x4_4052;
  _self->xx = xx;
  return &_self->_base;
}

static kk_box_t kk_day5_execute0_fun6371(kk_function_t _fself, kk_box_t _b_5359, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6371__t* _self = kk_function_as(struct kk_day5_execute0_fun6371__t*, _fself);
  kk_integer_t from_index = _self->from_index; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_integer_t x_4040 = _self->x_4040; /* int */
  kk_stack__stack x3_4049 = _self->x3_4049; /* stack/stack<string> */
  kk_stack__stack x4_4052 = _self->x4_4052; /* stack/stack<string> */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index);kk_integer_dup(to_index);kk_integer_dup(x_4040);kk_stack__stack_dup(x3_4049);kk_stack__stack_dup(x4_4052);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_std_core__list d00_5456 = kk_std_core__list_unbox(_b_5359, _ctx); /*list<stack/stack<string>>*/;
  kk_std_core__list _x6372 = kk_day5__mlift3870_execute0(from_index, x3_4049, x_4040, to_index, x4_4052, xx, d00_5456, _ctx); /*list<stack/stack<string>>*/
  return kk_std_core__list_box(_x6372, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6374__t {
  struct kk_function_s _base;
  kk_integer_t from_index;
  kk_integer_t to_index;
  kk_std_core__list x9_4072;
  kk_std_core__list xx;
};
static kk_box_t kk_day5_execute0_fun6374(kk_function_t _fself, kk_box_t _b_5390, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6374(kk_integer_t from_index, kk_integer_t to_index, kk_std_core__list x9_4072, kk_std_core__list xx, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6374__t* _self = kk_function_alloc_as(struct kk_day5_execute0_fun6374__t, 5, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_day5_execute0_fun6374, kk_context());
  _self->from_index = from_index;
  _self->to_index = to_index;
  _self->x9_4072 = x9_4072;
  _self->xx = xx;
  return &_self->_base;
}



// lift anonymous function
struct kk_day5_execute0_fun6379__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute0_fun6379(kk_function_t _fself, kk_box_t _b_5369, kk_box_t _b_5370, kk_box_t _b_5371, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6379(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute0_fun6379, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute0_fun6379(kk_function_t _fself, kk_box_t _b_5369, kk_box_t _b_5370, kk_box_t _b_5371, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6380;
  kk_std_core__list _x6381 = kk_std_core__list_unbox(_b_5369, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x6382 = kk_integer_unbox(_b_5371); /*int*/
  _x6380 = kk_day5_insert(_x6381, _b_5370, _x6382, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6380, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6385__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute0_fun6385(kk_function_t _fself, kk_box_t _b_5386, kk_box_t _b_5387, kk_box_t _b_5388, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6385(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute0_fun6385, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute0_fun6385(kk_function_t _fself, kk_box_t _b_5386, kk_box_t _b_5387, kk_box_t _b_5388, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6386;
  kk_std_core__list _b_5464_5379 = kk_std_core__list_unbox(_b_5386, _ctx); /*list<stack/stack<string>>*/;
  kk_stack__stack _b_5465_5380 = kk_stack__stack_unbox(_b_5387, _ctx); /*stack/stack<string>*/;
  kk_integer_t _b_5466_5381 = kk_integer_unbox(_b_5388); /*int*/;
  _x6386 = kk_day5_insert(_b_5464_5379, kk_stack__stack_box(_b_5465_5380, _ctx), _b_5466_5381, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6386, _ctx);
}
static kk_box_t kk_day5_execute0_fun6374(kk_function_t _fself, kk_box_t _b_5390, kk_context_t* _ctx) {
  struct kk_day5_execute0_fun6374__t* _self = kk_function_as(struct kk_day5_execute0_fun6374__t*, _fself);
  kk_integer_t from_index = _self->from_index; /* int */
  kk_integer_t to_index = _self->to_index; /* int */
  kk_std_core__list x9_4072 = _self->x9_4072; /* list<stack/stack<string>> */
  kk_std_core__list xx = _self->xx; /* list<list<int>> */
  kk_drop_match(_self, {kk_integer_dup(from_index);kk_integer_dup(to_index);kk_std_core__list_dup(x9_4072);kk_std_core__list_dup(xx);}, {}, _ctx)
  kk_std_core_types__tuple2_ _y_5457_3735 = kk_std_core_types__tuple2__unbox(_b_5390, _ctx); /*(stack/stack<string>, stack/stack<string>)*/;
  kk_std_core__list _x6375;
  {
    kk_box_t _box_x5360 = _y_5457_3735.fst;
    kk_box_t _box_x5361 = _y_5457_3735.snd;
    kk_stack__stack from2 = kk_stack__stack_unbox(_box_x5360, NULL);
    kk_stack__stack to2 = kk_stack__stack_unbox(_box_x5361, NULL);
    kk_stack__stack_dup(from2);
    kk_stack__stack_dup(to2);
    kk_std_core_types__tuple2__drop(_y_5457_3735, _ctx);
    kk_std_core__list _x15_3830;
    kk_box_t _x6378 = kk_std_core_hnd__open_none3(kk_day5_new_execute0_fun6379(_ctx), kk_std_core__list_box(x9_4072, _ctx), kk_stack__stack_box(to2, _ctx), kk_integer_box(to_index), _ctx); /*1003*/
    _x15_3830 = kk_std_core__list_unbox(_x6378, _ctx); /*list<stack/stack<string>>*/
    kk_std_core__list _x6383;
    kk_box_t _x6384 = kk_std_core_hnd__open_none3(kk_day5_new_execute0_fun6385(_ctx), kk_std_core__list_box(_x15_3830, _ctx), kk_stack__stack_box(from2, _ctx), kk_integer_box(from_index), _ctx); /*1003*/
    _x6383 = kk_std_core__list_unbox(_x6384, _ctx); /*list<stack/stack<string>>*/
    _x6375 = kk_day5_execute(_x6383, xx, _ctx); /*list<stack/stack<string>>*/
  }
  return kk_std_core__list_box(_x6375, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6390__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute0_fun6390(kk_function_t _fself, kk_box_t _b_5400, kk_box_t _b_5401, kk_box_t _b_5402, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6390(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute0_fun6390, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute0_fun6390(kk_function_t _fself, kk_box_t _b_5400, kk_box_t _b_5401, kk_box_t _b_5402, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6391;
  kk_std_core__list _x6392 = kk_std_core__list_unbox(_b_5400, _ctx); /*list<stack/stack<string>>*/
  kk_integer_t _x6393 = kk_integer_unbox(_b_5402); /*int*/
  _x6391 = kk_day5_insert(_x6392, _b_5401, _x6393, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6391, _ctx);
}


// lift anonymous function
struct kk_day5_execute0_fun6396__t {
  struct kk_function_s _base;
};
static kk_box_t kk_day5_execute0_fun6396(kk_function_t _fself, kk_box_t _b_5417, kk_box_t _b_5418, kk_box_t _b_5419, kk_context_t* _ctx);
static kk_function_t kk_day5_new_execute0_fun6396(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_day5_execute0_fun6396, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_day5_execute0_fun6396(kk_function_t _fself, kk_box_t _b_5417, kk_box_t _b_5418, kk_box_t _b_5419, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core__list _x6397;
  kk_std_core__list _b_5467_5410 = kk_std_core__list_unbox(_b_5417, _ctx); /*list<stack/stack<string>>*/;
  kk_stack__stack _b_5468_5411 = kk_stack__stack_unbox(_b_5418, _ctx); /*stack/stack<string>*/;
  kk_integer_t _b_5469_5412 = kk_integer_unbox(_b_5419); /*int*/;
  _x6397 = kk_day5_insert(_b_5467_5410, kk_stack__stack_box(_b_5468_5411, _ctx), _b_5469_5412, _ctx); /*list<1776>*/
  return kk_std_core__list_box(_x6397, _ctx);
}

kk_std_core__list kk_day5_execute0(kk_std_core__list desc, kk_std_core__list ins, kk_context_t* _ctx) { /* (desc : list<stack/stack<string>>, ins : list<list<int>>) -> pure list<stack/stack<string>> */ 
  if (kk_std_core__is_Nil(ins)) {
    return desc;
  }
  {
    struct kk_std_core_Cons* _con6279 = kk_std_core__as_Cons(ins);
    kk_box_t _box_x5239 = _con6279->head;
    kk_std_core__list xx = _con6279->tail;
    kk_std_core__list x0 = kk_std_core__list_unbox(_box_x5239, NULL);
    if (kk_likely(kk_std_core__list_is_unique(ins))) {
      kk_std_core__list_free(ins, _ctx);
    }
    else {
      kk_std_core__list_dup(x0);
      kk_std_core__list_dup(xx);
      kk_std_core__list_decref(ins, _ctx);
    }
    kk_std_core_types__maybe _b_5241_5240;
    kk_std_core__list _x6281 = kk_std_core__list_dup(x0); /*list<int>*/
    _b_5241_5240 = kk_std_core_head_1(_x6281, _ctx); /*maybe<int>*/
    kk_integer_t x_4040;
    kk_box_t _x6282 = kk_std_core_unjust(_b_5241_5240, _ctx); /*1001*/
    x_4040 = kk_integer_unbox(_x6282); /*int*/
    if (kk_yielding(kk_context())) {
      kk_integer_drop(x_4040, _ctx);
      kk_box_t _x6283 = kk_std_core_hnd_yield_extend(kk_day5_new_execute0_fun6284(desc, x0, xx, _ctx), _ctx); /*1001*/
      return kk_std_core__list_unbox(_x6283, _ctx);
    }
    {
      kk_std_core_types__maybe _b_5250_5249;
      kk_box_t _x6286;
      kk_box_t _x6291;
      kk_std_core__list _x6292 = kk_std_core__list_dup(x0); /*list<int>*/
      _x6291 = kk_std_core__list_box(_x6292, _ctx); /*1000*/
      _x6286 = kk_std_core_hnd__open_none2(kk_day5_new_execute0_fun6287(_ctx), _x6291, kk_integer_box(kk_integer_from_small(1)), _ctx); /*1002*/
      _b_5250_5249 = kk_std_core_types__maybe_unbox(_x6286, _ctx); /*maybe<int>*/
      kk_integer_t x1_4043;
      kk_box_t _x6293 = kk_std_core_unjust(_b_5250_5249, _ctx); /*1001*/
      x1_4043 = kk_integer_unbox(_x6293); /*int*/
      if (kk_yielding(kk_context())) {
        kk_integer_drop(x1_4043, _ctx);
        kk_box_t _x6294 = kk_std_core_hnd_yield_extend(kk_day5_new_execute0_fun6295(desc, x_4040, x0, xx, _ctx), _ctx); /*1001*/
        return kk_std_core__list_unbox(_x6294, _ctx);
      }
      {
        kk_integer_t from_index = kk_integer_add_small_const(x1_4043, -1, _ctx); /*int*/;
        kk_std_core_types__maybe _b_5262_5261;
        kk_box_t _x6297 = kk_std_core_hnd__open_none2(kk_day5_new_execute0_fun6298(_ctx), kk_std_core__list_box(x0, _ctx), kk_integer_box(kk_integer_from_small(2)), _ctx); /*1002*/
        _b_5262_5261 = kk_std_core_types__maybe_unbox(_x6297, _ctx); /*maybe<int>*/
        kk_integer_t x2_4046;
        kk_box_t _x6302 = kk_std_core_unjust(_b_5262_5261, _ctx); /*1001*/
        x2_4046 = kk_integer_unbox(_x6302); /*int*/
        if (kk_yielding(kk_context())) {
          kk_integer_drop(x2_4046, _ctx);
          kk_box_t _x6303 = kk_std_core_hnd_yield_extend(kk_day5_new_execute0_fun6304(desc, from_index, x_4040, xx, _ctx), _ctx); /*1001*/
          return kk_std_core__list_unbox(_x6303, _ctx);
        }
        {
          kk_integer_t to_index = kk_integer_add_small_const(x2_4046, -1, _ctx); /*int*/;
          kk_std_core_types__maybe _b_5274_5273;
          kk_box_t _x6306;
          kk_box_t _x6311;
          kk_std_core__list _x6312 = kk_std_core__list_dup(desc); /*list<stack/stack<string>>*/
          _x6311 = kk_std_core__list_box(_x6312, _ctx); /*1000*/
          kk_box_t _x6313;
          kk_integer_t _x6314 = kk_integer_dup(from_index); /*int*/
          _x6313 = kk_integer_box(_x6314); /*1001*/
          _x6306 = kk_std_core_hnd__open_none2(kk_day5_new_execute0_fun6307(_ctx), _x6311, _x6313, _ctx); /*1002*/
          _b_5274_5273 = kk_std_core_types__maybe_unbox(_x6306, _ctx); /*maybe<stack/stack<string>>*/
          kk_stack__stack x3_4049;
          kk_box_t _x6315 = kk_std_core_unjust(_b_5274_5273, _ctx); /*1001*/
          x3_4049 = kk_stack__stack_unbox(_x6315, _ctx); /*stack/stack<string>*/
          if (kk_yielding(kk_context())) {
            kk_stack__stack_drop(x3_4049, _ctx);
            kk_box_t _x6316 = kk_std_core_hnd_yield_extend(kk_day5_new_execute0_fun6317(desc, from_index, to_index, x_4040, xx, _ctx), _ctx); /*1001*/
            return kk_std_core__list_unbox(_x6316, _ctx);
          }
          {
            kk_std_core_types__maybe _b_5286_5285;
            kk_box_t _x6319;
            kk_box_t _x6324;
            kk_std_core__list _x6325 = kk_std_core__list_dup(desc); /*list<stack/stack<string>>*/
            _x6324 = kk_std_core__list_box(_x6325, _ctx); /*1000*/
            kk_box_t _x6326;
            kk_integer_t _x6327 = kk_integer_dup(to_index); /*int*/
            _x6326 = kk_integer_box(_x6327); /*1001*/
            _x6319 = kk_std_core_hnd__open_none2(kk_day5_new_execute0_fun6320(_ctx), _x6324, _x6326, _ctx); /*1002*/
            _b_5286_5285 = kk_std_core_types__maybe_unbox(_x6319, _ctx); /*maybe<stack/stack<string>>*/
            kk_stack__stack x4_4052;
            kk_box_t _x6328 = kk_std_core_unjust(_b_5286_5285, _ctx); /*1001*/
            x4_4052 = kk_stack__stack_unbox(_x6328, _ctx); /*stack/stack<string>*/
            if (kk_yielding(kk_context())) {
              kk_stack__stack_drop(x4_4052, _ctx);
              kk_box_t _x6329 = kk_std_core_hnd_yield_extend(kk_day5_new_execute0_fun6330(desc, from_index, to_index, x_4040, x3_4049, xx, _ctx), _ctx); /*1001*/
              return kk_std_core__list_unbox(_x6329, _ctx);
            }
            {
              bool _match_5475 = kk_integer_lt_borrow(from_index,to_index,kk_context()); /*bool*/;
              if (_match_5475) {
                kk_std_core__list x5_4055;
                kk_integer_t _x6332 = kk_integer_dup(to_index); /*int*/
                x5_4055 = kk_day5_remove(desc, _x6332, _ctx); /*list<stack/stack<string>>*/
                if (kk_yielding(kk_context())) {
                  kk_std_core__list_drop(x5_4055, _ctx);
                  kk_box_t _x6333 = kk_std_core_hnd_yield_extend(kk_day5_new_execute0_fun6334(from_index, to_index, x_4040, x3_4049, x4_4052, xx, _ctx), _ctx); /*1001*/
                  return kk_std_core__list_unbox(_x6333, _ctx);
                }
                {
                  kk_std_core__list x6_4058;
                  kk_integer_t _x6336 = kk_integer_dup(from_index); /*int*/
                  x6_4058 = kk_day5_remove(x5_4055, _x6336, _ctx); /*list<stack/stack<string>>*/
                  if (kk_yielding(kk_context())) {
                    kk_std_core__list_drop(x6_4058, _ctx);
                    kk_box_t _x6337 = kk_std_core_hnd_yield_extend(kk_day5_new_execute0_fun6338(from_index, to_index, x_4040, x3_4049, x4_4052, xx, _ctx), _ctx); /*1001*/
                    return kk_std_core__list_unbox(_x6337, _ctx);
                  }
                  {
                    kk_std_core_types__tuple2_ x7_4061 = kk_day5__lift3648_execute0(x_4040, x3_4049, x4_4052, _ctx); /*(stack/stack<string>, stack/stack<string>)*/;
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__tuple2__drop(x7_4061, _ctx);
                      kk_box_t _x6340 = kk_std_core_hnd_yield_extend(kk_day5_new_execute0_fun6341(from_index, to_index, x6_4058, xx, _ctx), _ctx); /*1001*/
                      return kk_std_core__list_unbox(_x6340, _ctx);
                    }
                    {
                      kk_box_t _box_x5327 = x7_4061.fst;
                      kk_box_t _box_x5328 = x7_4061.snd;
                      kk_stack__stack from10 = kk_stack__stack_unbox(_box_x5327, NULL);
                      kk_stack__stack to10 = kk_stack__stack_unbox(_box_x5328, NULL);
                      kk_stack__stack_dup(from10);
                      kk_stack__stack_dup(to10);
                      kk_std_core_types__tuple2__drop(x7_4061, _ctx);
                      kk_std_core__list _x13_38240;
                      kk_box_t _x6356 = kk_std_core_hnd__open_none3(kk_day5_new_execute0_fun6357(_ctx), kk_std_core__list_box(x6_4058, _ctx), kk_stack__stack_box(from10, _ctx), kk_integer_box(from_index), _ctx); /*1003*/
                      _x13_38240 = kk_std_core__list_unbox(_x6356, _ctx); /*list<stack/stack<string>>*/
                      kk_std_core__list _x6361;
                      kk_box_t _x6362 = kk_std_core_hnd__open_none3(kk_day5_new_execute0_fun6363(_ctx), kk_std_core__list_box(_x13_38240, _ctx), kk_stack__stack_box(to10, _ctx), kk_integer_box(to_index), _ctx); /*1003*/
                      _x6361 = kk_std_core__list_unbox(_x6362, _ctx); /*list<stack/stack<string>>*/
                      return kk_day5_execute(_x6361, xx, _ctx);
                    }
                  }
                }
              }
              {
                kk_std_core__list x8_4069;
                kk_integer_t _x6365 = kk_integer_dup(from_index); /*int*/
                x8_4069 = kk_day5_remove(desc, _x6365, _ctx); /*list<stack/stack<string>>*/
                if (kk_yielding(kk_context())) {
                  kk_std_core__list_drop(x8_4069, _ctx);
                  kk_box_t _x6366 = kk_std_core_hnd_yield_extend(kk_day5_new_execute0_fun6367(from_index, to_index, x_4040, x3_4049, x4_4052, xx, _ctx), _ctx); /*1001*/
                  return kk_std_core__list_unbox(_x6366, _ctx);
                }
                {
                  kk_std_core__list x9_4072;
                  kk_integer_t _x6369 = kk_integer_dup(to_index); /*int*/
                  x9_4072 = kk_day5_remove(x8_4069, _x6369, _ctx); /*list<stack/stack<string>>*/
                  if (kk_yielding(kk_context())) {
                    kk_std_core__list_drop(x9_4072, _ctx);
                    kk_box_t _x6370 = kk_std_core_hnd_yield_extend(kk_day5_new_execute0_fun6371(from_index, to_index, x_4040, x3_4049, x4_4052, xx, _ctx), _ctx); /*1001*/
                    return kk_std_core__list_unbox(_x6370, _ctx);
                  }
                  {
                    kk_std_core_types__tuple2_ x10_4075 = kk_day5__lift3648_execute0(x_4040, x3_4049, x4_4052, _ctx); /*(stack/stack<string>, stack/stack<string>)*/;
                    if (kk_yielding(kk_context())) {
                      kk_std_core_types__tuple2__drop(x10_4075, _ctx);
                      kk_box_t _x6373 = kk_std_core_hnd_yield_extend(kk_day5_new_execute0_fun6374(from_index, to_index, x9_4072, xx, _ctx), _ctx); /*1001*/
                      return kk_std_core__list_unbox(_x6373, _ctx);
                    }
                    {
                      kk_box_t _box_x5391 = x10_4075.fst;
                      kk_box_t _box_x5392 = x10_4075.snd;
                      kk_stack__stack from20 = kk_stack__stack_unbox(_box_x5391, NULL);
                      kk_stack__stack to20 = kk_stack__stack_unbox(_box_x5392, NULL);
                      kk_stack__stack_dup(from20);
                      kk_stack__stack_dup(to20);
                      kk_std_core_types__tuple2__drop(x10_4075, _ctx);
                      kk_std_core__list _x15_38300;
                      kk_box_t _x6389 = kk_std_core_hnd__open_none3(kk_day5_new_execute0_fun6390(_ctx), kk_std_core__list_box(x9_4072, _ctx), kk_stack__stack_box(to20, _ctx), kk_integer_box(to_index), _ctx); /*1003*/
                      _x15_38300 = kk_std_core__list_unbox(_x6389, _ctx); /*list<stack/stack<string>>*/
                      kk_std_core__list _x6394;
                      kk_box_t _x6395 = kk_std_core_hnd__open_none3(kk_day5_new_execute0_fun6396(_ctx), kk_std_core__list_box(_x15_38300, _ctx), kk_stack__stack_box(from20, _ctx), kk_integer_box(from_index), _ctx); /*1003*/
                      _x6394 = kk_std_core__list_unbox(_x6395, _ctx); /*list<stack/stack<string>>*/
                      return kk_day5_execute(_x6394, xx, _ctx);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

// main exit
static void _kk_main_exit(void) {
  kk_context_t* _ctx = kk_get_context();
  kk_day5__done(_ctx);
}

// main entry
int main(int argc, char** argv) {
  kk_assert(sizeof(size_t)==8 && sizeof(void*)==8);
  kk_context_t* _ctx = kk_main_start(argc, argv);
  kk_day5__init(_ctx);
  atexit(&_kk_main_exit);
  kk_day5__hmain(_ctx);
  kk_day5__done(_ctx);
  kk_main_end(_ctx);
  return 0;
}

// initialization
void kk_day5__init(kk_context_t* _ctx){
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
  kk_stack__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_day5__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_stack__done(_ctx);
  kk_std_os_file__done(_ctx);
  kk_std_os_dir__done(_ctx);
  kk_std_os_path__done(_ctx);
  kk_std_text_parse__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
