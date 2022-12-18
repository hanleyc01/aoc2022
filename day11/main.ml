(* Part I *)

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
                let n = test worry in
                let to_throw = List.nth ms n in
                !to_throw#catch worry;
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

(* IO *)

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

let deref x = !x

let () =
    (*let m0 = new monkey 0 (fun x -> x * 3) (fun x -> if x mod 2 = 0 then 1 else 4) [66;59;64;51] in 
    let m1 = new monkey 1 (fun x -> x * 19) (fun x -> if x mod 7 = 0 then 3 else 5) [67;61] in
    let m2 = new monkey 2 (fun x -> x + 2) (fun x -> if x mod 11 = 0 then 4 else 0) [86;93;80;70;71;81;56] in
    let m3 = new monkey 3 (fun x -> x * x) (fun x -> if x mod 19 = 0 then 7 else 6) [94] in
    let m4 = new monkey 4 (fun x -> x + 8) (fun x -> if x mod 3 = 0 then 5 else 1) [71;92;64] in
    let m5 = new monkey 5 (fun x -> x + 6) (fun x -> if x mod 5 = 0 then 3 else 6) [58;81;92;75;56] in
    let m6 = new monkey 6 (fun x -> x + 7) (fun x -> if x mod 17 = 0 then 7 else 2) [82;98;77;94;86;81] in
    let m7 = new monkey 7 (fun x -> x + 4) (fun x -> if x mod 13 = 0 then 2 else 0) [54; 95;70;93;88;93;63;50] in
    let monkeys = List.map ref [m0;m1;m2;m3;m4;m5;m6;m7] in*)
    let m0 = new monkey 0 (fun x -> x * 19) (fun x -> if x mod 23 = 0 then 2 else 3) [79;98] in
    let m1 = new monkey 1 (fun x -> x + 6) (fun x -> if x mod 19 = 0 then 2 else 0) [54;65;75;74] in
    let m2 = new monkey 2 (fun x -> x * x) (fun x -> if x mod 13 = 0 then 1 else 3) [79;60;97] in
    let m3 = new monkey 3 (fun x -> x + 3) (fun x -> if x mod 17 = 0 then 0 else 1) [74] in
    let monkeys = List.map ref [m0;m1;m2;m3] in
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
