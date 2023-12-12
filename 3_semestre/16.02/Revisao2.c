#include <stdio.h>
/*
int main (void){
	int l,h,s = 0;
	printf("Digite o valor de linha: ");
	scanf("%d",&s);
	for(h=1;h<=s;h++){
		for(l=1;l<=h;l++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
*/
int main (void){
	int la,bas,c;
	printf("Digite o valor: ");
	scanf("%d",&la);

	for(bas=1;bas<=la;bas++){
		if(bas<la){
			printf("*");
		}else{
			printf("\n");
		}
	}
	return 0;
}
