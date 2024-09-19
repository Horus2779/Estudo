num1 = int(input('Digite o primeiro numero inteiro: '))
num2 = int(input('Digite o segundo numero inteiro: '))
num3 = int(input('Digite o terceiro numero inteiro:'))

maior = num1
menor = num1

if num2 > num1 and num2 > num3:
    maior = num2
if num3 > num1 and num3 > num2:
    maior = num3

if num2 < num1 and num2 < num3:
    menor = num2
if num3 < num1 and num3 < num2:
    menor = num3

print('O maior numero é {} e o menor é {}'.format(maior, menor))