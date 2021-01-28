n = int(input())
sum = 0
for i in range(1, n):
    if not n%i:
        sum += 1
print(sum)