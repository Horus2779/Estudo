//exercicio 04/05/2022
#include <stdio.h>
int lerNum();
void mostraDobro(int parmNum);
int main (void){
	int num;
	num=lerNum();
	mostraDobro(num);
	return 0;
}
lerNum(parmNum){
	printf("Digite um numero: ");
	scanf("%d",&parmNum);
	return parmNum;
}
mostraDobro(int parmNum){
	printf("Dobro: %d",parmNum*2);
}
