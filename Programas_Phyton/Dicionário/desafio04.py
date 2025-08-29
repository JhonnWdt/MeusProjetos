jogador = dict()
gol = []
jogador['nome'] = str(input('Digite o nome do jogador:'))
jogador['n_partidas'] = int(input(f'Quantas partidas {jogador["nome"]} jogou? '))
for v in range(jogador['n_partidas']):
    gols = int(input(f'Quantos Gols {jogador["nome"]} fez na {v + 1} partida? '))
    gol.append(gols)
jogador['gols'] = gol [:]
total = 0
for g in jogador['gols']:
    total += g
print()
print('*=' * 30)
print()
print(jogador)
for k, v in enumerate(jogador['gols']):
    print(f' Na {k +1}° partida, {jogador["nome"]} fez {v} gols')
print(f'O jogador {jogador["nome"]} fez {total} gols no total')