def ispalindrome(s):
    if s == s[::-1]:
        return True
    else:
        return False

n = int(input())
for i in range(n):
    m = int(input())
    count = 0
    while(not ispalindrome(str(m))):
        m += int(str(m)[::-1])
        count += 1
    print(count , m)