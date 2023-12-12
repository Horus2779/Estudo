//exercicio 1
#include <stdio.h>
#include <stdlib.h>
int main (void){
	char nota1[10],nota2[10];
	float media;
	printf("Digite a primeira nota: ");
	scanf(" %9[^\n]", nota1);
	printf("Digite a segunda nota: ");
	scanf(" %9[^\n]", nota2);
	printf("Media = %5.2f", (atof(nota1)+atof(nota2))/2.0);
	return 0;
}
/*int main (void){
	int num;
	char valStr[10] = "12";
	num = atoi(valStr);
	printf("Dobro = %d\n", 2*num);
	return 0;
}*/
