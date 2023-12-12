#include<stdio.h>
#include<stdlib.h>
int main (void){
int *p_num1,*p_num2,*p_soma;
if(!(p_num1 = malloc(sizeof(int))) || !(p_num2 = malloc(sizeof(int)))){
	printf("Faltou Memoria\n");
	exit(1);
}
p_num1 = malloc(sizeof(int));
p_num2 = malloc(sizeof(int));
printf("Digite um numero: ");
scanf("%d", p_num1);
printf("Digite outro numero: ");
scanf("%d", p_num2);
printf("A soma dos numeros e: %d", *p_num1 + *p_num2);
free(p_num1);
free(p_num2);
exit(0);
}
