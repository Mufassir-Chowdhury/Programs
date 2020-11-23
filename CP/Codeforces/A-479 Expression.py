a = int(input())
b = int(input())
c = int(input())

lis = [a+b+c, a+b*c, (a+b)*c, a*b+c, a*(b+c), a*b*c]
print(max(lis))