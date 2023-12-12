#include<stdio.h>
#include<stdlib.h>
int main (void){
	int *apt, maior, c;
	if(!(apt = malloc(10 * sizeof(int)))){
			printf("Faltou Memoria\n");
			exit(1);
		}
	for(c = 0;c < 10;c++){
		printf("Digite o %d valor: ", c+1);
		scanf("%d", &apt[c]);
		if(c == 0){
			maior = apt[c];
		}
		if(maior < apt[c]){
			maior = apt[c];
		}
	
		printf("Maior = %d\n", maior);
		free(apt);
		exit(0);
}
