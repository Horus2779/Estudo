#include <stdio.h>
int main (void){
	int num = 5, *apt; //asterisco usado para criar apontador
	printf("Num = %d\n",num);
	apt = &num;
	*apt = 10; //Asterisco usado para acessar uma posi��o de memoria
	printf("Num = %d\n",num);
return 0;
}
