num = list()
for cont in range(0, 5):
    num.append(int(input('Digite um valor: ')))
num.sort()
for c, v in enumerate(num):
    print(f'Na posição {c} o valor é {v}')