galera = list()
dado = list()
totmai = totmen = 0
for c in range(0, 3):
    dado.append(str(input('Digite seu nome: ')))
    dado.append(int(input('Digite sua idade: ')))
    galera.append(dado[:])
    dado.clear()
for p in galera:
    if p[1] >= 18:
        print(f'{p[0]} tem {p[1]} anos e é maior de idade.')
        totmai += 1
    else:
        print(f'{p[0]} tem {p[1]} anos e é menor de idade.')
        totmen += 1
print (f'{totmai} maiores de idade e {totmen} menores de idade.')