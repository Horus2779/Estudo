// 08/08/2022 2°semestre

#include <stdio.h>



int main (void){

int num,soma=0,c;

for (c=0;c<28;c++){
	printf("Digite o %d numero inteiro: ",c+1);
	scanf("%d",&num);
	
	if((num%2) == 0){
		soma += num;
	}
}
printf("A soma dos numeros pares %d",soma);

return 0;
}


