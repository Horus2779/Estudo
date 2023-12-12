#include <stdio.h>
#include <stdlib.h>
struct no{
	int ra;
	float nota;
};

void leitura(struct no vet[], int cont);
void demonstrar(struct no vet[],int cont);

int main (void){
	struct no alunos[5];
	leitura(alunos,5);
	demonstrar(alunos,5);
	return 0;
}

void leitura(struct no vet[], int cont){
	int c=0;
	for(c=0;c<5;c++){
		printf("Digite o %d° RA valor: ", c+1);
		scanf("%d",&vet[c].ra);
		printf("Digite o %d° nota valor: ", c+1);
		scanf("%f",&vet[c].nota);
	}
}
void demonstrar(struct no vet[],int cont){
	int c=0;
	for(c=0;c<5;c++){
		printf("O a nota do RA %d foi de  %.2f\n",vet[c].ra, vet[c].nota);
	}
}
