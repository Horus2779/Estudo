#include <stdio.h>
int main (void){
	int num1,num2;
	int *p1,*p2;
	printf("Digite um numero: ");
	scanf("%d",&num1);
	p1 = &num1;
	printf("Digite outro numero: ");
	scanf("%d",&num2);
	p2 = &num2;
	if(*p1>*p2){
		printf("Maior = %d", *p1);
	}else{
		printf("Maior = %d", *p2);
	}
	return 0;
}
