//exercicio 04 22/08/2022

#include <stdio.h>

int main (void){
	int c;
	double soma = 0;
	for(c=1;c<=20;c++){
		soma += 2 * 3;
	}
	if(soma == 120){
	printf("Area: %0.2f",soma);
	sleep(5);
	printf("MAMA");
	}
	return 0;
}
