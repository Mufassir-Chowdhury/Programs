n = int(input())
for i in range(n):
    inp = input()
    x, y = inp.split()
    rx = x[::-1]
    ry = y[::-1]
    sum = int(rx) + int(ry)
    sums = str(sum)
    rsums = sums[::-1]
    print(int(rsums))