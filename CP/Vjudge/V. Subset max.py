t = int(input())
for i in range(t):
    n = int(input())
    list1 = []
    list2 = []
    x = input()
    s = x.split()
    for j in s:
        k = int(j)
        if k not in list1:
            list1.append(k)
        else:
            list2.append(k)
    max = 0
    for j in range(101):
        if j not in list1:
            max += j
            break
    if len(list2) > 0:
        for j in range(101):
            if j not in list2:
                max += j
                break
    print(max)
