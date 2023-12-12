//exemplo 2
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAMANHO 1000

int main (void){
	char nome[81], linha[TAMANHO];
	int opc, c = 0;
	FILE *arq;
	printf("Digite o nome do arquivo: ");
	scanf(" %[^\n]", &nome);
	if((arq = fopen(nome, "w"))==NULL){
		printf("Arquivo [%s] não pode ser criado!\n", nome);
		return -1;
	}
	opc = 1;
	printf("Maximo de linhas permitidos: 10 linhas\n");
	while(opc != 0 && c <= 10){
		printf("%d: Digite algo: ", c+1);
		c++;
		scanf(" %[^\n]", &linha);
		linha[strlen(linha)] = '\n'; //Insere "nova linha"
		if(fputs(linha,arq)==EOF){
			printf("Erro de escrita!\n");
			(void)fclose(arq);
			return -2;
		}
	//	if(c<10){
		printf("Deseja inserir outra linha (0 = não e 1 = sim): ");
		scanf("%1d", &opc);	
	/*	}else{ 
			return 0;
		}	*/
	}
	(void)fclose(arq);
	return 0;
}
