let example = "test.txt"

type token =
    | Dir of string
    | File of string * int
    | Cd of file_ident
    | Ls
and file_ident = Home | Ident of string | Above

let string_of_token t =
    match t with
    | Dir s -> "DIR: " ^ s
    | Cd Home -> "CD HOME"
    | Cd (Ident s) -> "CD " ^ s
    | Cd Above -> "CD ABOVE"
    | Ls -> "LS"
    | File (s, i) -> "FILE = [ NAME: " ^ s ^ " ; SIZE: " ^ (string_of_int i) ^ " ]"

let from_just x =
    match x with
    | Some x' -> x'
    | None -> raise (Failure "Error: attempted to unwrap NONE")

(** Really read a file into its lines *)
let read_file file =
    let ic = open_in file in
    let try_read () =
        try Some (input_line ic) with End_of_file -> None in
    let rec loop acc =
        match try_read () with
        | Some s -> loop (s :: acc)
        | None -> close_in ic; List.rev acc in
    loop []

let split x = 
    String.split_on_char ' ' x
        |> List.filter (fun x -> x <> "")

let process_lines lines = 
    let tokenize (x : string) : token =
        let line = split x in
        match List.hd line with
        | "dir" ->
            let ident = List.nth_opt line 1 |> from_just in
            Dir ident
        | "$" ->
            let cmd = List.nth_opt line 1 |> from_just in
            if cmd = "cd" then
                let ident = List.nth_opt line 2 |> from_just in
                if ident = ".." then
                    Cd Above
                else if ident = "/" then
                    Cd Home
                else
                    Cd (Ident ident)
            else if cmd = "ls" then
                Ls
            else
                raise (Failure ("Unidentified token: " ^ cmd))
        | num ->
            match int_of_string_opt num with
            | Some i ->
                let ident = List.nth_opt line 1 |> from_just in
                File (ident, i)
            | None -> raise (Failure ("Unidentified token: " ^ num)) in 
    List.map tokenize lines

type node = {
    parent : node ref option;
    children : node list;
    size : int
}

let add_child node child =
    {parent = node.parent; children = child :: node.children; size = node.size}

let dirs tokens =
    let rec add_size node size =
        match node.parent with
        | None -> node
        | Some s ->
            
    let rec accum ts acc =
        match ts with
        | [] -> acc
        | (x::xx) ->
            match x with
            | Cd Above ->
                let above = from_just acc.parent in
                accum xx !above
            | Cd (Ident i) ->
                let above = ref acc in
                let next = {parent = Some above; children = []; size = 0} in
                above := add_child !above next;
                accum xx next
            | File (_, size) ->
                let acc' = add_size acc size in
                accum xx acc'
            | _ -> accum xx acc
    in accum tokens {parent = None; children = []; size = 0}

(** Main function *)
let () =
    let file = example in
    let contents = read_file file in
    let tokens = process_lines contents in
    List.map string_of_token tokens 
            |> List.map print_endline
            |> List.hd
