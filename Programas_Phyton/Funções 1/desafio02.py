def escreve(txt):
    texto = frases
    print('-' * len(txt))
    print(txt)
    print('-' * len(txt))


frases = []
for cont in range(0, 3):
    f = str(input('Digite uma frase: '))
    frases.append(f)

for f in frases:
    escreve(f)