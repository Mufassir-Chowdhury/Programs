from sys import stdin
values = []
for line in stdin:
    values.append(int(line))
for i in range (0, len(values), 2):
    print(values[i]*values[i+1])