aluno = dict()
aluno['nome'] = str(input('Nome:'))
aluno['media'] = float(input('Media:'))
for k, v in aluno.items():
    print(f'{k} = {v}')
if aluno['media'] >= 70:
    print(f'{aluno["nome"]} foi aprovado')
else:
    print(f'{aluno["nome"]} foi reprovado')

