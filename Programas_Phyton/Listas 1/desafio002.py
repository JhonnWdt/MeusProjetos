num = list()
while True:
    valor = int(input('Digite um valor: '))
    if valor not in num:
        num.append(valor)
    continuar =str(input('Quer continuar? [S/N] ')).strip().upper()[0]
    if continuar == 'N':
        break
num.sort()
print(num)
