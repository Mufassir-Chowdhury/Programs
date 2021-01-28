from sys import stdin
valid = 0
for line in stdin:
    policy, n, password = line.split(" ")
    n = n.removesuffix(':')
    a, b = policy.split('-')
    a= int(a)
    b= int(b)
    num = password.count(n)
    if num >=a and num <= b:
        valid+=1
print(valid)