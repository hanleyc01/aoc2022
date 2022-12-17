import std/os/env
import std/os/file
import std/os/path

// Port of Haskell fuction [`split`](https://hackage.haskell.org/package/extra-1.7.12/docs/src/Data.List.Extra.html#split),
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

// Port of older Haskell function [`mergesort`](https://hackage.haskell.org/package/base-4.17.0.0/docs/src/Data.OldList.html#sort)
fun sort( ls : list<a>, compare: ((a, a) -> order) ) : pure list<a>
    fun wrap( x )
        [x]
    fun merge( x, y )
        match (x, y)
            (Nil, _) -> y
            (_, Nil) -> x
            (Cons(a,aa), Cons(b,bb)) ->
                match a.compare(b)
                    Gt -> b.Cons(x.merge(bb))
                    _  -> a.Cons(aa.merge(y))
    fun merge-pairs( x )
        match x
            Nil -> Nil
            Cons(xx, Nil) ->
                [xx]
            Cons(xx, Cons(yy, xxx)) ->
                xx.merge(yy).Cons(xxx.merge-pairs)
    fun merge-sort( x )
        match x
            Nil -> Nil
            Cons(xx, Nil) -> xx
            xxx -> xxx.merge-pairs.merge-sort
    ls.map(wrap).merge-sort

/// Port of Haskell function [`fromJust`](https://hackage.haskell.org/package/strict-0.4.0.1/docs/src/Data.Strict.Maybe.html#fromJust)
fun from-just( x : maybe<a> ) : exn a
    match x
        Nothing -> throw( "from-just: Nothing" )
        Just(x') -> x'

fun main()
    val args = get-args()
    val f-path-name = args.head
    match f-path-name
        Just(path-name) ->
            val raw-data = path-name.path.read-text-file
            val conts = raw-data.lines.split( fn(x) (x == "") )
            val values = conts.map( fn (x) (x.map( fn(y) (y.parse-int.from-just) )) )
            val result = values.map(sum).sort(compare).reverse.take(3)
            result.show.println
        Nothing ->
            println( "No path provided!" )
