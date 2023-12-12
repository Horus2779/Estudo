#include<stdio.h>
#include<stdlib.h>
int main (void){
	int *apt, *cont, *soma;
	float *media;
	if(!(apt = malloc(15 * sizeof(int)))){
		printf("Faltou memoria\n");
		exit(1);
	}
	if(!(cont = malloc(sizeof(int)))){
		printf("Faltou memoria\n");
		exit(2);
	}
	if(!(soma = malloc(sizeof(int)))){
		printf("Faltou memoria\n");
		exit(3);
	}
	if(!(media = malloc(sizeof(float)))){
		printf("Faltou memoria\n");
		exit(4);
	}
	*soma = 0;
	*cont = 0;
	for(*cont = 0;*cont < 15;*cont++){
		printf("Digite o %d valor: ", *cont + 1);
		scanf("%d", &apt[*cont]);
		*soma += apt[*cont];
	}
	*media = *soma/15.0;
	printf("A media dos 15 numeros e: %0.2f\n", *media);
	for(*cont = 0;*cont < 15;*cont++){
		if(apt[*cont] > *media){
			printf("Acima %d = %d\n", *cont,apt[*cont]);
		}
	}
	free(apt);
	free(cont);
	free(soma);
	free(media);
	exit(0);

}
