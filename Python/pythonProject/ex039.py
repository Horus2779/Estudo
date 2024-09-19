from datetime import date
ano_atual = date.today().year
ano_nacimento = int(input('Digite o ano em que você nasceu: '))

if ano_atual - ano_nacimento < 18:
    print('Você ainda vai se alistar para o exercito daqui a {} anos'.format(ano_nacimento + 18 - ano_atual))
elif ano_atual - ano_nacimento == 18:
    print('Você irá se alistar no exercito esse ano')
else:
    print('Espero que você ja tenha se alistado no exercito a {} anos atrás'.format(ano_atual - ano_nacimento - 18))
