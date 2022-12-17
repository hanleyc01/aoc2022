module list-extra

// Get an item out of a list, but if the index is out of bounds of the list
// it returns `Nothing`
pub fun get( ls : list<a>, index : int ) : maybe<a>
    if index == 0
        then ls.head
    else
        match ls
            Nil -> Nothing
            Cons(_,xx) -> xx.get( index - 1 )

// Remove an item from a list given an index, return the list back with the element removed
// Will throw an exception in the case of an index out of bounds
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

// Inserts an element at an index
fun insert( ls : list<a>, to-insert : a, index : int) : list<a>
    match ls
        Nil -> [to-insert]
        Cons(x, xx) ->
            if index == 0 then
                [to-insert] ++ Cons(x, xx)
            else
                [x] ++ insert(xx, to-insert, index - 1)
