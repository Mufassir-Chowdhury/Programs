n = int(input())

def fact(n):
    if not n:
        return 1
    else:
        return n*(fact(n-1))

print(fact(n)%10000)