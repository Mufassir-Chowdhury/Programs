n = int(input())
if(n == 0):
    print(10)
    exit()
if(n < 10):
    print(n)
    exit()
list = []
for i in range(9, 1, -1):
    if n == 1:
        break
    while n % i == 0:
        list.append(i)
        n /= i
if n != 1:
    print(-1)
    exit()
k =0
while len(list):
    k = k*10 + list.pop()
print(k)