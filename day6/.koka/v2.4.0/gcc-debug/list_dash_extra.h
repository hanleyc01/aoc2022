#pragma once
#ifndef kk_list_dash_extra_H
#define kk_list_dash_extra_H
// Koka generated module: "list-extra", koka version: 2.4.0, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core.h"

// type declarations

// value declarations

kk_std_core_types__maybe kk_list_dash_extra_get(kk_std_core__list ls, kk_integer_t index, kk_context_t* _ctx); /* forall<a> (ls : list<a>, index : int) -> maybe<a> */ 

kk_std_core__list kk_list_dash_extra_insert(kk_std_core__list ls, kk_box_t to_insert, kk_integer_t index, kk_context_t* _ctx); /* forall<a> (ls : list<a>, to-insert : a, index : int) -> list<a> */ 

kk_std_core__list kk_list_dash_extra__mlift311_remove(kk_box_t x, kk_std_core__list _y_306, kk_context_t* _ctx); /* forall<a> (x : a, list<a>) -> exn list<a> */ 

kk_std_core__list kk_list_dash_extra_remove(kk_std_core__list ls, kk_integer_t index, kk_context_t* _ctx); /* forall<a> (ls : list<a>, index : int) -> exn list<a> */ 

void kk_list_dash_extra__init(kk_context_t* _ctx);


void kk_list_dash_extra__done(kk_context_t* _ctx);

#endif // header
