//Revisão ex1

#include <stdio.h>
#include <stdlib.h>
void numme(int *apt_num, int c);
int main (void){
	int cont, *apt, *vet;
	if(!(vet = malloc(10 * sizeof(int)))){
		printf("Faltou Memoria");
		exit(1);
	}
	for(cont=0;cont<10;cont++){
		printf("Digite %d valor: ", cont+1);
		scanf("%d", &vet[cont]);
	}
	numme(vet,10);
	exit(0);
}
void numme(int *apt_num, int c){
	int cont;
	/*for(cont=0;cont<c;cont++){
		printf("O %d numero digitado: %d\n",cont+1,apt_num[cont]);
	}*/
	if(c<=0){
		return;
	} 
		printf("O numero digitado: %d\n",apt_num[c-1]);
		numme(apt_num,c -1);
}

