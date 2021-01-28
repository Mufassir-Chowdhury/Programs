weak = input()
strong = ""
for i in weak:
    if i == 's':
        strong += '$'
    elif i == 'i':
        strong += '!'
    elif i == 'o':
        strong += '()'
    else:
        strong += i
strong += '.'
print(strong.capitalize())