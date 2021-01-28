n = int(input())
for i in range(1, n+1):
    x = input()
    y = input()
    match = True
    list = []
    list2 = []
    list = x.split(".")
    list2 = y.split(".")
    for j in range(4):
        list[j] = bin(int(list[j]))[2:]
    for j in range(4):
        if list[j] != str(int(list2[j])):
            match = False
    if(match):
        print("Case", str(i)+": Yes")
    else:
        print("Case", str(i)+": No")