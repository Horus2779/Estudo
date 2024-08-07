from math import hypot
catadj = float(input("Digite o valor do Cateto adjacente: "))
catost = float(input("Digite o valor do Cateto oposto: "))
hipotenusa = hypot(catost, catadj) #math.sqrt((math.pow(catadj,2)+math.pow(catost,2)))
print("A hipotenusa do trinagulo é {:.2f}".format(hipotenusa))
