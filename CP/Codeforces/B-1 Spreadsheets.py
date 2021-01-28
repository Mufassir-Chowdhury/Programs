n = int(input())
for i in range(n):
    rc = ""
    string = input()
    a = ""
    b = ""
    for j in string:
        if j.isalpha():
            rc += j
    if rc == "RC" and string[1] != 'C':
        a, b = string[1:].split('C')
    print(a, b)