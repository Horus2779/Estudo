#include <stdio.h>
#include <stdlib.h>



int main (void){
	
	struct tipo_simples{
	int num;
};
	int value,c;
	struct tipo_simples *apt;
	if(! (apt = malloc(256*sizeof(int)))){
		printf("Faltou Memoria!");
		exit(1);
	}
	for(c=0;c<=apt;c++){
		printf("Valor %d\n");
	}
	exit(0);
}
