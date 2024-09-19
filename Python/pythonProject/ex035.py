reta1 = float(input('Digite a medida da 1° reta: '))
reta2 = float(input('Digite a medida da 2° reta: '))
reta3 = float(input('Digite a medida da 3° reta: '))

if abs(reta2 - reta3) < reta1 and reta1 < (reta2 + reta3):
    print('É possivel formar um triangulo com essas retas')
else:
    print('Não é possivel forma um triangulo com essas retas')
