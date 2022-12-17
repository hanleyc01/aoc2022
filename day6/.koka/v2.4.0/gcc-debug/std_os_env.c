// Koka generated module: "std/os/env", koka version: 2.4.0, platform: 64-bit
#include "std_os_env.h"

kk_vector_t kk_std_os_env_os_get_argv(kk_context_t* _ctx) { /* () -> ndet vector<string> */ 
  return kk_os_get_argv(kk_context());
}

kk_vector_t kk_std_os_env_os_get_env(kk_context_t* _ctx) { /* () -> ndet vector<string> */ 
  return kk_os_get_env(kk_context());
}
 
// The backend compiler name.

kk_string_t kk_std_os_env_get_cc_name(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_cc_name(kk_context());
}
 
// The current compiler version.

kk_string_t kk_std_os_env_get_compiler_version(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_compiler_version(kk_context());
}
 
// Return the processor maximum address size in bits (`8*sizeof(void*)`). This is usually
// equal to the `get-cpu-arch-bits` but may be different on segmented architectures.

kk_integer_t kk_std_os_env_get_cpu_address_bits(kk_context_t* _ctx) { /* () -> ndet int */ 
  return kk_integer_from_size_t(CHAR_BIT*sizeof(void*),kk_context());
}
 
// Return the main processor architecture: x64, x86, arm64, arm, riscv32, riscv64, alpha, ppc64, etc.

kk_string_t kk_std_os_env_get_cpu_arch(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_cpu_arch(kk_context());
}
 
// Return the processor architecture natural machine word size in bits.
//
// Note: Usually this equals the `get-cpu-object-bits` and `get-cpu-address-bits` on modern cpu's
// but they can differ on segmented architectures.
// For example, on the old x86 FAR-NEAR model, the addresses are 32-bit but the maximum object size is 16-bit.
// Or on the more recent-[x32 ABI](https://en.wikipedia.org/wiki/X32_ABI)
// the addresses and objects are 32-bits but the architecture has 64-bit registers.

kk_integer_t kk_std_os_env_get_cpu_arch_bits(kk_context_t* _ctx) { /* () -> ndet int */ 
  return kk_integer_from_size_t(CHAR_BIT*(sizeof(size_t) > sizeof(long) ? sizeof(size_t) : sizeof(long)),kk_context());
}
 
// Return the available CPU's.
// This is the logical core count including hyper-threaded cores.

kk_integer_t kk_std_os_env_get_cpu_count(kk_context_t* _ctx) { /* () -> ndet int */ 
  return kk_integer_from_int(kk_cpu_count(kk_context()),kk_context());
}
 
// Is the byte-order little-endian?
// If not, it is big-endian; other byte orders are not supported.

bool kk_std_os_env_get_cpu_is_little_endian(kk_context_t* _ctx) { /* () -> ndet bool */ 
  return kk_cpu_is_little_endian(kk_context());
}
 
// Return the processor maximum object size in bits (`8*sizeof(size_t)`). This is usually
// equal to the `get-cpu-arch-bits` but may be different on segmented architectures.

kk_integer_t kk_std_os_env_get_cpu_object_bits(kk_context_t* _ctx) { /* () -> ndet int */ 
  return kk_integer_from_size_t(CHAR_BIT*sizeof(size_t),kk_context());
}
 
// Return the main OS name: windows, linux, macos, unix, posix, ios, tvos, watchos, unknown.
// Sometimes has a _dash_ subsystem, like: unix-\<freebsd,openbsd,dragonfly,bsd\>, and windows-mingw.

kk_string_t kk_std_os_env_get_os_name(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_os_name(kk_context());
}


