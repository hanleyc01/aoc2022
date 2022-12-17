module stack

// Stack data structure, following the last in, first out principle;
// do to language constraints, the structure is immutable
pub struct stack<a>
    top : maybe<a>
    rest : list<a>

// Declare a stack with just one element
pub fun stack( top : a ) : stack<a>
    Stack(Just(top), [])

// Declare a stack with a top, and rest defined
pub fun stack( top : a, rest : list<a> ) : stack<a>
    Stack(Just(top), rest)

// Convert a list to a stack
pub fun from-list( ls : list<a> ) : _e stack<a>
    match (ls.head, ls.tail)
        (Nothing, Nil) -> Stack(Nothing, [])
        (Just(x), xx) -> Stack(Just(x), xx)

// Pop off the first element from the list
pub fun pop( st : stack<a> ) : exn (a, stack<a>)
    match (st.top, st.rest)
        (Nothing, _) -> throw( "STACK UNDERFLOW: cannot pop off of an empty stack")
        (Just(x), Nil) -> (x, Stack(Nothing, []))
        (Just(x), Cons(y, yy)) ->
            (x, Stack(Just(y), yy))

// Pop `n` elements off of the stack
pub fun pop-n( st : stack<a>, n : int ) : <div,exn|_e> (list<a>, stack<a>)
    fun acc( st' : stack<a>, n' : int, accum : list<a> ) : <div,exn|_e> (list<a>, stack<a>)
        if n' == 0 then
            (accum, st')
        else
            val (pd, s) = st'.pop
            s.acc(n' - 1, pd.Cons(accum))
    st.acc(n, [])

// Push an element onto the stack
pub fun push( st : stack<a>, to-push : a ) :  stack<a>
    match st.top
        Nothing -> Stack(Just(to-push), [])
        Just(x) -> Stack(Just(to-push), Cons(x, st.rest))

pub fun push-all( st : stack<a>, to-push : list<a> ) : stack<a>
    match to-push
        Nil -> st
        Cons(x, xx) -> st.push(x).push-all(xx)

pub fun show( st : stack<string> ) : string
    match st.top
        Nothing -> st.rest.show
        Just(s) -> "top: " ++ s ++ " rest: " ++ st.rest.show

pub fun show( st : stack<int> ) : string
    match st.top
        Nothing -> st.rest.show
        Just(s) -> "top: " ++ s.show ++ " rest: " ++ st.rest.show
