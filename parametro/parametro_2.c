#include <stdio.h>
int lerAno();
void mostraIdade(int parmNum);
int main (void){
	int num;
	num=lerAno();
	mostraIdade(num);
	return 0;
}
lerAno(parmNum){
	printf("Digite o ano de seu nacimento: ");
	scanf("%d",&parmNum);
	return parmNum;
}
mostraIdade(int parmNum){
	printf("Idade: %d",2022-parmNum);
}
