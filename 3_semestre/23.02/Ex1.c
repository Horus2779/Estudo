#include<stdio.h>
#include<stdlib.h>

struct tipo_simples{
	double num;
	struct tipo_simples *prox;
};

int main (void){
	int cont=0;
	struct tipo_simples *nova, *prim = NULL;
	if(!(nova = malloc(sizeof(struct tipo_simples)))){
		printf("Faltou Memoria! \n");
		return (-1);
	}
	for(cont=0;cont<5;cont++){
		printf("Digite o %d valor: \n", cont+1);
		scanf("%.2f", prim);
	}
	return 0;
}
