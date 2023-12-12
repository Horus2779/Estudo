#include <stdio.h>
int pos;
float prova[10];
float media;
void lerNotas();
void notaAcima();
float calculaMedia();

int main (void){
	lerNotas();
	for(pos=0;pos<10;pos++){
	printf("As notas foram %0.2f\n",prova[pos]);
	}
	calculaMedia();
	media=calculaMedia();
	printf("A media da sala e: %0.2f\n",media);
	notaAcima();
	return 0;
}
void lerNotas(){
	int pos;
	for(pos=0;pos<10;pos++){
		printf("Digite a %d nota: ",pos+1);
		scanf("%f",&prova[pos]);
	}
}
void notaAcima(){
	for(pos=0;pos<10;pos++){
		if(prova[pos]>media){
		printf("As notas acima da nota sao %0.2f\n",prova[pos]);
		}
	}
}
float calculaMedia(){
	int soma=0;
	for(pos=0;pos<10;pos++){
		soma=soma+prova[pos];
	}
	return soma/10.0;
}
