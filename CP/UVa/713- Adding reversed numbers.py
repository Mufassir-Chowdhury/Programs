x = int(input())
for i in range(x):
    num1, num2 = input().split()
    newnum1 = num1[::-1]
    newnum2 = num2[::-1]
    sum = int(newnum1) + int(newnum2)
    newsum = str(sum)
    num = int(newsum[::-1])
    print(num)