#include<stdio.h>
#include<stdlib.h>
int main (void){
int *p_num;
if(!(p_num = malloc(sizeof(int)))){
	printf("Faltou memoria!\n");
	exit(1);
}
printf("Digite um valor: ");
scanf("%d", p_num);
printf("Voce digitou %d\n", *p_num);
free(p_num);
exit(0); //Final desejado
}
