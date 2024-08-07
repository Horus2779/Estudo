import random
cont = int(0)
nome = [1, 2, 3, 4]
for cont in range(0, 4):
    nome[cont] = str(input("Digite o nome do {}° aluno: ".format(cont+1)))

random.shuffle(nome)
print("Ordem de apresentação:")
print(nome)