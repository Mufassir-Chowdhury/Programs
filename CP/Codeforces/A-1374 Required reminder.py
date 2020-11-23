t = int(input())
for i in range(t):
    xs, ys, ns = input().split(' ')
    x = int(xs)
    y = int(ys)
    n = int(ns)
    if (n // x) * x + y > n:
        print((n // x ) * x + y - x)
    else:
        print((n // x) * x + y)