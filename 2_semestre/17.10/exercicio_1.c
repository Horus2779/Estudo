//exercicio 1
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 1000
#include <locale.h>
int main (void){
	setlocale(LC_ALL, "Portuguese");
	int qtdLin = 0;
	char nomeArq[81], linha[TAMANHO];
	FILE *arqEntrada;
	printf("Digite o nome do arquivo a ser lido: ");
	scanf("%s", &nomeArq);
	if((arqEntrada = fopen(nomeArq, "r"))== NULL){
		printf("Arquivo [%s] não pode ser aberto!\n", nomeArq);
		return -1;
	}
	while(!feof(arqEntrada)){ //FEOF = File End Of File
		if(fgets(linha, TAMANHO,arqEntrada)){
			setlocale(LC_ALL, "Portuguese");
			printf("%d: %s",qtdLin + 1,linha);
			qtdLin += 1;
		}
	}
	(void)fclose(arqEntrada);
	printf("Foram lidas %d linhas", qtdLin);
return 0;
}
