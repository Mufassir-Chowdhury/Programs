n = int(input())
while n:
    sum = 0
    binary = bin(n)
    for i in binary[2:]:
        sum += int(i)
    print(f'The parity of {binary[2:]} is {sum} (mod 2).')
    n = int(input())