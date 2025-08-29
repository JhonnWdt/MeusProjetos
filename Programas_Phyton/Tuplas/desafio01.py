numero = ('zero', 'um', 'dois', 'três', 'quatro',
          'cinco', 'seis', 'sete', 'oito', 'nove',
          'dez', 'onze', 'doze', 'treze', 'quatorze',
          'quinze', 'dezesseis', 'dezessete', 'dezoito',
          'dezenove', 'vinte')
while True:
    num = int(input('Escreva um número de 0 a 20: '))
    if num >= 0 or num <= 20:
        break
    else:
        print('Erro! tente novamente. Digite um número entre 0 e 20: ')
print(f'Você digitou {numero[num]}')

