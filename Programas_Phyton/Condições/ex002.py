n = s = 0
while True:
    n = int(input('digite um numero: '))
    if n == 2:
        break
    s += n
print('A soma dos números é: {}'.format(s))