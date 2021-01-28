n = input()
string = input().lower()
alphabet = "abcdefghijklmnopqrstuvwxyz"
found = True
for i in alphabet:
    if i not in string:
        found = False
if found:
    print("YES")
else:
    print("NO")