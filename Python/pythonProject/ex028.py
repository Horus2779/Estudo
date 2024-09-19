from random import randrange
randonum = randrange(0, 6)
num = int(input('Digite um numero entre 0 a 5: '))
print('O numero escolhido pela maquina foi {} e o numero que você escolheu foi {}'.format(randonum, num))
if num==randonum:
    print('Parabéns você acertou o numero')
else:
    print('Você não acertou o numero, tente novamente')

