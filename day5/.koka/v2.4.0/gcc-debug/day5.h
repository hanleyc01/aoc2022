#pragma once
#ifndef kk_day5_H
#define kk_day5_H
// Koka generated module: "day5", koka version: 2.4.0, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core.h"
#include "std_text_parse.h"
#include "std_os_path.h"
#include "std_os_dir.h"
#include "std_os_file.h"
#include "stack.h"

// type declarations

// value declarations

kk_std_core__list kk_day5__mlift3836_parse_instrs(kk_std_core__list _y_3660, kk_context_t* _ctx); /* (list<list<maybe<int>>>) -> exn list<list<int>> */ 

kk_std_core__list kk_day5__mlift3837_parse_instrs(kk_std_core__list _y_3658, kk_context_t* _ctx); /* (list<list<maybe<int>>>) -> exn list<list<int>> */ 

kk_std_core__list kk_day5__mlift3838_parse_instrs(kk_std_core__list _y_3656, kk_context_t* _ctx); /* (list<list<string>>) -> exn list<list<int>> */ 

kk_std_core__list kk_day5_parse_instrs(kk_std_core__list lexbuf, kk_context_t* _ctx); /* (lexbuf : list<list<string>>) -> exn list<list<int>> */ 

kk_std_core__list kk_day5__mlift3839_op(kk_std_core_types__ctail _acc, kk_std_core__list acc, kk_function_t p, kk_box_t y, kk_std_core__list yy, bool _y_3663, kk_context_t* _ctx); /* forall<a,e> (ctail<list<list<a>>>, acc : list<a>, p : (a) -> e bool, y : a, yy : list<a>, bool) -> e list<list<a>> */ 

kk_std_core__list kk_day5__mlift3840_op(kk_function_t _accm, kk_std_core__list acc0, kk_function_t p0, kk_box_t y0, kk_std_core__list yy0, bool _y_3668, kk_context_t* _ctx); /* forall<a,e> ((list<list<a>>) -> list<list<a>>, acc : list<a>, p : (a) -> e bool, y : a, yy : list<a>, bool) -> e list<list<a>> */ 

kk_std_core__list kk_day5__ctail_lift3647_split(kk_std_core__list ll_sq_, kk_std_core__list acc1, kk_function_t p1, kk_std_core_types__ctail _acc0, kk_context_t* _ctx); /* forall<a,e> (ll' : list<a>, acc : list<a>, p : (a) -> e bool, ctail<list<list<a>>>) -> e list<list<a>> */ 

kk_std_core__list kk_day5__ctailm_lift3647_split(kk_std_core__list ll0_sq_, kk_std_core__list acc2, kk_function_t p2, kk_function_t _accm0, kk_context_t* _ctx); /* forall<a,e> (ll' : list<a>, acc : list<a>, p : (a) -> e bool, (list<list<a>>) -> list<list<a>>) -> e list<list<a>> */ 

kk_std_core__list kk_day5__lift3647_split(kk_std_core__list ll1_sq_, kk_std_core__list acc3, kk_function_t p3, kk_context_t* _ctx); /* forall<a,e> (ll' : list<a>, acc : list<a>, p : (a) -> e bool) -> e list<list<a>> */ 
 
// Port of Haskell fuction [`split`](https://hackage.haskell.org/package/extra-1.7.12/docs/src/Data.List.Extra.html#split),
// Splits a list into components delimited by separators, where the predicate
// returns `true` for a separator element. The resulting components do not contain any
// seperators. Two adjacent separators result in an empty component in the output.
// ```
// val ll = "aaa;bbb;ccc"
// ll.split( fn(x) (x == ';') ) // results in ["aaa", "bbb", "ccc"]
// val ll' = "aaa;;bbb;;ccc"
// ll.split( fn(x) (x == ';') ) // results in ["aaa", "", "bbb", "", "ccc"]
// ```

static inline kk_std_core__list kk_day5_split(kk_std_core__list ll, kk_function_t predicate, kk_context_t* _ctx) { /* forall<a,e> (ll : list<a>, predicate : (a) -> e bool) -> e list<list<a>> */ 
  return kk_day5__lift3647_split(ll, kk_std_core__new_Nil(_ctx), predicate, _ctx);
}

kk_std_core_types__maybe kk_day5_get(kk_std_core__list ls, kk_integer_t index, kk_context_t* _ctx); /* forall<a> (ls : list<a>, index : int) -> maybe<a> */ 

kk_std_core__list kk_day5_insert(kk_std_core__list ls, kk_box_t to_insert, kk_integer_t index, kk_context_t* _ctx); /* forall<a> (ls : list<a>, to-insert : a, index : int) -> list<a> */ 

