#include <stdio.h>
float lerNota(float *parmNota);
float nota[9];
int main (void){
	int c;
	float recebaNota=0;
	lerNota(&recebaNota);
	for(c=0;c<10;c++){
		printf("Nota %d: %.2f\n",c+1,nota[c]);
	}
	return 0;
}
float lerNota(float *parmNota){
	float recebaNota=0;
	int c;
	for(c=0;c<10;c++){
		printf("Digite a nota %d: ",c+1);
		scanf("%f",&nota[c]);
		if(nota[c]>10 || nota[c]<0){
			do{
				printf("Digite um valor valido entre 0 a 10\n");
				printf("Digite a nota %d: ",c+1);
				scanf("%f",&nota[c]);
			}while(nota[c]<0 || nota[c]>10);
		}
	}
	*parmNota = recebaNota;
}
