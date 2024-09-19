from random import randrange
num_pc = randrange(1,4)

num_user = int(input('Digite o valor\n1 para tesoura\n2 para papel\n3 para pedra\n'))

if num_user == 1:
    print('Você escolheu Tesoura')
elif num_user == 2:
    print('Você escolheu Papel')
elif num_user == 3:
    print('Você escolheu Pedra')
else:
    print('Numero invalido')


if num_pc == num_user:
    print('Escolhemos o mesmo, Empatou')
elif num_pc == 1 and num_user == 2:
    print('Eu escolhi Tesoura, Eu ganhei')
elif num_pc == 1 and num_user == 3:
    print('Eu escolhi Tesoura, Você ganhou')
elif num_pc == 2 and num_user == 1:
    print('Eu escolhi Papel, Você Ganhou')
elif num_pc == 2 and num_user == 3:
    print('Eu escolhi Papel, Você Ganhou')
elif num_pc == 3 and num_user == 1:
    print('Eu escolhi Pedra, Eu ganhei')
elif num_pc == 3 and num_user == 2:
    print('Eu escolhi Pedra, Você ganhou')
else:
    print('Você digitou um numero invalido, por favor tente novamente')

