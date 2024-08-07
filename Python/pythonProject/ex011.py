altura = float(input("Qual a Altura da parede em metros? "))
largura = float(input("Qual a Largura da parede em metros? "))
area = altura*largura
print("Um balde de tinta pode pintar 2m²")
if area%2 == 0:
    print("É necessario {} baldes de tinta".format(area//2))
else:
    print("É necessario {} baldes de tinta".format(area//2+1))


