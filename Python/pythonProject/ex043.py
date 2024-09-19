altura = float(input('Qual a sua altura em metros ? '))
peso = float(input('Qual o seu peso em Kg ? '))

IMC = int(peso/(altura * altura))

if IMC < 18.5:
    print('O seu IMC é {}. Você esta abaixo do peso'.format(IMC))
elif IMC >= 18.5 and IMC < 25:
    print('O seu IMC é {}. Você esta no peso ideal'.format(IMC))
elif IMC >= 25 and IMC < 30:
    print('O seu IMC é {}. Você esta no sobrepeso'.format(IMC))
elif IMC >= 30 and IMC < 40:
    print('O seu IMC é {}. Você esta na Obesidade'.format(IMC))
else:
    print('O seu IMC é {}. Você esta na Obesidade Morbida'.format(IMC))