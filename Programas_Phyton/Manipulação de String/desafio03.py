cidade = input("Digite o nome da sua cidade: ").strip()
primeira_palavra = cidade.split()[0]

print('Primeira palavra é "Santo":', primeira_palavra.lower() == 'santo')