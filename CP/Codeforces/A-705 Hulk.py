n = int(input())
string = ""
for i in range(1, n+1):
    if i%2:
        string += "I hate "
    else:
        string += "I love "
    if i == n:
        string += "it"
    else:
        string += "that "

print(string)