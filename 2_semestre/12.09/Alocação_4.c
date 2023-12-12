#include<stdio.h>
#include<stdlib.h>
int main (void){
	int *apt, maior, cont, tam;
	printf("Digite a quantidade de numeros desejados: ");
		scanf("%d", &tam);
	if(!(apt = malloc(tam * sizeof(int)))){
			printf("Faltou Memoria\n");
			exit(1);
		}
	for(cont = 0;cont < tam;cont++){
		printf("Digite o %d valor: ", c+1);
		scanf("%d", &apt[cont]);
		if(c == 0){
			maior = apt[cont];
		}
		if(maior < apt[cont]){
			maior = apt[cont];
		}
	}
		printf("Maior = %d\n", maior);
		free(apt);
		exit(0);
}
