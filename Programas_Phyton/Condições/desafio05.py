while True:
    nome = str(input('Digite o nome do produto: '))
    preco = int(input('Digite o preço do produto: '))
    total += preco
    quant = 0
    continuar = input('Deseja continuar? [S/N] ').strip().lower()[0]
    if preco >= 1000:
        quant += 1

    if continuar == 'n':
        break

print(f'Você comprou {quant} produtos que custam mais de R$1000')
