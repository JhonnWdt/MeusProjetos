valor = float(input('Qual o valor do produto?'))
desconto = valor - (valor * 5 / 100)
print('O valor do item com desconto é: R${:.2f}'.format(desconto))