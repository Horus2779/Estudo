#include <stdio.h>
void recebaNum(int *parmNum);
int main (void){
	int num;
	recebaNum(&num);
	printf("Numero: %d",num);
	return 0;
}
void recebaNum(int *parmNum){
	*parmNum;
	printf("Digite um numero: ");
	scanf("%d",parmNum);
}
