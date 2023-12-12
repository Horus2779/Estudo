//parametro 4 oclair
#include <stdio.h>
void valida(float *parmR);
int main (void){
	float notas[10];
	int pos;
	for(pos=0;pos<10;pos++){
		valida(&notas[pos]);
	}
	for(pos=0;pos<10;pos++){
		printf("Nota=%5.2f\n",notas[pos]);
	}
	return 0;
}
void valida(float *parmR){
	float valor= -1;
	while((valor<0)||(valor>10)){
		printf("Digite nota entre 0 a 10: ");
		scanf("%f",&valor);
	}
	*parmR=valor;
}
