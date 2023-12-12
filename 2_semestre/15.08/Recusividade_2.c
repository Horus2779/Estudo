//exercicio 2 15/08/2022

#include <stdio.h>
int Multi(int pnum1, int pnum2);

int main (void){
	int num1,num2,prod;
	printf("Digite um numero: ");
	scanf("%d",&num1);
	printf("Digite outro numero: ");
	scanf("%d",&num2);
	prod = Multi(num1,num2);
	printf("O produto de %d vezes %d e: %d",num1,num2,prod);
	return 0;
}

int Multi(int pnum1,int pnum2){
	if(pnum2 < 2){
		return pnum1;
	}else{
		return (pnum1 + Multi(pnum1,pnum2-1));
	}
}
