ano = 2024
ano_nacimento = int(input('Digite o ano de seu nacimento: '))

idade = ano - ano_nacimento

if idade <= 9:
    print('Você tem {} anos e está na categoria Mirim'.format(idade))
elif idade > 9 and idade <= 14:
    print('Você tem {} anos e esta na categoria Infantil'.format(idade))
elif idade > 14 and idade <= 19:
    print('Você tem {} anos e esta na categoria Junior'.format(idade))
elif idade == 20:
    print('Você tem {} anos e esta na categoria Sênior'.format(idade))
else:
    print('Você tem {} anos e esta na categoria Master'.format(idade))
