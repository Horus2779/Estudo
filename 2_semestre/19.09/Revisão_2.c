//Revisão ex2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char Anome(char *name, int c);
int carregaNota(float *nota, int c);
int main (void){
	char *vetName;
	float *vetNota;
	int cont;
	if(!(vetName = malloc(10*50 * sizeof(char)))){
		printf("Faltou memoria");
		exit(1);
	}
	if(!(vetNota = malloc(10 * sizeof(float)))){
		printf("Faltou memoria");
		exit(2);
	}
	Anome(vetName,cont);
//	carregaNota(vetNota,10);
	exit(0);
}
char Anome(char *name, int c){
	for(c=0;c<10;c++){
		printf("Digite nome do aluno: ");
		scanf(" %s", &name[c]);
	}
	
}
