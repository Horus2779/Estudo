#include<stdio.h>
#include<stdlib.h>

struct tipo_no {
	int num;
	struct tipo_no *prox;
};

int main (void){

	int isEmpty (struct tipo_no *inic, struct tipo_no *fim){//Vazia = 1
		if(inic == NULL){
			return 1;
		}
	}
	void inserir(struct tipo_no **inic, struct tipo_no **fim, int valor){
		struct tipo_no *novo;
		if(!(novo=malloc(sizeof(struct tipo_no)))){
			printf("Faltou memoria\n");
			exit(1);
		}
		novo->num = valor;
		novo->prox = *fim;
		*fim = novo;
		if(*inic == NULL){
			*inic = novo;
		}
	}
	int remover(struct tipo_no **inic, struct tipo_no **fim){
		int valor;
		struct tipo_no *remover;
		if(*inic == NULL){
			printf("Fila vazia!\n");
			exit(2);
		}
		if(*fim == *inic){
			remover=*fim;
			valor = remover->num;
			*inic = NULL;
			*fim = NULL;
		}else{
			remover = *fim;
			while(remover->prox = *inic){
				remover=remover->prox;
			}
		}
		free(remover);
		return valor;
	}		
}
