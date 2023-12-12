#include <stdio.h>
#include <time.h>

int main (void){
	int n1;
	struct timeb inic,fim;
	int dif,num;
	ftime(&inic); //Marca tempo atual(inicio)
	printf("Digite um numero: ");
	scanf("%d",&num);
	ftime(&fim);//Marca tempo atual(fim)
	dif=(int)(1000*(fim.time-inic.time)+(fim.millitm-inic.millitm));
	printf("Tempo gasto=%dms\n",dif);
	return 0;
}
