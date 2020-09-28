def fact(n):
    if n==0:
        return 1
    return n*fact(n-1)
t = int(input())
for i in range(t):
    n = int(input())
    print(fact(n))