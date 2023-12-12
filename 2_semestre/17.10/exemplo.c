//Exemplo
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 1000
int main (void){
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
			printf("%s",linha);
		}
	}
	(void)fclose(arqEntrada);
return 0;
}
