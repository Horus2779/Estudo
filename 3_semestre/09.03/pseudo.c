#include<stdio.h>

void mostra (int parm[],int tam);

int main (void){
	int tam = 500000;
	int pos, vet[tam];
	for(pos=0;pos<tam;pos++){
		vet[pos]=rand();
	}//Mostra primeiras posições do vetor
	mostra(vet,50);
	return 0;
}

void mostra(int parm[],int tam){
	int pos;
	for(pos=0;pos<tam;pos++){
		printf("%d\n",parm[pos]);
	}
}