kk_std_core__list kk_day5__mlift3841_remove(kk_box_t x, kk_std_core__list _y_3679, kk_context_t* _ctx); /* forall<a> (x : a, list<a>) -> exn list<a> */ 

kk_std_core__list kk_day5_remove(kk_std_core__list ls, kk_integer_t index, kk_context_t* _ctx); /* forall<a> (ls : list<a>, index : int) -> exn list<a> */ 

kk_std_core__list kk_day5__mlift3842_execute(kk_std_core__list d, kk_integer_t from_index, kk_stack__stack to, kk_integer_t to_index, kk_std_core__list xx, kk_std_core_types__tuple2_ _y_3689, kk_context_t* _ctx); /* (d : list<stack/stack<string>>, from-index : int, to : stack/stack<string>, to-index : int, xx : list<list<int>>, (list<string>, stack/stack<string>)) -> <div,exn> list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3843_execute(kk_stack__stack from, kk_integer_t from_index0, kk_integer_t quantity, kk_stack__stack to0, kk_integer_t to_index0, kk_std_core__list xx0, kk_std_core__list d0, kk_context_t* _ctx); /* (from : stack/stack<string>, from-index : int, quantity : int, to : stack/stack<string>, to-index : int, xx : list<list<int>>, d : list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3844_execute(kk_stack__stack from0, kk_integer_t from_index1, kk_integer_t quantity0, kk_stack__stack to1, kk_integer_t to_index1, kk_std_core__list xx1, kk_std_core__list _y_3687, kk_context_t* _ctx); /* (from : stack/stack<string>, from-index : int, quantity : int, to : stack/stack<string>, to-index : int, xx : list<list<int>>, list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3845_execute(kk_std_core__list d00, kk_integer_t from_index2, kk_stack__stack to2, kk_integer_t to_index2, kk_std_core__list xx2, kk_std_core_types__tuple2_ _y_3694, kk_context_t* _ctx); /* (d0 : list<stack/stack<string>>, from-index : int, to : stack/stack<string>, to-index : int, xx : list<list<int>>, (list<string>, stack/stack<string>)) -> <div,exn> list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3846_execute(kk_stack__stack from1, kk_integer_t from_index3, kk_integer_t quantity1, kk_stack__stack to3, kk_integer_t to_index3, kk_std_core__list xx3, kk_std_core__list d01, kk_context_t* _ctx); /* (from : stack/stack<string>, from-index : int, quantity : int, to : stack/stack<string>, to-index : int, xx : list<list<int>>, d0 : list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3847_execute(kk_stack__stack from2, kk_integer_t from_index4, kk_integer_t quantity2, kk_stack__stack to4, kk_integer_t to_index4, kk_std_core__list xx4, kk_std_core__list _y_3692, kk_context_t* _ctx); /* (from : stack/stack<string>, from-index : int, quantity : int, to : stack/stack<string>, to-index : int, xx : list<list<int>>, list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3848_execute(kk_std_core__list desc, kk_stack__stack from3, kk_integer_t from_index5, kk_integer_t quantity3, kk_integer_t to_index5, kk_std_core__list xx5, kk_stack__stack to5, kk_context_t* _ctx); /* (desc : list<stack/stack<string>>, from : stack/stack<string>, from-index : int, quantity : int, to-index : int, xx : list<list<int>>, to : stack/stack<string>) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3849_execute(kk_std_core__list desc0, kk_integer_t from_index6, kk_integer_t quantity4, kk_integer_t to_index6, kk_std_core__list xx6, kk_stack__stack from4, kk_context_t* _ctx); /* (desc : list<stack/stack<string>>, from-index : int, quantity : int, to-index : int, xx : list<list<int>>, from : stack/stack<string>) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3850_execute(kk_std_core__list desc1, kk_integer_t from_index7, kk_integer_t quantity5, kk_std_core__list xx7, kk_integer_t _y_3684, kk_context_t* _ctx); /* (desc : list<stack/stack<string>>, from-index : int, quantity : int, xx : list<list<int>>, int) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3851_execute(kk_std_core__list desc2, kk_integer_t quantity6, kk_std_core__list x7, kk_std_core__list xx8, kk_integer_t _y_3683, kk_context_t* _ctx); /* (desc : list<stack/stack<string>>, quantity : int, x : list<int>, xx : list<list<int>>, int) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3852_execute(kk_std_core__list desc3, kk_std_core__list x9, kk_std_core__list xx9, kk_integer_t quantity7, kk_context_t* _ctx); /* (desc : list<stack/stack<string>>, x : list<int>, xx : list<list<int>>, quantity : int) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5_execute(kk_std_core__list desc4, kk_std_core__list ins, kk_context_t* _ctx); /* (desc : list<stack/stack<string>>, ins : list<list<int>>) -> pure list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3853_op(kk_std_core_types__ctail _acc, kk_std_core__list _ctail_3655, kk_std_core__list _y_3701, kk_context_t* _ctx); /* forall<a> (ctail<list<list<a>>>, list<list<a>>, list<list<a>>) -> <exn,div> list<list<a>> */ 

