/*Recursividade

Uma função recursiva é aquele que chama ela mesma
Exemplo: fatorial onde fat(5)=5*fat(4)

Exemplo de função recursiva para calcular fatorial*/
#include<stdio.h>
int fat(int parm);

int main (void){
int num;
printf("Digite o numero: ");
scanf("%d",&num);
printf("Resultado: %d\n",fat(num));
return 0;
}

int fat (int parm){
if(parm>1){
	return(parm*fat(parm-1));
	}
return 1;
}
