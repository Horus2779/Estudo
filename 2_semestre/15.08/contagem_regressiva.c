// exercicio 1 15/08/2022
#include <stdio.h>
int Numero();
void Regress(int num);
int main (void){
	int num;
	num = Numero();
	Regress(num);
	return 0;
}
int Numero(num){
printf("Digite um numero inteiro: ");
scanf("%d",&num);
return num;
}
void Regress(int num){
	for(num=num;num>-1;num--){
		printf("%d\n",num);
		sleep(1);
	}
}
