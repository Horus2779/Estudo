preço = float(input("Digite o preço do produto: "))
desconto = 0.05
print("O valor do produto era {:.2f} com a promoção, agora ele vale {:.2f}".format(preço, preço-(preço*desconto)))