import random

while True:
    num = int(input('digite um numero inteiro: '))
    escolha = str(input('Escolha Par ou Ímpar: ')).strip().lower()
    computador = random.randint(0, 10)
    soma = num + computador

    print(f'Você jogou {num} e o computador {computador}, a soma é {soma}')

    if soma % 2 == 0:
        resultado = 'par'
    else:
        resultado = 'impar'
    if escolha == resultado:
        print('Você venceu!')
    else:
        print('Você perdeu!')
        break