num = list()
valor = 0
while True:
    num.append(int(input('Digite um Número:')))
    valor += 1
    escolha = str(input('Quer continuar? [S/N] ')).upper().strip()[0]
    if escolha == 'N':
        break
num.sort(reverse=True)
print(f'Números digitados: {num}')
print(f'Você digitou {valor} números')
if 5 in num:
    print('O Número 5 está na lista')
else:
    print('O Número 5 não está na lista')