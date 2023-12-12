//Exemplo 1
#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	struct infoAlu { //define novo tipo de variavel
	int RA;
	float p1,p2,media;
};
	struct infoAlu info1, info2; //Define novas variaveis
	printf("Digite o RA do aluno 1: ");
	scanf("%d", &info1.RA);
	printf("Digite a nota da P1: ");
	scanf("%f", &info1.p1);
	printf("Digite a nota da P2: ");
	scanf("%f", &info1.p2);
	info1.media = (info1.p1 + info1.p2)/2.0;
	printf("Digite o RA do aluno 2: ");
	scanf("%d", &info2.RA);
	printf("Digite a nota da P1: ");
	scanf("%f", &info2.p1);
	printf("Digite a nota da P2: ");
	scanf("%f", &info2.p2); 
	info2.media = (info2.p1 + info2.p2)/2.0;
	printf("A media do aluno com RA %d foi: %.2f\n", info1.RA,info1.media);
	printf("A media do aluno com RA %d foi: %.2f\n", info2.RA,info2.media);
	return 0;
}

