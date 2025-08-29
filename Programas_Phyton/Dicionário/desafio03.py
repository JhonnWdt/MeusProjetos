from datetime import date
func = dict()
ano_atual = date.today().year
func['nome'] = str(input('Digite seu nome:'))
func['ano_nasc'] = int(input('Digite o ano do seu nascimento:'))
func['ctps'] = int(input('Digite o número da carteira de trabalho:'))
if func['ctps'] != 0:
    func['ano_cont'] = int(input('Digite o ano de contratação:'))
    func['salario'] = float(input('Digite seu salário:'))
    func['idade_apos'] = (func['ano_cont'] + 35) - func['ano_nasc']
func['idade'] = ano_atual - func['ano_nasc']
nome_leg = {
    'nome': 'Nome',
    'ano_nasc': 'Ano de nascimento',
    'ctps': 'Carteira de trabalho',
    'salario': 'Salário',
    'idade_apos': 'Idade prevista para aposentadoria',
    'idade': 'Idade',
}
for k, v in func.items():
    print(f'{nome_leg.get(k, k)}: {v}')