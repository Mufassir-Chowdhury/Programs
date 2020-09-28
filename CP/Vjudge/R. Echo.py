n = int(input())
str = input()
if (n%2 == 0) and (str[:(n//2)] == str[n//2:]):
    print("Yes")
else:
    print("No")