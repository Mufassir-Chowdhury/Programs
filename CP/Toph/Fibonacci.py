n = int(input())

fib = []
fib.append(1)
fib.append(1)
for i in range(2, 50):
    fib.append(fib[i-1] + fib[i-2])

print(fib[n-1])