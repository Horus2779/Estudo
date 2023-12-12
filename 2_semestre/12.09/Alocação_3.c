#include<stdio.h>
#include<stdlib.h>
int main (void){
	int *apt, maior, c = 0;
	if(!(apt = malloc(10 * sizeof(int)))){
			printf("Faltou Memoria\n");
			exit(1);
		}
	for(c = 0;c <10;c++){
		printf("Digite o %d valor: ", c+1);
		scanf("%d", apt);
		if(maior < *apt){
			maior = *apt;
		}
	}
	printf("Maior numero digitado %d", maior);
	exit(0);
	free(apt);
}	
	
