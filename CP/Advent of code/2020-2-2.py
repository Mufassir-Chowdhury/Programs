from sys import stdin
valid = 0
for line in stdin:
    policy, n, password = line.split(" ")
    n = n.removesuffix(':')
    a, b = policy.split('-')
    a= int(a)
    b= int(b)
    if password[a-1]==n and password[b-1] != n:
        valid+= 1
    elif password[a-1]!=n and password[b-1] == n:
        valid += 1
print(valid)