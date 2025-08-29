num = list()
maior = 0
menor = 0
for cont in range(0, 5):
    num.append(int(input('Digite um valor: ')))
    if cont == 0:
        maior = menor = num[cont]
    else:
        if num[cont] > maior:
            maior = num[cont]
        if num[cont] < menor:
            menor = num[cont]
print('-*' *15)
print(f'Você digitou os valores {num}')
print(f'O menor valor foi {menor} na posição:', end='')
for c, v in enumerate(num):
    if v == menor:
        print(f'{c}...', end='')
print()
print(f'O maior valor foi {maior} na posição:', end='')
for c, v in enumerate(num):
    if v == maior:
        print(f'{c}...', end='')
