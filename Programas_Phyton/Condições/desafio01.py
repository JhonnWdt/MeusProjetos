num = soma = 0
quant = 0
while True:
    num = int(input('digite um numero inteiro: '))
    if num == 999:
        break
    soma += num
    quant += 1
print(f'Foram digitados {quant} números e a soma deles é {soma}')