// Recusividade 15/08/2022

#include <stdio.h>

int fat (int p_nunm);
int main (void){
	int num,res;
	printf("Digite um valor: ");
	scanf("%d",&num);
	res = fat(num);
	printf("Resultado %d\n",res);
	return 0;
}
int fat(int p_num){
	if(p_num < 1){
		printf("Erro!!!\n");
		return 0;
	}
	if (p_num > 2){
	return (p_num * fat(p_num - 1));
	}else{
		return p_num;
	}
}
