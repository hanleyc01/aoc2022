import std/os/path
import std/os/file

// Represents the possible choices that a player can make in 
// the game of Rock, Paper, Scissors
type rps
    Rock
    Paper
    Scissors

fun show( m : rps ) : string
    match m
        Rock -> "Rock"
        Paper -> "Paper"
        Scissors -> "Scissors"

// Given two `rps`, return back important win-information (as specified in problem
// description)
fun play( p1, p2 ) : _ (int, int)
    val rock = 1
    val paper = 2
    val scissors = 3
    val loss = 0
    val draw = 3
    val win = 6
    match (p1, p2)
        (Rock, Scissors)     -> (win + rock, loss + scissors)
        (Rock, Paper)        -> (loss + rock, win + paper)
        (Rock, Rock)         -> (draw + rock, draw + rock)
        (Scissors, Paper)    ->  (win + scissors, loss + paper)
        (Scissors, Rock)     -> (loss + scissors, win + rock)
        (Scissors, Scissors) -> (draw + scissors, draw + scissors)
        (Paper, Rock)        -> (win + paper, loss + rock)
        (Paper, Scissors)    -> (loss + paper, win + scissors)
        (Paper, Paper)       -> (draw + paper, draw + paper)
        
// Retrieve a `rps` from a `string`
fun rps( s )
    match s
        "A" -> Rock
        "B" -> Paper
        "C" -> Scissors

type res
    L
    D
    W

fun res( s )
    match s
        "X" -> L
        "Y" -> D
        "Z" -> W

fun show ( r : res ) : string
    match r
        L -> "L"
        D -> "D"
        W -> "W"

fun play2( p : rps, r : res )
    val rock = 1
    val paper = 2
    val scissors = 3
    val loss = 0
    val draw = 3
    val win = 6
    println("( " ++ p.show ++ ", " ++ r.show ++ " )")
    match (p, r)
        (Rock, W) -> (win + paper, 0)
        (Rock, L) -> (loss + scissors, 0)
        (Rock, D) -> (draw + rock, 0)
        (Scissors, W) ->  (win + rock, 0)
        (Scissors, L) -> (loss + paper, 0)
        (Scissors, D) -> (draw + scissors, 0)   
        (Paper, W) -> (win + scissors, 0)
        (Paper, L) -> (loss + rock, 0)
        (Paper, D) -> (draw + paper, 0)
     

fun split-tuple( s : string ) : _ maybe<(string, string)>
    match s.split(" ")
        Cons(xx, Cons(yy, Nil)) -> Just((xx, yy))
        _ -> Nothing

inline fun (==) ( x : maybe<a>, y : maybe<a> ) : bool
    match (x, y)
        (Nothing, Nothing) -> True
        _ -> False
    
/*fun fst( p : (a, b) ) : a
    match p { (x, _) -> x }*/

/*fun snd( p : (a, b) ) : b
    match p { (_, y) -> y }*/

fun curry( f : (a, b) -> c, x : a, y : b ) : c
    f(x, y)

fun main()
    val conts = path("data.txt").read-text-file.lines
    conts.map(trim).filter(is-notempty)
        .map(split-tuple)
        .map(unjust)
        .map( fn (x) (x.fst.rps, x.snd.res) )
        .map( fn (x) ((x.fst.play2(x.snd)) ) )
        .unzip.fst
        .sum.show.println
