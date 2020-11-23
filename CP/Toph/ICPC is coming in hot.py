n = input()
number = {}
for i in n:
    if int(i) in number:
        number[int(i)] += 1
    else:
        number[int(i)]=1
maximum = max(number.values())
for i in range(10):
    if i in number:
        if number[i] == maximum:
            print(i)
            break