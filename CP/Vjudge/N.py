n = int(input())
book = {}
for i in range(n):
    entry = input().split(' ')
    num = set(entry[2:])
    if entry[0] not in book:
        book[entry[0]] = num
    else:
        book[entry[0]].update(num)
for i in book:
    mod = book[i]
    modlist = []
    for j in mod:
        for k in mod:
            if j != k and j.endswith(k):
                modlist.append(k)
    for j in modlist:
        mod.discard(j)
    book[i] = mod

print(len(book))
for i in book:
    string = ""
    for j in book[i]:
        string += str(j) + " "
    print(i, len(book[i]), string)