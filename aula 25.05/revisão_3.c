//revisão
#include <stdio.h>
void carregaVetor1(int parmVet1[],int tam);
void carregaVetor2(int parmVet2[],int tam);
void lerVetor(int parmVet1[],int tam1,int parmVet2[],int tam2);
void mostraVetor(int parmVet1[],int tam1,int parmVet2[],int tam2);
int main (void){
	int vet1[10],vet2[10],pos = 0;
	carregaVetor1(vet1,10);
	carregaVetor2(vet2,10);
	mostraVetor(vet1,10,vet2,10);
	return 0;
}
void carregaVetor1(int parmVet1[],int tam){
	int pos = 0;
	for(pos=0;pos<10;pos++){
		printf("Digite  o %d.%d valor: ",pos+1,1);
		scanf("%d",&parmVet1[pos]);
	}
}
void carregaVetor2(int parmVet2[],int tam){
	int pos = 0;
	for(pos=0;pos<10;pos++){
		printf("Digite  o %d.%d valor: ",pos+1,2);
		scanf("%d",&parmVet2[pos]);
	}
}
void lerVetor(int parmVet1[],int tam1,int parmVet2[],int tam2){
	int pos = 0;
	if(carregaVetor2(*parmVet2[pos])==carregaVetor1(*parmVet1[pos])){
		printf("Numero repetido");
	}
}
void mostraVetor(int parmVet1[],int tam1,int parmVet2[],int tam2){
	int pos=0;
	do{
	printf("Num1= %d ",parmVet1[pos]);
	printf("Num2= %d\n",parmVet2[pos]);
	pos++;
	}while(pos<tam1);
}
