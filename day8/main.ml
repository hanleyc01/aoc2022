let test = "test.txt"
let data = "data.txt"

let read_file file =
    let ch = open_in file in
    let n = in_channel_length ch in
    let s = really_input_string ch n in
    close_in ch; s

let unjust just =
    match just with
    | Some x -> x
    | None -> raise (Failure "ERROR: Expected SOME X found NONE")

let rec print_lines lines =
    let rec print_line line =
        match line with
        | [] -> ()
        | (x :: xx) ->
            print_string x; print_char ' '; print_line xx in
    match lines with
    | [] -> ()
    | (x :: xx) -> print_line x; print_char '\n'; print_lines xx

(* PART ONE *)

let explode s =
  let rec exp i l =
    if i < 0 then l else exp (i - 1) (s.[i] :: l) in
  exp (String.length s - 1) [];;

let int_of_char = function
    | '0' -> 0
    | '1' -> 1
    | '2' -> 2 
    | '3' -> 3
    | '4' -> 4
    | '5' -> 5
    | '6' -> 6
    | '7' -> 7
    | '8' -> 8
    | '9' -> 9
    | _ -> raise (Failure "Attempted to convert non-integer character to integer")

let rec transpose = function
    | [] -> []
    | [] :: xss -> transpose xss
    | (x :: xs) :: xss ->
        (x :: List.map List.hd xss) :: transpose (xs :: List.map List.tl xss)

let rec list_and l1 l2 =
    match (l1, l2) with
    | ([], []) -> true
    | ([], _) -> false
    | (_, []) -> false
    | ((x::xx), (y::yy)) ->
    (x && y) && list_and xx yy

let rec replicate a n =
    if n <> 0 then
        a :: replicate a (n - 1)
    else 
        []

let rec greater_thans = function
    | [] -> []
    | (x :: xx) ->
        let compare = List.for_all (fun y -> x > y) xx in
        compare :: greater_thans xx

let rights xs = greater_thans xs
let lefts xs = List.rev xs |> greater_thans |> List.rev

let double_bool_list = List.map (List.map string_of_bool)
let double_int_list = List.map (List.map string_of_int)

let rec compare left right =
    match (left, right) with
    | ([], []) -> []
    | (_, []) -> raise (Failure "unable to compare list of unequal dimensions")
    | ([], _) -> raise (Failure "unable to compare list of unequal dimensions")
    | (x::xx), y::yy ->
        let zip = List.combine x y in 
        let pairwise_or p = (fst p) || (snd p) in 
        let res = List.map pairwise_or zip in
        res :: compare xx yy

let get_visible lines =
    let right = List.map rights lines in
    let left = List.map lefts lines in
    let t = transpose lines in
    let down = List.map rights t |> transpose in
    let up = List.map lefts t |> transpose in
    let res = [right;left;up;down] in
    let ld0 = List.length right in
    let ld1 = List.length (List.nth right 0) in
    let null = replicate (replicate false ld1) ld0 in
    let comp = List.fold_left compare null res in
    comp

let init xs = List.rev xs |> List.tl |> List.rev

let get_number_inners xs =
    List.flatten xs 
            |> List.filter (fun x -> x = true)
            |> List.length 

(* PART TWO *)

let take_while pred ls =
    let rec accum l pred acc =
        match l with
        | [] -> List.rev acc
        | (x :: xx) ->
            if pred x 
                then accum xx pred (x :: acc)
                else List.rev acc in
    accum ls pred []

let take_until pred ls =
    let rec accum l pred acc =
        match l with
        | [] -> acc
        | (x :: xx) ->
            if pred x then
                x :: acc
            else accum xx pred (x :: acc) in
    accum ls pred [] |> List.rev

let rec scenics = function
    | [] -> []
    | (x :: xx) ->
        let greaters = take_until (fun y -> x <= y) xx in
        let scene_count = List.length greaters in 
        scene_count :: scenics xx

let scenic_rights xs = scenics xs
let scenic_lefts xs = List.rev xs |> scenics |> List.rev

let rec mult left right =
    match (left, right) with
    | ([], []) -> []
    | (_, []) -> raise (Failure "unable to compare list of unequal dimensions")
    | ([], _) -> raise (Failure "unable to compare list of unequal dimensions")
    | (x::xx), y::yy ->
        let zip = List.combine x y in
        let pairwise_mult p =
            let f = fst p in
            let s = snd p in
            f * s in
        let res = List.map pairwise_mult zip in
        res :: mult xx yy

let get_scenics lines =
    let right = List.map scenic_rights lines in
    let left = List.map scenic_lefts lines in
    let t = transpose lines in
    let down = List.map scenic_rights t |> transpose in
    let up = List.map scenic_lefts t |> transpose in
    let res = [right;left;up;down] in
    let ld0 = List.length right in
    let ld1 = List.length (List.nth right 0) in
    let null = replicate (replicate 1 ld1) ld0 in
    let comp = List.fold_left mult null res in
    comp

(* MAIN *)
let () =
    let contents = read_file data in
    let lines = String.split_on_char '\n' contents |> List.map explode in
    let num_2d = List.map (List.map int_of_char) lines |> init in
    let greater_thans = get_visible num_2d in
    let inners = get_number_inners greater_thans in
    let scenic_scores = get_scenics num_2d in
    let max_scene = List.flatten scenic_scores |> List.fold_left Int.max 0 in
    print_endline "Number of visible inner trees:";
    string_of_int inners |> print_endline;
    print_endline "Highest scenic score possible:";
    string_of_int max_scene |> print_endline
