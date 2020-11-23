n = int(input())
for i in range(n+1, 9015):
    sets = set(str(i))
    if len(sets) == 4:
        print(i)
        break