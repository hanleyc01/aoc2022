type command =
    | Addx of int
    | Noop

let parse lines =
    let rec accum ls acc =
        match ls with
        | [] -> acc
        | (x :: xx) ->
            if x = "noop" then
                accum xx (Noop :: acc)
            else
                let v = List.nth (String.split_on_char ' ' x) 1 in
                accum xx (Addx (int_of_string v) :: acc) in
    accum lines [] |> List.rev

let interp cmds =
    let rec accum cs stack =
        match cs with
        | [] -> stack 
        | (x :: xx) ->
            match x with
            | Noop ->
                let next = List.hd stack in
                accum xx  (next :: stack)
            | Addx i ->
                let next = List.hd stack in
                accum xx ((i + next) :: next :: stack) in
    accum cmds [1] |> List.rev

let init xs = List.rev xs |> List.tl |> List.rev

let p_mul p = fst p * snd p

let sum_special (stack : int list) : int =
    let rec get_specials (sp : int list) (st : int list) (acc : int list) : int list =
        match sp with
        | [] -> List.rev acc
        | (x :: xx) ->
            let v = List.nth st (x - 1) in
            get_specials xx st (v :: acc) in
    let specials = [20;60;100;140;180;220] in
    let from = get_specials specials stack [] in
    List.combine specials from |> List.map p_mul 
        |> List.fold_left (+) 0

let print_stack ls =
    let rec acc ll count =
        match ll with
        | [] -> ()
        | (x :: xx) ->
            print_endline ("count: " ^ string_of_int count ^ " val: " ^ string_of_int x);
            acc xx (count + 1) in
    acc ls 0

(*  PART 2 *)

let width = 40
let height = 6

let rec replicate n a =
    if n = 0
        then []
        else a :: replicate (n - 1) a

let display_image stack =
    let board = ref (Array.make (height * width) ".") in
    let cycle = ref 0 in
    let rec enumerate st =
        match st with
        | [] -> ()
        | (x :: xx) ->
            if !cycle < Array.length !board then
            let mod_cyc = 
                if !cycle = 0 then !cycle
                else !cycle mod width in
            let pixel = [x - 1; x; x + 1] in
            if List.mem mod_cyc pixel then
                (!board.(!cycle) <- "#";
                cycle := !cycle + 1; 
                enumerate xx)
            else
                cycle := !cycle + 1;
                enumerate xx
    in let b = enumerate stack; !board in
    b

let rec take_n n ls =
    let rec accum ll c acc =
        if c = 0 then
            (List.rev acc, ll)
        else match ll with 
        | [] -> accum [] (c - 1) acc
        | (x :: xx) -> accum xx (c - 1) (x :: acc) in 
    accum ls n []

let split n ls =
    let rec accum ll num acc =
        match ll with
        | [] -> List.rev acc
        | xs -> 
            let t, rest = take_n num xs in
            accum rest num (t :: acc) in
    accum ls n []

(* IO *)

let test = "test.txt"
let small = "small.txt"
let data = "data.txt"

let rec print_lines lines =
    let rec print_line line =
        match line with
        | [] -> ()
        | (x :: xx) ->
            print_string x; print_char ' '; print_line xx in
    match lines with
    | [] -> ()
    | (x :: xx) -> print_line x; print_char '\n'; print_lines xx


let read_file file =
    let ch = open_in file in
    let n = in_channel_length ch in
    let s = really_input_string ch n in
    close_in ch; s

let () =
    let contents = read_file data in
    let lines = String.split_on_char '\n' contents |> init in
    let cmds = parse lines in
    let stack = interp cmds in
    let special = sum_special stack in
    let final_board = display_image stack in
    print_endline ("sum of special numbers is: " ^ string_of_int special);
    Array.to_list final_board |> split width |> print_lines
