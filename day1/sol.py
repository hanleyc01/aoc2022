from numpy import argmax
with open('data.txt') as f: (lambda c: print((i := argmax(g := list(map(lambda s: sum(map(lambda p: int(p) if p else 0, s.split('\n'))), c.split('\n\n')))), g[i])))(f.read())
