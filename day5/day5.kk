import std/os/file
import std/os/path
import stack

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
fun split( ll : list<a>, predicate : (a) -> e bool ) : e list<list<a>> 
    fun accum( ll' : list<a>, acc : list<a>, p : (a) -> e bool) : e list<list<a>>
        match ll'
            Nil -> [acc]
            Cons(y, yy) -> 
                if p(y) then
                    acc.Cons(yy.accum(Nil, p))
                else
                    yy.accum(acc ++ [y], p)
    accum(ll, Nil, predicate)

fun transpose( ls : list<list<a>>) : <exn|_e> list<list<a>>
    match ls
        Nil -> []
        Cons(Nil, _) -> Nil
        _ -> Cons((ls.map(fn (x) x.head.unjust)), transpose (ls.map(fn (x) x.tail)))

fun parse-desc( lexbuf : list<list<string>> )
    val desc = lexbuf.take-while(fn(x) !x.is-nil).init
    desc.transpose.map( fn (x) x.filter( fn(y) y != "x").from-list )

fun parse-instrs( lexbuf : list<list<string>> )
    val instrs = lexbuf.drop-while(fn (x) !x.is-nil).tail.init
    instrs.map(fn(y) y.map( fn (x) (x.parse-int) )).map(fn(x) x.filter( fn(y) !y.is-nothing ))
        .map(fn(x) x.map(unjust))

fun get( ls : list<a>, index : int ) : maybe<a>
    if index == 0
        then ls.head
    else
        match ls
            Nil -> Nothing
            Cons(_,xx) -> xx.get( index - 1 )

fun remove( ls : list<a>, index : int) : _e list<a>
    match ls
        Nil ->
            if index == 0 then
                []
            else
                throw("Remove index out of bounds")
        Cons(x, xx) ->
            if index == 0 then
                xx
            else
                [x] ++ xx.remove(index - 1)

fun insert( ls : list<a>, to-insert : a, index : int) : list<a>
    match ls
        Nil -> [to-insert]
        Cons(x, xx) ->
            if index == 0 then
                [to-insert] ++ Cons(x, xx)
            else
                [x] ++ insert(xx, to-insert, index - 1)

// solution to part 1
fun execute0( desc : list<stack<string>>, ins : list<list<int>> ) : _e list<stack<string>>
    fun pop-n( n : int, from : stack<string>, to : stack<string> ) : _e (stack<string>, stack<string>)
        if n == 0 then
            (from, to)
        else
            val (p, f) = from.pop
            val t = to.push(p)
            pop-n( n - 1, f, t)
    match ins
        Nil -> desc
        Cons(x, xx) ->
            val quantity = x.head.unjust
            val from-index = x.get(1).unjust - 1
            val to-index = x.get(2).unjust - 1
            val from = desc.get(from-index).unjust
            val to = desc.get(to-index).unjust
            if from-index < to-index then
                val d = desc.remove(to-index).remove(from-index)
                val (from, to) = pop-n(quantity, from, to)
                d.insert(from, from-index).insert(to, to-index).execute(xx)
            else
                val d = desc.remove(from-index).remove(to-index)
                val (from, to) = pop-n(quantity, from, to)
                d.insert(to, to-index).insert(from, from-index).execute(xx)
                
// solution to part 2
fun execute( desc: list<stack<string>>, ins : list<list<int>> ) : _e list<stack<string>>
    match ins
        Nil -> desc
        Cons(x, xx) ->
            val quantity = x.head.unjust
            val from-index = x.get(1).unjust - 1
            val to-index = x.get(2).unjust - 1
            val from = desc.get(from-index).unjust
            val to = desc.get(to-index).unjust
            if from-index < to-index then
                val d = desc.remove(to-index).remove(from-index)
                val (vs, f) = from.pop-n(quantity)
                val t = to.push-all(vs)
                d.insert(f, from-index).insert(t, to-index).execute(xx)
            else
                val d = desc.remove(from-index).remove(to-index)
                val (vs, f) = from.pop-n(quantity)
                val t = to.push-all(vs)
                d.insert(t, to-index).insert(f, from-index).execute(xx)

fun main() : <console,exn,fsys|_e> ()
    val contents = read-text-file( "data.txt".path )
    val lexed = 
        contents
            .replace-all("    ", " x ")
            .replace-all("[", " ")
            .replace-all("]", " ")
            .lines
            .map( fn (x) (x.split( " ").filter( fn (y) y != "" )) )
        // .map( fn(x) x.show.println )
    val description = parse-desc(lexed)
    val instructions = parse-instrs(lexed)
    instructions.map(fn(x) x.show.println)
    description.execute(instructions).map(fn(x) x.show.println).head.unjust

