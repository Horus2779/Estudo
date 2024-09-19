valor_imobiliaria = float(input('Qual o valor do imovel: R$'))
salario = float(input('Qual seu salario ? R$'))
tempo_anos = int(input('Em quantos anos você pretende pagar ? '))

prestação_mensal = valor_imobiliaria/(tempo_anos*12)

print('Para pagar uma casa de R${} em {} anos, a prestação sera de R${:.2f}'.format(valor_imobiliaria,tempo_anos,prestação_mensal))


if prestação_mensal > (salario * 0.3):
    print('Emprétismo negado')
else:
    print('Empréstimo aceito')
