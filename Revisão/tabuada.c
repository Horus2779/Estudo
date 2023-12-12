#include <stdio.h>
int main (void){
	float num;
	int pos=1;
	printf("Digite um valor: ");
	scanf("%f",&num);
	do{
		printf("%5.2f x %d = %5.2f\n", num,pos,(num*pos));
		pos++;
	}while(pos<11);
	return 0;
}
