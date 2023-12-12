// exercicio 22/08/2022

#include <stdio.h>

void denp(int num);
int dados[2][10];
int main (void){
	int num;
	
	dados [0][0] = 0; dados[1][0] = 0;
	dados [0][1] = 1; dados[1][1] = 3;
	dados [0][2] = 2; dados[1][2] = 8;
	dados [0][3] = 3; dados[1][3] = 9;
	dados [0][4] = 4; dados[1][4] = 1;
	dados [0][5] = 5; dados[1][5] = 4;
	dados [0][6] = 6; dados[1][6] = 1;
	dados [0][7] = 7; dados[1][7] = 2;
	dados [0][8] = 8; dados[1][8] = 0;
	dados [0][9] = 9; dados[1][9] = 0;
	
	printf("Digite o codigo do produto: ");
	scanf("%d",&num);
	denp(num);
	return 0;
	}
void denp(int num){
	if(dados[1][num] != 0){
		printf("Depende de: %d\n",dados [1][num]);
		denp(dados[1][num]);
	}

}

