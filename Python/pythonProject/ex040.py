nota1 = float(input('Digite a primeira nota: '))
nota2 = float(input('Difite a segunda nota: '))

media = (nota1 + nota2)/2

reprovado = 5.0
recuperação = 6.9
aprovado = 7.0

if media < reprovado:
    print('Media do aluno {}\nAluno reprovado'.format(media))
elif media >= reprovado and media <= recuperação:
    print('Media do aluno {}\nAluno de recuperação'.format(media))
else:
    print('Media do aluno {}\nAluno aprovado'.format(media))
