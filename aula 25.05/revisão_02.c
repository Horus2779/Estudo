// revisão 02
#include <stdio.h>
void somaVetor();
int main (void){
	somaVetor();
	return 0;
}
void somaVetor(int c){
	int pos,soma=0;
	for(pos=2;pos<=2000;pos=pos+2){
			soma+=pos;
	}
	printf("A soma entre 2 e 200 e: %d",soma);
}
