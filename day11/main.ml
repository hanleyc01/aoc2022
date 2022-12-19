(* Part I *)

(** Standard operation that really should be put into the stdlib *)
let read_file file =
    let ic = open_in file in
    let ic_length = in_channel_length ic in
    let contents = really_input_string ic ic_length in
    close_in ic; contents

(* More standard library functions that should be a thing *)

(** Partial function that provides the last element of a list. 
    Raises exn `Failure` on empty *)
let last xs =
    try List.rev xs |> List.hd with
    | _ -> raise (Failure "ERROR: `last` on empty list")

(** Partial function that provides every element in a list aside from
    the last. Raises exn `Failure` on empty *)
let init xs = 
    try List.rev xs |> List.tl |> List.rev with
    | _ -> raise (Failure "ERROR: `init` on empty list")

class monkey (name : int) (op : int -> int) (test: int -> int) (items : int list) =
    object(self)
        val mutable _items = ref items 
        val mutable _count = ref 0
        method name = name
        method items = !_items
        method op = op
        method test = test
        method catch thing =
            _items := !_items @ [thing]
        method inspect (ms : monkey ref list) : unit =
            List.iter (fun x -> 
                let worry = op x in
                let bored = worry / 3 in
                let n = test bored in
                let to_throw = List.nth ms n in
                !to_throw#catch bored;
                _count := !_count + 1) !_items;
                _items := []
        method count = _count
end

let monkey_business monkeys =
    List.iter (fun x -> !x#inspect monkeys) monkeys

let rec do_some_monkey_business n monkeys =
    if n <> 0 then 
        (monkey_business monkeys; do_some_monkey_business (n - 1) monkeys)

let get_counts monkeys =
    let rec accum ms acc =
        match ms with
        | [] -> acc
        | (x :: xx) ->
            accum xx (!x#count :: acc) in
    accum monkeys [] |> List.rev

type token =
    | Monkey of int
    | Op of string * int
    | Test of int * int * int
    | Start of int list

let string_of_token = function
    | Monkey i -> "MONKEY " ^ string_of_int i
    | Op (s, i) -> "OP " ^ s ^ " " ^ string_of_int i
    | Test (x,y,z) -> 
            "IF X MOD " ^ string_of_int x ^ " = 0 THEN " ^ string_of_int y ^ " ELSE " ^ string_of_int z
    | Start xs -> 
        "START " ^ "[" ^ (List.map string_of_int xs |> String.concat "; ") ^ "]"

let tokenize lines =
    let rec accum ls acc =
        match ls with
        | [] -> acc
        | (x :: xx) ->
            let x' = String.trim x in
            let xs = print_endline x'; String.split_on_char ' ' x' in
            match xs with
            | [] -> accum xx acc
            | (y :: yy) ->
                match y with
                | "Monkey" ->
                    let num = List.hd yy in
                    let really_num = String.get num 0 |> Char.escaped |> int_of_string in
                    accum xx (Monkey really_num :: acc)
                | "Starting" ->
                    let rest = 
                        List.tl yy
                            |> List.map (String.split_on_char ',') 
                            |> List.map List.hd
                            |> List.map int_of_string in
                    accum xx (Start rest :: acc)
                | "Operation:" -> (*TODO TODO TODO: CAPTURE OPERATION!!!*)
                | _ -> accum xx (acc)
                    

    in accum lines [] |> List.rev

let get_monkeys ls = 
    let lines = String.split_on_char '\n' ls |> init in
    let tokens = tokenize lines in
    List.map string_of_token tokens |> List.iter prerr_endline;[]

(* IO *)


let deref x = !x

let test = "test.txt"

let () =
    let contents = read_file test in
    let monkeys = get_monkeys contents in
    let counts = do_some_monkey_business 20 monkeys; get_counts monkeys in
    let two_most_active = 
        let xx = List.fast_sort compare (List.map deref counts) |> List.rev in
        let fst = List.hd xx in
        let snd = List.tl xx |> List.hd in
        fst * snd in
    print_endline "counts";
    List.map deref counts |> List.map string_of_int |> List.iter print_endline;
    print_endline "two most active";
    string_of_int two_most_active |> print_endline;
