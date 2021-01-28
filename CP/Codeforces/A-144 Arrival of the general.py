n = int(input())
height = input().split(' ')
num = []
for i in height:
    num.append(int(i))
big = num.index(max(num)) + 1
num.reverse()
small = n - num.index(min(num))
if small < big:
    print(num.index(min(num)) + big -2)
else:
    print(big -1 + num.index(min(num)))