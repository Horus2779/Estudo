//exemplo 01
#include <stdio.h>
#include <stdlib.h>

struct TipoNo{
	int num;
	struct TipoNo *prox;
};

int main (void){
	struct TipoNo *no,*prim=NULL,*aux;
	int pos;
	for(pos=0;pos<5;pos++){
		if(!(no = malloc(sizeof(struct TipoNo)))){
			printf("Faltu memoria!\n");
			return -1;
		}
		printf("Digite o %d valor: ", pos+1);
		scanf("%d",&(no->num));
		no->prox = prim;
		prim = no;
	}
	//Mostra conteudo da lista
	aux = prim;
	while(aux != NULL){
		printf("Resultado: %d\n", aux->num);
		aux = aux->prox;
	}
	return 0;
}
