def contador(*num):
    tam = len(num)
    print(f'Recebi os valores {num}, ao todo são {tam} números')
contador(2, 1, 7)
contador(5, 8)
contador(5, 7, 2, 3)