// lift anonymous function
struct kk_std_os_env_argv_fun445__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_env_argv_fun445(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_env_new_argv_fun445(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_env_argv_fun445, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_env_argv_fun445(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_vector_t v_373 = kk_std_os_env_os_get_argv(_ctx); /*vector<string>*/;
  kk_std_core__list _x446 = kk_std_core_vlist(v_373, kk_std_core_types__new_None(_ctx), _ctx); /*list<1001>*/
  return kk_std_core__list_box(_x446, _ctx);
}

kk_std_core__delayed kk_std_os_env_argv;

kk_std_core__list kk_std_os_env__ctail_to_tuples(kk_std_core__list xs, kk_std_core_types__ctail _acc, kk_context_t* _ctx) { /* (xs : list<string>, ctail<env>) -> env */ 
  kk__tailcall: ;
  if (kk_std_core__is_Cons(xs)) {
    struct kk_std_core_Cons* _con447 = kk_std_core__as_Cons(xs);
    kk_box_t _box_x380 = _con447->head;
    kk_std_core__list _pat0 = _con447->tail;
    if (kk_std_core__is_Cons(_pat0)) {
      struct kk_std_core_Cons* _con449 = kk_std_core__as_Cons(_pat0);
      kk_string_t name = kk_string_unbox(_box_x380);
      kk_box_t _box_x381 = _con449->head;
      kk_std_core__list xx = _con449->tail;
      kk_string_t value = kk_string_unbox(_box_x381);
      kk_reuse_t _ru_441 = kk_reuse_null; /*reuse*/;
      if (kk_likely(kk_std_core__list_is_unique(xs))) {
        if (kk_likely(kk_std_core__list_is_unique(_pat0))) {
          kk_std_core__list_free(_pat0, _ctx);
        }
        else {
          kk_string_dup(value);
          kk_std_core__list_dup(xx);
          kk_std_core__list_decref(_pat0, _ctx);
        }
        _ru_441 = (kk_std_core__list_reuse(xs));
      }
      else {
        kk_string_dup(name);
        kk_string_dup(value);
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(xs, _ctx);
      }
      kk_std_core__list _ctail_376 = kk_std_core__list_hole(); /*std/os/env/env*/;
      kk_std_core__list _ctail_377;
      kk_box_t _x451;
      kk_std_core_types__tuple2_ _x452 = kk_std_core_types__new_dash__lp__comma__rp_(kk_string_box(name), kk_string_box(value), _ctx); /*(1004, 1005)*/
      _x451 = kk_std_core_types__tuple2__box(_x452, _ctx); /*1009*/
      _ctail_377 = kk_std_core__new_Cons(_ru_441, _x451, _ctail_376, _ctx); /*list<(string, string)>*/
      kk_box_t* _b_407_395 = (kk_box_t*)((&kk_std_core__as_Cons(_ctail_377)->tail)); /*cfield<std/os/env/env>*/;
      { // tailcall
        kk_std_core_types__ctail _x453 = kk_ctail_link(_acc,(kk_std_core__list_box(_ctail_377, _ctx)),_b_407_395); /*ctail<0>*/
        xs = xx;
        _acc = _x453;
        goto kk__tailcall;
      }
    }
  }
  if (kk_std_core__is_Cons(xs)) {
    struct kk_std_core_Cons* _con454 = kk_std_core__as_Cons(xs);
    kk_box_t _box_x396 = _con454->head;
    kk_std_core__list _pat2 = _con454->tail;
    kk_string_t name0 = kk_string_unbox(_box_x396);
    kk_reuse_t _ru_442 = kk_reuse_null; /*reuse*/;
    if (kk_likely(kk_std_core__list_is_unique(xs))) {
      _ru_442 = (kk_std_core__list_reuse(xs));
    }
    else {
      kk_string_dup(name0);
      kk_std_core__list_decref(xs, _ctx);
    }
    kk_box_t _x456;
    kk_box_t _x457;
    kk_std_core__list _x458;
    kk_box_t _x459;
    kk_std_core_types__tuple2_ _x460;
    kk_box_t _x461;
    kk_string_t _x462 = kk_string_empty(); /*string*/
    _x461 = kk_string_box(_x462); /*1005*/
    _x460 = kk_std_core_types__new_dash__lp__comma__rp_(kk_string_box(name0), _x461, _ctx); /*(1004, 1005)*/
    _x459 = kk_std_core_types__tuple2__box(_x460, _ctx); /*1009*/
    _x458 = kk_std_core__new_Cons(_ru_442, _x459, kk_std_core__new_Nil(_ctx), _ctx); /*list<1009>*/
    _x457 = kk_std_core__list_box(_x458, _ctx); /*-1*/
    _x456 = kk_ctail_resolve(_acc,_x457); /*-1*/
    return kk_std_core__list_unbox(_x456, _ctx);
  }
  {
    kk_box_t _x464 = kk_ctail_resolve(_acc,(kk_std_core__list_box(kk_std_core__new_Nil(_ctx), _ctx))); /*-1*/
    return kk_std_core__list_unbox(_x464, _ctx);
  }
}

kk_std_core__list kk_std_os_env_to_tuples(kk_std_core__list xs0, kk_context_t* _ctx) { /* (xs : list<string>) -> env */ 
  kk_std_core_types__ctail _x465 = kk_ctail_nil(); /*ctail<0>*/
  return kk_std_os_env__ctail_to_tuples(xs0, _x465, _ctx);
}


// lift anonymous function
struct kk_std_os_env_environ_fun466__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_env_environ_fun466(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_env_new_environ_fun466(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_env_environ_fun466, _ctx)
  return kk_function_dup(_fself);
}

static kk_box_t kk_std_os_env_environ_fun466(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_vector_t v_374 = kk_std_os_env_os_get_env(_ctx); /*vector<string>*/;
  kk_std_core__list _x467;
  kk_std_core__list _x468 = kk_std_core_vlist(v_374, kk_std_core_types__new_None(_ctx), _ctx); /*list<1001>*/
  _x467 = kk_std_os_env_to_tuples(_x468, _ctx); /*std/os/env/env*/
  return kk_std_core__list_box(_x467, _ctx);
}

kk_std_core__delayed kk_std_os_env_environ;
 
// Return the arguments that were passed to program itself.
// Strips off the initial program from the unprocessed command line.
// i.e. If a program started as:
// ````
// > node myprogram.js --flag bla
// ````
// The `arguments` list will be `["--flag","bla"]`

kk_std_core__list kk_std_os_env_get_args(kk_context_t* _ctx) { /* () -> ndet list<string> */ 
  bool is_node;
  kk_string_t _x471 = kk_std_core_host(_ctx); /*string*/
  kk_string_t _x472;
  kk_define_string_literal(, _s473, 4, "node")
  _x472 = kk_string_dup(_s473); /*string*/
  is_node = kk_string_is_eq(_x471,_x472,kk_context()); /*bool*/
  kk_std_core__list _match_439;
  kk_box_t _x474;
  kk_std_core__delayed _x475 = kk_std_core__delayed_dup(kk_std_os_env_argv); /*delayed<ndet,list<string>>*/
  _x474 = kk_std_core_force(_x475, _ctx); /*1001*/
  _match_439 = kk_std_core__list_unbox(_x474, _ctx); /*list<string>*/
  if (kk_std_core__is_Cons(_match_439)) {
    struct kk_std_core_Cons* _con476 = kk_std_core__as_Cons(_match_439);
    kk_box_t _box_x424 = _con476->head;
    kk_std_core__list xx = _con476->tail;
    kk_string_t x = kk_string_unbox(_box_x424);
    bool _x478;
    if (is_node) {
      kk_std_os_path__path p_375;
      kk_string_t _x479 = kk_string_dup(x); /*string*/
      p_375 = kk_std_os_path_path(_x479, _ctx); /*std/os/path/path*/
      kk_std_core_types__tuple2_ _this_2133;
      kk_string_t _x480;
      {
        kk_std_core__list _x0 = p_375.parts;
        kk_std_core__list_dup(_x0);
        kk_std_os_path__path_drop(p_375, _ctx);
        if (kk_std_core__is_Cons(_x0)) {
          struct kk_std_core_Cons* _con481 = kk_std_core__as_Cons(_x0);
          kk_box_t _box_x425 = _con481->head;
          kk_std_core__list _pat00 = _con481->tail;
          kk_string_t x0 = kk_string_unbox(_box_x425);
          if (kk_likely(kk_std_core__list_is_unique(_x0))) {
            kk_std_core__list_drop(_pat00, _ctx);
            kk_std_core__list_free(_x0, _ctx);
          }
          else {
            kk_string_dup(x0);
            kk_std_core__list_decref(_x0, _ctx);
          }
          _x480 = x0; /*string*/
        }
        else {
          _x480 = kk_string_empty(); /*string*/
        }
      }
      _this_2133 = kk_std_os_path_split_base(_x480, _ctx); /*(string, string)*/
      kk_string_t _x484;
      {
        kk_box_t _box_x426 = _this_2133.fst;
        kk_box_t _box_x427 = _this_2133.snd;
        kk_string_t _x = kk_string_unbox(_box_x426);
        kk_string_dup(_x);
        kk_std_core_types__tuple2__drop(_this_2133, _ctx);
        _x484 = _x; /*string*/
      }
      kk_string_t _x487;
      kk_define_string_literal(, _s488, 4, "node")
      _x487 = kk_string_dup(_s488); /*string*/
      _x478 = kk_string_is_eq(_x484,_x487,kk_context()); /*bool*/
    }
    else {
      _x478 = false; /*bool*/
    }
    if (_x478) {
      if (kk_likely(kk_std_core__list_is_unique(_match_439))) {
        kk_box_drop(_box_x424, _ctx);
        kk_std_core__list_free(_match_439, _ctx);
      }
      else {
        kk_std_core__list_dup(xx);
        kk_std_core__list_decref(_match_439, _ctx);
      }
      return kk_std_core_drop(xx, kk_integer_from_small(1), _ctx);
    }
  }
  {
    return kk_std_core_drop(_match_439, kk_integer_from_small(1), _ctx);
  }
}
 
// Returns the value of an environment variable `name` (or `Nothing` if not present)


// lift anonymous function
struct kk_std_os_env_get_env_fun493__t_1 {
  struct kk_function_s _base;
  kk_string_t name;
};
static bool kk_std_os_env_get_env_fun493_1(kk_function_t _fself, kk_box_t _b_434, kk_context_t* _ctx);
static kk_function_t kk_std_os_env_new_get_env_fun493_1(kk_string_t name, kk_context_t* _ctx) {
  struct kk_std_os_env_get_env_fun493__t_1* _self = kk_function_alloc_as(struct kk_std_os_env_get_env_fun493__t_1, 2, _ctx);
  _self->_base.fun = kk_cfun_ptr_box(&kk_std_os_env_get_env_fun493_1, kk_context());
  _self->name = name;
  return &_self->_base;
}

static bool kk_std_os_env_get_env_fun493_1(kk_function_t _fself, kk_box_t _b_434, kk_context_t* _ctx) {
  struct kk_std_os_env_get_env_fun493__t_1* _self = kk_function_as(struct kk_std_os_env_get_env_fun493__t_1*, _fself);
  kk_string_t name = _self->name; /* string */
  kk_drop_match(_self, {kk_string_dup(name);}, {}, _ctx)
  kk_string_t _x494 = kk_string_unbox(_b_434); /*string*/
  return kk_string_is_eq(_x494,name,kk_context());
}

kk_std_core_types__maybe kk_std_os_env_get_env_1(kk_string_t name, kk_context_t* _ctx) { /* (name : string) -> ndet maybe<string> */ 
  kk_std_core__list _b_435_432;
  kk_box_t _x491;
  kk_std_core__delayed _x492 = kk_std_core__delayed_dup(kk_std_os_env_environ); /*delayed<ndet,std/os/env/env>*/
  _x491 = kk_std_core_force(_x492, _ctx); /*1001*/
  _b_435_432 = kk_std_core__list_unbox(_x491, _ctx); /*std/os/env/env*/
  return kk_std_core_lookup(_b_435_432, kk_std_os_env_new_get_env_fun493_1(name, _ctx), _ctx);
}

// initialization
void kk_std_os_env__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core__init(_ctx);
  kk_std_os_path__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_std_os_env_argv = kk_std_core_delay(kk_std_os_env_new_argv_fun445(_ctx), _ctx); /*delayed<ndet,list<string>>*/
  }
  {
    kk_std_os_env_environ = kk_std_core_delay(kk_std_os_env_new_environ_fun466(_ctx), _ctx); /*delayed<ndet,std/os/env/env>*/
  }
}

// termination
void kk_std_os_env__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core__delayed_drop(kk_std_os_env_environ, _ctx);
  kk_std_core__delayed_drop(kk_std_os_env_argv, _ctx);
  kk_std_os_path__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_types__done(_ctx);
}
