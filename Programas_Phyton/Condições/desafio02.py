num = 0
while True:
    num = int(input('Digite um número inteiro:'))
    print(f'A tabuada de {num} é:')
    print('0 x {} = {}'.format(num, num * 0))
    print('1 x {} = {}'.format(num, num * 1))
    print('2 x {} = {}'.format(num, num * 2))
    print('3 x {} = {}'.format(num, num * 3))
    print('4 x {} = {}'.format(num, num * 4))
    print('5 x {} = {}'.format(num, num * 5))
    print('6 x {} = {}'.format(num, num * 6))
    print('7 x {} = {}'.format(num, num * 7))
    print('8 x {} = {}'.format(num, num * 8))
    print('9 x {} = {}'.format(num, num * 9))
    print('10 x {} = {}'.format(num, num * 10))
    if num <= -1:
        break
