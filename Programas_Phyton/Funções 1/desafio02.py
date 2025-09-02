def escreve(txt):
    texto = frases
    largura = len(txt) + 6
    print('-' * largura)
    print(txt.center(largura))
    print('-' * largura)


frases = []
for cont in range(0, 3):
    f = str(input('Digite uma frase: '))
    frases.append(f)

for f in frases:
    escreve(f)