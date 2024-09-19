numero = int(input('Digite um valor: '))

valor = int(input('Digite o numero para ele ser convertido:\n-1 para binario\n-2 para octal\n-3 para hexadecimal\n'))

if valor == 1:
    print('O numero {} convertido para binario é {}'.format(numero, bin(numero)[2:]))
elif valor == 2:
    print('O numero {} convertido para octal é {}'.format(numero, oct(numero)[2:]))
elif valor == 3:
    print('O numero {} convertido para hexadecimal é {}'.format(numero, hex(numero)[2:]))
else:
    print('Valor invalido')

