n = int(input())

if (n%4 == 0 and n%100) or (n%100 == 0 and n%400 == 0):
    print("Yes")
else:
    print("No")