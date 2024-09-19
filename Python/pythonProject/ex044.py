preço_produto = float(input('Qual o valor do produto ? R$'))
num_pagamento = int(input('Qual o metodo de pagamento ?\n-1 a vista no dinheiro\n-2 a vista no cartão\n-3 até 2x no cartão\n-4 acima de duas vezes\n'))

if num_pagamento == 1:
    print('O preço do produto a ser pago é de R${}'.format(preço_produto * 0.9))
elif num_pagamento == 2:
    print('O preço do produto a ser pago é de R${}'.format(preço_produto * 0.95))
elif num_pagamento == 3:
    print('O preço do produto a ser pago é de R${}'.format(preço_produto))
elif num_pagamento == 4:
    print('O preço do produto a ser pago é de R${}'.format(preço_produto * 1.2))
else:
    print('Valor invalido')
