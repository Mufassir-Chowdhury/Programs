t = int(input())
for i in range(t):
    n = int(input())
    x = input()
    s = x.split()
    max = 0
    for j in range(101):
        if s.count(str(j)) < 2:
            print(j)
            max += int(j)
            s.append(str(j))
            break
    for j in range(101):
        if s.count(str(j)) < 2:
            print(j)
            max += int(j)
            break
    print(max)