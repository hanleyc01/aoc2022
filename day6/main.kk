import std/os/file
import std/os/env
import std/os/path
import list-extra

struct packet
    datastream : list<char>

fun packet( s : list<char> ) : packet
    Packet(s)

fun show( p : packet ) : string
    p.datastream.string

fun all-unique( list<a> ) : bool
    

fun count-start( p : packet ) : <console,div,exn|_e> int
    val sig = p.datastream
    var count := 0
    var exit := False
    while { count < sig.length && exit == False}
        if !(count < 3) then
            val f = sig.get(count - 1).unjust
            val s = sig.get(count - 2).unjust
            val t = sig.get(count - 3).unjust
            val fr = sig.get(count).unjust
            if all-unique([f, s, t, fr]) then
                
                
            count := count + 1
        else
            count := count + 1
    count

fun main()
    val args = get-args()
    val f = args.get(0).unjust.path
    val contents = read-text-file(f)
    contents.list.packet.count-start.show.println
