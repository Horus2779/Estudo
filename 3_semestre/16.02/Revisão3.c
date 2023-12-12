#include<stdio.h>
#include<stdlib.h>

struct tipo_simples{
	double num;
};

int main (void){
	double qtd = 0; //Contador de variaveis criadas
	struct tipo_simples *nova;
	while(1 == 1){
		printf("Qtd: %f \n", qtd);
		if(!(tp = malloc(sizeof(struct tio_simples)))){
			printf("Não há espaço");
			return 1;
			free(nova);
		}
	}while (tp != 0);
	return 0;
}
