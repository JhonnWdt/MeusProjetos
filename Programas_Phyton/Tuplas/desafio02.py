time = ('Flamengo', 'Cruzeiro', 'Palmeiras', 'Bahia',
        'Mirassol', 'Red Bull Bragantino', 'Botafogo',
        'São Paulo', 'Fluminense', 'Atlético-MG', 'Ceará',
        'Corinthians', 'Internacional', 'Grêmio', 'Santos',
        'Vitória', 'Vasco da Gama', 'Fortaleza', 'Juventude', 'Sport')

print('---- 5 primeiros colocados ----')
for posicao, clube in enumerate(time[:5], start=1):
    print(f'{posicao}° Colocado: {clube}')
print('\n---- 4 últimos colocados ----')
for posicao, clube in enumerate(time[-4:], start=17):
    print(f'{posicao}° Colocado: {clube}')
print('\n---- Times em ordem Alfabética ----')
print(sorted(time))
if 'Chapecoense' in time:
    print (f'\nChapecoense está na {time.index("Chapecoense")+1}ª posição')
else:
    print('\nChapecoense não está entre os 20 primeiros colocados')