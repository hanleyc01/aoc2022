#pragma once
#ifndef kk_main_H
#define kk_main_H
// Koka generated module: "main", koka version: 2.4.0, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core.h"
#include "std_text_parse.h"
#include "std_os_path.h"
#include "std_os_dir.h"
#include "std_os_file.h"
#include "std_os_env.h"
#include "list_dash_extra.h"

// type declarations

// value type main/packet
struct kk_main_Packet {
  kk_std_core__list datastream;
};
typedef struct kk_main_Packet kk_main__packet;
static inline kk_main__packet kk_main__new_Packet(kk_std_core__list datastream, kk_context_t* _ctx) {
  kk_main__packet _con = { datastream };
  return _con;
}
static inline bool kk_main__is_Packet(kk_main__packet x) {
  return (true);
}
static inline kk_main__packet kk_main__packet_dup(kk_main__packet _x) {
  kk_std_core__list_dup(_x.datastream);
  return _x;
}
static inline void kk_main__packet_drop(kk_main__packet _x, kk_context_t* _ctx) {
  kk_std_core__list_drop(_x.datastream, _ctx);
}
static inline kk_box_t kk_main__packet_box(kk_main__packet _x, kk_context_t* _ctx) {
  return kk_std_core__list_box(_x.datastream, _ctx);
}
static inline kk_main__packet kk_main__packet_unbox(kk_box_t _x, kk_context_t* _ctx) {
  return kk_main__new_Packet(kk_std_core__list_unbox(_x, _ctx), _ctx);
}

// value declarations
 
// Automatically generated. Retrieves the `datastream` constructor field of the `:packet` type.

static inline kk_std_core__list kk_main_datastream(kk_main__packet packet0, kk_context_t* _ctx) { /* (packet : packet) -> list<char> */ 
  {
    kk_std_core__list _x = packet0.datastream;
    return kk_std_core__list_dup(_x);
  }
}

static inline kk_main__packet kk_main__copy(kk_main__packet _this, kk_std_core_types__optional datastream0, kk_context_t* _ctx) { /* (packet, datastream : optional<list<char>>) -> packet */ 
  kk_std_core__list _x1148;
  if (kk_std_core_types__is_Optional(datastream0)) {
    kk_box_t _box_x931 = datastream0._cons.Optional.value;
    kk_std_core__list _datastream_34 = kk_std_core__list_unbox(_box_x931, NULL);
    kk_main__packet_drop(_this, _ctx);
    _x1148 = _datastream_34; /*list<char>*/
  }
  else {
    kk_std_core__list _x = _this.datastream;
    _x1148 = _x; /*list<char>*/
  }
  return kk_main__new_Packet(_x1148, _ctx);
}
 
// monadic lift

static inline bool kk_main__mlift852_count_start(kk_std_core__list sig, kk_integer_t _y_797, kk_context_t* _ctx) { /* forall<h> (sig : list<char>, int) -> <local<h>,div,exn,console> bool */ 
  kk_integer_t _brw_1146 = kk_std_core_length_1(sig, _ctx); /*int*/;
  bool _brw_1147 = kk_integer_lt_borrow(_y_797,_brw_1146,kk_context()); /*bool*/;
  kk_integer_drop(_y_797, _ctx);
  kk_integer_drop(_brw_1146, _ctx);
  return _brw_1147;
}
 
// monadic lift

static inline kk_unit_t kk_main__mlift853_count_start(kk_ref_t count, kk_integer_t _y_807, kk_context_t* _ctx) { /* forall<h> (count : local-var<h,int>, int) -> <local<h>,exn,div,console> () */ 
  kk_integer_t _b_935_933 = kk_integer_add_small_const(_y_807, 1, _ctx); /*int*/;
  kk_unit_t _brw_1145 = kk_Unit;
  kk_ref_set_borrow(count,(kk_integer_box(_b_935_933)),kk_context());
  kk_ref_drop(count, _ctx);
  _brw_1145; return kk_Unit;
}

kk_unit_t kk_main__mlift854_count_start(kk_ref_t count, kk_char_t fr, kk_context_t* _ctx); /* forall<h> (count : local-var<h,int>, fr : char) -> exn () */ 

kk_unit_t kk_main__mlift855_count_start(kk_ref_t count, kk_std_core__list sig, kk_integer_t _y_805, kk_context_t* _ctx); /* forall<h> (count : local-var<h,int>, sig : list<char>, int) -> <local<h>,exn,div,console> () */ 

