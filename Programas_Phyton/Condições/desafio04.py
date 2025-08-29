masc = 0
fem = 0
while True:
    idade = int(input('Qual a sua idade? '))
    sexo = str(input('Qual o seu sexo? [M/F] ')).strip().lower()[0]
    if sexo == 'm':
        masc += 1
        print(f'Idade {idade} anos. \nSexo: Masculino')
    else:
        fem += 1
        print(f'Idade {idade} anos. \nSexo: Feminino')

    escolha = str(input('Deseja continuar? [S/N] ')).strip().lower()[0]
    if escolha == 'n':
        break

print('Cadastro Finalizado')
print(f'Homens cadastrados: {masc} \nMulheres Cadastradas: {fem}')



