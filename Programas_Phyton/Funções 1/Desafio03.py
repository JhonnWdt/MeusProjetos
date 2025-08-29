from time import sleep

def contador(i, f, p):
    print(f'Contagem de {i} até {f} de {p} em {p}')
    if i <= f:
        cont = i
        while cont <= f:
            print(f'{cont}', end=' ')
            sleep(0.5)
            cont += p
        print('Fim!!')
    else:
        cont = i
        while cont >= f:
            print(f'{cont}', end=' ')
            sleep(0.5)
            cont -= p
        print('Fim!!')

#comando principal
contador(1, 10, 1)
contador(10, 0, 2)
i = int(input('Deseja íniciar a contagem em que número?'))
f = int(input('Deseja termianar a contagem em que número?'))
p = int(input('De quantos em quantos passos?'))
contador(i, f, p)
