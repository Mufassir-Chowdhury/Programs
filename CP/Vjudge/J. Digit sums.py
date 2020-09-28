n = input()
x = 0
for i in n:
    x += int(i)
if int(n) % x:
    print("No")
else:
    print("Yes")