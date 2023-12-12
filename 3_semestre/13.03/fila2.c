#include<stdio.h>
#include<stdlib.h>

struct tipo_no {
	int num;
	struct tipo_no *prox;
};

int isEmpty (struct tipo_no *inic, struct tipo_no *fim);
void inserir (struct tipo_no **inic, struct tipo_no **fim,int valor);
int remover (struct tipo_no **inic, struct tipo_no **fim);
void Mostrarfila(struct tipo_no *fim);

int main (void){
	struct tipo_no *inic=NULL, *fim=NULL;
	int pos;
	for(pos=1;pos<6;pos++){
		inserir(&inic,&fim,pos);
		Mostrarfila(fim);
	}
	printf("Mostrando a fila\n");
	while(fim != NULL){
		pos = remover(&inic,&fim);
		printf("Valor = %d\n",pos);
	}
	printf("Fim\n");
	return 0;
}

int isEmpty (struct tipo_no *inic, struct tipo_no *fim){//Vazia = 1
		if(inic == NULL){
			return 1;
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
		free(remover);
		return(valor);
	}
		remover = *fim;
		while(remover->prox != *inic){
			remover=remover->prox;
		}
		*inic = remover;
		remover = remover->prox;
		(*inic)->prox = NULL;
		valor = remover->num;
	free(remover);
	return valor;
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

void Mostrarfila(struct tipo_no *fim){
	while(fim != NULL){
		printf("Valor: %d\n",fim->num);
		fim=fim->prox;
	}
}
