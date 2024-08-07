num = int(input("Digite um numero: "))
multiplicador = 0
print("Tabuada do numero {}".format(num))
for multiplicador in range (1, 11):
    print("{}x{:2} = {}".format(num, multiplicador, num*multiplicador))
