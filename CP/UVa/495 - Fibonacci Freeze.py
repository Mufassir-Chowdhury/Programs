from sys import stdin

def fibo(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    a = 0
    b = 1
    for i in range(2, n+1):
        c = a+b
        a = b
        b = c
    return c

for line in stdin:
    n = int(line)
    print("The Fibonacci number for", n, "is", fibo(n))