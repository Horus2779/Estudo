num = int(input('Digite um numero inteiro de 0 a 9999: '))

unidade = num // 1 % 10 #Minha tentativa num[len(num)-1:]
dezena = num // 10 % 10 #Minha tentativa num[len(num)-2:-1]
centena = num // 100 % 10 #Minha tentativa num[len(num)-3:-2]
milhar = num // 1000 % 10 #Minha tentativa num[len(num)-4:-3]

print('Unidade: {}\nDezena: {}\nCentena: {}\nMilhar: {}'.format(unidade, dezena, centena, milhar))
