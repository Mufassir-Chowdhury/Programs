from sys import stdin
lim = 2**31-1
for line in stdin:
    a, b, c = line.split(' ')
    print(line[:-1])
    a = int(a)
    c = int(c)
    if a > lim:
        print('first number too big')
    if c > lim:
        print('second number too big')
    if b == '+' and a+c > lim:
        print('result too big')
    if b == '*' and a*c > lim:
        print('result too big')