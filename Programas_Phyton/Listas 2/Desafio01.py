pessoa = list()
dado = list()
maipes = list()
menpes = list()
while True:
    nome = str(input('Digite seu nome: '))
    peso = int(input('Digite seu peso: '))
    if peso >= 85:
        maipes.append([nome , peso])
    else:
        menpes.append([nome , peso])
    dado.append(nome)
    dado.append(peso)
    pessoa.append(dado[:])
    dado.clear()
    escolha = str(input('Quer continuar? [S/N] ')).upper().strip()[0]
    if escolha in 'N':
        break
print('As pessoas mais pesadas são: ', end='')
for p in maipes:
    print(f'{p[0]}', end='')
print()
print('As pessoas mais leves são: ', end='')
for p in menpes:
    print(f'{p[0]}', end=', ')
print()
print(f'{len(pessoa)} pessoas cadastradas.')
print(pessoa)