kk_std_core__list kk_day5__mlift3854_op(kk_std_core_types__ctail _acc0, kk_std_core__list ls, kk_std_core__list _ctail_3653, kk_context_t* _ctx); /* forall<a> (ctail<list<list<a>>>, ls : list<list<a>>, list<a>) -> <exn,div> list<list<a>> */ 

kk_std_core__list kk_day5__ctail_transpose(kk_std_core__list ls0, kk_std_core_types__ctail _acc1, kk_context_t* _ctx); /* forall<a> (ls : list<list<a>>, ctail<list<list<a>>>) -> <exn,div> list<list<a>> */ 

kk_std_core__list kk_day5_transpose(kk_std_core__list ls1, kk_context_t* _ctx); /* forall<a> (ls : list<list<a>>) -> <exn,div> list<list<a>> */ 
 
// monadic lift

static inline kk_stack__stack kk_day5__mlift3855_parse_desc(kk_std_core__list _y_3707, kk_context_t* _ctx) { /* (list<string>) -> <exn,div> stack/stack<string> */ 
  return kk_stack_from_list(_y_3707, _ctx);
}

kk_std_core__list kk_day5__mlift3856_parse_desc(kk_std_core__list _y_3706, kk_context_t* _ctx); /* (list<list<string>>) -> <exn,div> list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3857_parse_desc(kk_std_core__list _y_3705, kk_context_t* _ctx); /* (list<list<string>>) -> <div,exn> list<stack/stack<string>> */ 

kk_std_core__list kk_day5_parse_desc(kk_std_core__list lexbuf, kk_context_t* _ctx); /* (lexbuf : list<list<string>>) -> pure list<stack/stack<string>> */ 
 
// monadic lift

static inline kk_unit_t kk_day5__mlift3858_main(kk_std_core__list _y_3717, kk_context_t* _ctx) { /* (list<()>) -> <console,div,exn,fsys> () */ 
  kk_std_core_types__maybe _b_4826_4825 = kk_std_core_head_1(_y_3717, _ctx); /*maybe<()>*/;
  kk_box_t _x5986 = kk_std_core_unjust(_b_4826_4825, _ctx); /*1001*/
  kk_unit_unbox(_x5986); return kk_Unit;
}

kk_unit_t kk_day5__mlift3859_main(kk_std_core__list _y_3716, kk_context_t* _ctx); /* (list<stack/stack<string>>) -> pure () */ 

kk_unit_t kk_day5__mlift3860_main(kk_std_core__list description, kk_std_core__list instructions, kk_std_core__list wild__, kk_context_t* _ctx); /* (description : list<stack/stack<string>>, instructions : list<list<int>>, wild_ : list<()>) -> <console,div,exn,fsys> () */ 

kk_unit_t kk_day5__mlift3861_main(kk_std_core__list description, kk_std_core__list instructions, kk_context_t* _ctx); /* (description : list<stack/stack<string>>, instructions : list<list<int>>) -> exn () */ 

kk_unit_t kk_day5__mlift3862_main(kk_std_core__list lexed, kk_std_core__list description, kk_context_t* _ctx); /* (lexed : list<list<string>>, description : list<stack/stack<string>>) -> pure () */ 

kk_unit_t kk_day5__mlift3863_main(kk_std_core__list lexed, kk_context_t* _ctx); /* (lexed : list<list<string>>) -> <console,div,exn,fsys> () */ 

kk_unit_t kk_day5__mlift3864_main(kk_string_t contents, kk_context_t* _ctx); /* (contents : string) -> <exn,fsys> () */ 

kk_unit_t kk_day5_main(kk_context_t* _ctx); /* () -> <pure,console,fsys> () */ 

kk_unit_t kk_day5__hmain(kk_context_t* _ctx); /* () -> <console,div,fsys> () */ 

kk_std_core_types__tuple2_ kk_day5__mlift3865_op(kk_integer_t n, kk_stack__stack to, kk_std_core_types__tuple2_ _y_3719, kk_context_t* _ctx); /* (n : int, to : stack/stack<string>, (string, stack/stack<string>)) -> exn (stack/stack<string>, stack/stack<string>) */ 

kk_std_core_types__tuple2_ kk_day5__lift3648_execute0(kk_integer_t n0, kk_stack__stack from, kk_stack__stack to0, kk_context_t* _ctx); /* (n : int, from : stack/stack<string>, to : stack/stack<string>) -> <exn,div> (stack/stack<string>, stack/stack<string>) */ 

