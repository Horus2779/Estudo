//Exemplo 2
#include<stdio.h>

struct tpAluno {
	int RA;
	float n1,n2,media;

};

int main (void){
	int pos;
	struct tpAluno vet[5];
	for (pos = 0;pos<5;pos++){
		printf("Digite o %d RA de aluno: ", pos+1);
		scanf("%d", &vet[pos].RA);
		printf("Digite a %d 1 nota: ",pos+1);
		scanf("%f",&vet[pos].n1);
		printf("Digite a %d 2 nota: ", pos+1);
		scanf("%f", &vet[pos].n2);
		vet[pos].media=(vet[pos].n1 + vet[pos].n2)/2.0;
		printf("Aluno [%d]: Media = %.2f\n", vet[pos].RA, vet[pos].media);
	}
	return 0;
}
