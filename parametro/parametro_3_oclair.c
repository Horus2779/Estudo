//exe1 parametro
#include <stdio.h>
void digita (float *parmR);
int main (void){
	float num;
	digita(&num);
	printf("Retornou %10.3f \n",num);
	return 0;
}
void digita(float *parmR){
	float valor;
	printf("Digite o valor: ");
	scanf("%f",&valor);
	*parmR = valor;
}