kk_std_core__list kk_day5__mlift3866_execute0(kk_std_core__list d, kk_integer_t from_index, kk_integer_t to_index, kk_std_core__list xx, kk_std_core_types__tuple2_ _y_3730, kk_context_t* _ctx); /* (d : list<stack/stack<string>>, from-index : int, to-index : int, xx : list<list<int>>, (stack/stack<string>, stack/stack<string>)) -> <exn,div> list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3867_execute0(kk_integer_t from_index, kk_stack__stack from0, kk_integer_t quantity, kk_integer_t to_index, kk_stack__stack to0, kk_std_core__list xx, kk_std_core__list d, kk_context_t* _ctx); /* (from-index : int, from0 : stack/stack<string>, quantity : int, to-index : int, to0 : stack/stack<string>, xx : list<list<int>>, d : list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3868_execute0(kk_integer_t from_index, kk_stack__stack from0, kk_integer_t quantity, kk_integer_t to_index, kk_stack__stack to0, kk_std_core__list xx, kk_std_core__list _y_3728, kk_context_t* _ctx); /* (from-index : int, from0 : stack/stack<string>, quantity : int, to-index : int, to0 : stack/stack<string>, xx : list<list<int>>, list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3869_execute0(kk_std_core__list d0, kk_integer_t from_index, kk_integer_t to_index, kk_std_core__list xx, kk_std_core_types__tuple2_ _y_3735, kk_context_t* _ctx); /* (d0 : list<stack/stack<string>>, from-index : int, to-index : int, xx : list<list<int>>, (stack/stack<string>, stack/stack<string>)) -> <exn,div> list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3870_execute0(kk_integer_t from_index, kk_stack__stack from0, kk_integer_t quantity, kk_integer_t to_index, kk_stack__stack to0, kk_std_core__list xx, kk_std_core__list d0, kk_context_t* _ctx); /* (from-index : int, from0 : stack/stack<string>, quantity : int, to-index : int, to0 : stack/stack<string>, xx : list<list<int>>, d0 : list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3871_execute0(kk_integer_t from_index, kk_stack__stack from0, kk_integer_t quantity, kk_integer_t to_index, kk_stack__stack to0, kk_std_core__list xx, kk_std_core__list _y_3733, kk_context_t* _ctx); /* (from-index : int, from0 : stack/stack<string>, quantity : int, to-index : int, to0 : stack/stack<string>, xx : list<list<int>>, list<stack/stack<string>>) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3872_execute0(kk_std_core__list desc, kk_integer_t from_index, kk_stack__stack from0, kk_integer_t quantity, kk_integer_t to_index, kk_std_core__list xx, kk_stack__stack to0, kk_context_t* _ctx); /* (desc : list<stack/stack<string>>, from-index : int, from0 : stack/stack<string>, quantity : int, to-index : int, xx : list<list<int>>, to0 : stack/stack<string>) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3873_execute0(kk_std_core__list desc, kk_integer_t from_index, kk_integer_t quantity, kk_integer_t to_index, kk_std_core__list xx, kk_stack__stack from0, kk_context_t* _ctx); /* (desc : list<stack/stack<string>>, from-index : int, quantity : int, to-index : int, xx : list<list<int>>, from0 : stack/stack<string>) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3874_execute0(kk_std_core__list desc, kk_integer_t from_index, kk_integer_t quantity, kk_std_core__list xx, kk_integer_t _y_3725, kk_context_t* _ctx); /* (desc : list<stack/stack<string>>, from-index : int, quantity : int, xx : list<list<int>>, int) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3875_execute0(kk_std_core__list desc, kk_integer_t quantity, kk_std_core__list x0, kk_std_core__list xx, kk_integer_t _y_3724, kk_context_t* _ctx); /* (desc : list<stack/stack<string>>, quantity : int, x0 : list<int>, xx : list<list<int>>, int) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5__mlift3876_execute0(kk_std_core__list desc, kk_std_core__list x0, kk_std_core__list xx, kk_integer_t quantity, kk_context_t* _ctx); /* (desc : list<stack/stack<string>>, x0 : list<int>, xx : list<list<int>>, quantity : int) -> exn list<stack/stack<string>> */ 

kk_std_core__list kk_day5_execute0(kk_std_core__list desc, kk_std_core__list ins, kk_context_t* _ctx); /* (desc : list<stack/stack<string>>, ins : list<list<int>>) -> pure list<stack/stack<string>> */ 

void kk_day5__init(kk_context_t* _ctx);


void kk_day5__done(kk_context_t* _ctx);

#endif // header
