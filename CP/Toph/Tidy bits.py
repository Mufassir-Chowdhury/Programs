n = int(input())
binary = bin(n)
newbin = ""
for i in binary:
    if i == '1':
        newbin += i
print(int(newbin, 2))