salario = float(input('Qual o valor do salario do funcionario: R$'))

if salario > 1250:
    print('O salario sofreu um ajuste de 10% e agora ele vale R${:.2f} '.format(salario * 1.10))
else:
    print('O salario sofreu um ajuste de 15% e agora ele vale R${:.2f} '.format(salario * 1.15))

