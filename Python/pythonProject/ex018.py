import math
ang = float(input("Digite um ângulo: "))
angr = math.radians(ang)
print("O seno do ângulo {0} é {1:.2f}\nO cosseno do ângulo {0} é {2:.2f}\nA tangente do ângulo {0} é {3:.2f}".format(ang, math.sin(angr), math.cos(angr), math.tan(angr)))
