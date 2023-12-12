//exemplo fazer triangulo
#include <stdio.h>
int main(void){
	int lin, col, alt;
	printf("Digite a altura do triangulo: ");
	scanf("%d", & alt);
	for(lin = 1; lin <= alt; lin++){
		for(col = 1; col <= lin; col++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
