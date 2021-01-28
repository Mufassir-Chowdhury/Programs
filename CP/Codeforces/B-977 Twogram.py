n = int(input())
string = input()
dictionary = {}
for i in range(len(string)-1):
    twogram = string[i] + string[i+1]
    if twogram not in dictionary:
        dictionary[twogram] = 1
    else:
        dictionary[twogram] += 1
maximum = max(dictionary.values())
for i in dictionary:
    if dictionary[i] == maximum:
        print(i)
        break