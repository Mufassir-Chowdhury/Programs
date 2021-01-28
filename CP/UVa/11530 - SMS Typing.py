n = int(input())
one = 'adgjmptw '
two = 'behknqux'
three = 'cfilorvy'
four = 'sz'
for i in range(1, n+1):
    strokes = 0
    string = input()
    for j in string:
        if j in one:
            strokes += 1
        elif j in two:
            strokes += 2
        elif j in three:
            strokes += 3
        elif j in four:
            strokes += 4
    print(f'Case #{i}: {strokes}')