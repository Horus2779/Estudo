//exemplo 01
#include <stdio.h>
#include <stdlib.h>

struct TipoNo{
	int ref;
	float nota1,nota2,mediaA;
	struct TipoNo *prox;
};

int main (void){
	struct TipoNo *no,*primA=NULL,*primB=NULL,*aux;
	int pos,qtd;
	float mediaT=0,mediaN1=0;
	printf("Digite a quantidade de alunos: ");
	scanf("%d",&qtd);
	for(pos=0;pos<qtd;pos++){
		if(!(no = malloc(sizeof(struct TipoNo)))){
			printf("Faltou memoria!\n");
			return -1;
		}
		printf("Digite a primeira nota do aluno %d valor: ", pos+1);
		scanf("%f",&(no->nota1));
		printf("Digite a segunda nota do aluno %d valor: ", pos+1);
		scanf("%f",&(no->nota2));
		no->ref = pos+1;
		no->mediaA = (no->nota1+no->nota2)/2.0;
		mediaT += (no->nota1+no->nota2);
		printf("Media do Aluno: %.2f\n", no->mediaA);
		printf("\n");
		no->prox = primA;
		primA = no;
		no->prox = primB;
		primB = no;
	}
	//Mostra conteudo da lista
	mediaT = mediaT/(qtd*2.0);
	aux = primA;
	printf("Media da turma %.2f\n", mediaT);
	while(aux != NULL){
		if(aux->mediaA > mediaT){
			printf("Aluno %d acima da media %.2f\n",aux->ref,aux->mediaA);
		}
			aux = aux->prox;
	}
	aux = primB;
	while(aux != NULL){
		if(aux->nota1 > mediaT){
			printf("O Aluno %d teve media %.2f e sua nota 1 foi de %.2f\n", aux->ref,aux->mediaA,aux->nota1);
		}
		aux = aux->prox;
	}
/*	aux = prim;
	while(aux != NULL){
		if(aux->nota1 > mediaT){
			printf("A nota 1 do Aluno %d foi de %.2f e sua media %.2f\n", aux->ref,aux->nota1,aux->mediaA);
		}
		aux = aux->prox;
	}*/
	return 0;
}
