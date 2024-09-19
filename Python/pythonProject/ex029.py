velocidade = int(input('Qual velocidade do veiculo em Km/h: '))
limite = int(80)
multa = float(7)
print('Sabendo que o limite de velocidade permitido é de {}Km/h e que para cada Km/h acima você paga R${:.2f}'.format(limite, multa))
if velocidade <= limite:
    print('Parabens você esta seguindo as leis de trânsito local')
else:
    print('Diminua sua velocidade, por conta de seus erros você pagará uma multa de R${:.2f}'.format((velocidade-limite)*multa))
