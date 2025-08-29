numero = [[] , []]
for n in range(0,7):
    num = int(input('Digite um numero: '))
    if num % 2 == 0:
       numero[0].append(num)
    else:
        numero[1].append(num)
numero[0].sort()
numero[1].sort()
print(f'Números pares: {numero[0]}')
print(f'Números ímpares: {numero[1]}')