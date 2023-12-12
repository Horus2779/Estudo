// exercicio 4 27 04 
#include <stdio.h>
int prova[10];
float notas();
float media();
float acimaMedia();
int main (void){
	int pos;
	notas();
	printf("As notas digitadas foram: ");
	for(pos = 0; pos < 10; pos++){
		printf("%f", prova[pos]);
	}
	printf("A media da turma foi de: %f", media());
	acimaMedia();
	media();
	return 0;
}

float notas(){
	int pos;
	for(pos = 0; pos < 10; pos++){
		printf("Digite a %d nota: ", pos + 1);
		scanf("%f", & prova[pos]);
	}
	return pos;
}

float media(){
	float medias;
	medias = notas() / 10.0;
	return medias;
}

float acimaMedia(){
	int pos;
	printf("As notas acima da media foram:");
	for(pos = 0; pos < 10; pos++){
		if(prova[pos] > 5){
			printf("%f\n", prova[pos]);
		}
	}
}
