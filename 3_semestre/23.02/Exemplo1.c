#include<stdio.h>
#include<stdlib.h>

struct tipo_simples{
	double num;
	struct tipo_simples *prox;
};

int main (void){
	double qtd = 0; //Contador de variaveis criadas
	struct tipo_simples *nova, *prim = NULL;
	//Cria primeiro bloco
	if(!(nova = malloc(sizeof(struct tipo_simples)))){
		printf("Faltou Memoria! \n");
		return (-1);
	}
	nova->prox = NULL;
	prim = nova;
	qtd++;
	while(1 == 1){
		if(!(nova = malloc(sizeof(struct tipo_simples)))){
			printf("Não há espaço");
			return (-1);
		}
		qtd++;
		printf("Qtd = %.0f \n", qtd);
		nova->prox = prim; //Insere lista ligada
		prim = nova;
	}
	return(0);
}
