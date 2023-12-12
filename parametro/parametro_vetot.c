#include<stdio.h>
void carregaVetor(float vet[], int tam);
int main(void){
	int pos;
	float vetNotas[10];
	carregaVetor(vetNotas,10);
	for(pos=0;pos<10;pos++){
		printf("Nota %d = %5.2f\n",pos+1,vetNotas[pos]);
	}
	return 0;
}
void carregaVetor(float vet[],int tam){
	int pos;
	for(pos=0;pos<tam;pos++){
	printf("Digite a %d nota:",pos+1);
	scanf("%f",&vet[pos]);
	}
}
