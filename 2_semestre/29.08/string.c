#include<stdio.h>
#include<string.h>
int main (void){
char nomeA[15],nomeB[15],dest[100] = "";
	printf("Digite o primeiro nome: ");
	scanf(" %14[^\n]", nomeA);
	printf("Digite o segundo nome: ");
	scanf(" %14[^\n]", nomeB);
	strncat(dest,nomeA,14);
	printf("Resultado: %s\n",dest);
	strncat(dest,nomeB,14);
	printf("Resultado final: %s\n",dest);
return 0;
}
