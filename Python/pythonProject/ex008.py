num = float(input("Digite um valor a ser convertido: "))
print("A medida de {}m equivale a \n {:.3f}km \n {:.3f}hm \n {:.3f}dam \n {:.3f}dm \n {:.3f}cm \n {:.3f}mm".format(num, num*(10**-3), num*(10**-2), num*(10**-1), num*10, num*(10**2), num*(10**3)))