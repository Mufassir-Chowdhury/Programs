from sys import stdin

foul = "!@#$%^&*()_+|:?><,./;\][~`"

for line in stdin:
    str = line
    newstr = ""
    for i in str:
        if i not in foul:
            newstr += i
        else:
            newstr += " "
    list = newstr.split()
    print(len(list))