kk_unit_t kk_main__mlift856_count_start(kk_ref_t count, kk_std_core__list sig, kk_char_t t, kk_context_t* _ctx); /* forall<h> (count : local-var<h,int>, sig : list<char>, t : char) -> exn () */ 

kk_unit_t kk_main__mlift857_count_start(kk_ref_t count, kk_std_core__list sig, kk_integer_t _y_803, kk_context_t* _ctx); /* forall<h> (count : local-var<h,int>, sig : list<char>, int) -> <local<h>,exn,div,console> () */ 

kk_unit_t kk_main__mlift858_count_start(kk_ref_t count, kk_std_core__list sig, kk_char_t s, kk_context_t* _ctx); /* forall<h> (count : local-var<h,int>, sig : list<char>, s : char) -> exn () */ 

kk_unit_t kk_main__mlift859_count_start(kk_ref_t count, kk_std_core__list sig, kk_integer_t _y_801, kk_context_t* _ctx); /* forall<h> (count : local-var<h,int>, sig : list<char>, int) -> <local<h>,exn,div,console> () */ 

kk_unit_t kk_main__mlift860_count_start(kk_ref_t count, kk_std_core__list sig, kk_char_t f, kk_context_t* _ctx); /* forall<h> (count : local-var<h,int>, sig : list<char>, f : char) -> exn () */ 

kk_unit_t kk_main__mlift861_count_start(kk_ref_t count, kk_std_core__list sig, kk_integer_t _y_799, kk_context_t* _ctx); /* forall<h> (count : local-var<h,int>, sig : list<char>, int) -> <local<h>,exn,div,console> () */ 
 
// monadic lift

static inline kk_unit_t kk_main__mlift862_count_start(kk_ref_t count, kk_integer_t _y_809, kk_context_t* _ctx) { /* forall<h> (count : local-var<h,int>, int) -> <local<h>,exn,div,console> () */ 
  kk_integer_t _b_1022_1020 = kk_integer_add_small_const(_y_809, 1, _ctx); /*int*/;
  kk_unit_t _brw_1135 = kk_Unit;
  kk_ref_set_borrow(count,(kk_integer_box(_b_1022_1020)),kk_context());
  kk_ref_drop(count, _ctx);
  _brw_1135; return kk_Unit;
}

kk_unit_t kk_main__mlift863_count_start(kk_ref_t count, kk_std_core__list sig, kk_integer_t _y_798, kk_context_t* _ctx); /* forall<h> (count : local-var<h,int>, sig : list<char>, int) -> <local<h>,exn,div,console> () */ 
 
// monadic lift

static inline kk_integer_t kk_main__mlift864_count_start(kk_ref_t count, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h> (count : local-var<h,int>, wild_ : ()) -> <div,local<h>,exn,console> int */ 
  kk_box_t _x1229 = kk_ref_get(count,kk_context()); /*1000*/
  return kk_integer_unbox(_x1229);
}

kk_integer_t kk_main_count_start(kk_main__packet p, kk_context_t* _ctx); /* (p : packet) -> <pure,console> int */ 

static inline kk_string_t kk_main_show(kk_main__packet p, kk_context_t* _ctx) { /* (p : packet) -> string */ 
  kk_std_core__list _x1252;
  {
    kk_std_core__list _x = p.datastream;
    _x1252 = _x; /*list<char>*/
  }
  return kk_std_core_string_2(_x1252, _ctx);
}

static inline kk_main__packet kk_main_packet(kk_std_core__list s, kk_context_t* _ctx) { /* (s : list<char>) -> packet */ 
  return kk_main__new_Packet(s, _ctx);
}
 
// monadic lift

static inline kk_unit_t kk_main__mlift865_main(kk_integer_t _y_818, kk_context_t* _ctx) { /* (int) -> <pure,console> () */ 
  kk_string_t _x1253 = kk_std_core_show(_y_818, _ctx); /*string*/
  kk_std_core_printsln(_x1253, _ctx); return kk_Unit;
}

kk_unit_t kk_main__mlift866_main(kk_string_t contents, kk_context_t* _ctx); /* (contents : string) -> <exn,fsys> () */ 

kk_unit_t kk_main__mlift867_main(kk_string_t _y_816, kk_context_t* _ctx); /* (string) -> exn () */ 

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <pure,console,fsys,ndet> () */ 

kk_unit_t kk_main__hmain(kk_context_t* _ctx); /* () -> <console,div,fsys,ndet> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
