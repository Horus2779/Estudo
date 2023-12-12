#include<stdio.h>
void carregaVetor(float vet[], int tam);
void notaMaiorMenor(float vet[], int tam);
void mostraNotas(float vet[], int tam);
int main(void){
	int pos;
	float vetNotas[10],maior=0,menor=0;
	carregaVetor(vetNotas,10);
	mostraNotas(vetNotas,10);
	notaMaiorMenor(vetNotas,10);
	return 0;
}
void carregaVetor(float vet[],int tam){
	int pos;
	for(pos=0;pos<tam;pos++){
	printf("Digite a %d nota:",pos+1);
	scanf("%f",&vet[pos]);
	}
}
void notaMaiorMenor(float vet[],int tam){
	int pos;
	float maior = 0,menor = 0;
	for(pos=0;pos<tam;pos++){
		if(pos == 0){
			maior = vet[0];
			menor = vet[0];
		}else{
			if(vet[pos] > maior){
			maior = vet[pos];
			}
			else if(vet[pos] < menor){
			menor = vet[pos];
			}
		}
	}
	printf("A maior nota e %5.2f\n", maior);
	printf("A menor nota e %5.2f\n", menor);
}
void mostraNotas(float vet[], int tam){
	int pos;
		for(pos=0;pos<10;pos++){
		printf("Nota %d = %5.2f\n",pos+1,vet[pos]);
	}
}
