//revisão 3 22/08/2022

#include <stdio.h>

int main (void){
	int num,soma = 0;
	for(num=2;num<=20;num++){
		soma += (num*(num + 1));
	}
	printf("Soma: %d", soma);
	return 0;
}
