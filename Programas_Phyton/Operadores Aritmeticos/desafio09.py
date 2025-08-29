salario = float(input('Qual o seu salário?'))
aumento = salario + (salario * 15 / 100)

print('Seu novo salário é de R$:{:.2f}'.format(aumento))