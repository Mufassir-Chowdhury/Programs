n = int(input())
div = False

if n < 2:
    print("No")
else:
    for i in range(2, n):
        if not n%i:
            div = True
            break
    if div:
        print("No")
    else:
        print("Yes")