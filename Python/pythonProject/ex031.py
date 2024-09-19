viagem = int(input('Digite o quilometragem da viagem realizada: '))
if viagem<=200:
    print('O valor da viagem ficou R${:.2f}'.format(viagem*0.5))
else:
    print('O valor da viagem ficou R${:.2f}'.format(viagem*0.45))