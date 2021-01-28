def fact(n):
    fac = 1
    for k in range(1, n+1):
        fac *= k
    return fac

n = int(input())
for i in range(n):
    x = int(input())
    string = str(fact(x))
    num = 0
    newstr = string[::-1]
    for j in newstr:
        if j != '0':
            break
        num += 1
    print(num)