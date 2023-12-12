#include <stdio.h>
int main (void){
	int num, *apt;
	printf("Digite um numero: ");
	scanf("%d",&num);
	apt = &num;
	printf("Num = %d", *apt);
	return 0;
}
