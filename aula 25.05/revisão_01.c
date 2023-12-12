// revisão 
#include <stdio.h>
void carregaVetor(int parmVet[],int tam);
void mostraVetor(int parmVet[],int tam); //Assinatura
int main (void){
	int vet[10],pos = 0;
	carregaVetor(vet,10);
	mostraVetor(vet,10);
	return 0;
}

void carregaVetor(int parmVet[], int tam){
	int pos=0;
	do{
		printf("Digite o %d valor: ",pos+1);
		scanf("%d",&parmVet[pos]);
		pos++;
	}while(pos<tam); 	
}
void mostraVetor(int parmVet[],int tam){
	int pos=0;
	do{
	printf("Valor %d: %d\n",pos+1,parmVet[pos]);
	pos++;
	}while(pos<tam);
}
/*
#include <stdio.h>
int main (void){
	int pos = 0,vet[10];
	do{
	printf("Digite o %d valor: ", pos+1)
	scanf("%d",&vet[pos]);
	pos++
	}while(pos<10);
	pos = 0;
	do{
	printf("Valor %d:%d\n,pos+1,vet[pos]);
	pos++
	}while(pos<10);
	return 0;
	*/
