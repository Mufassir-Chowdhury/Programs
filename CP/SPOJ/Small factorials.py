def fact(n):
    if n == 0:
        return 1
    else:
        return n*fact(n-1)

n = int(input())
for i in range(n):
    x = int(input())
    print(fact(x))