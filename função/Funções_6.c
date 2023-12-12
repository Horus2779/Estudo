#include <stdio.h>

void mostrarMenu();
int lerOpcao();
int main (void){
	int opcao;
	do{
		mostrarMenu();
		opcao=lerOpcao();
		if(opcao==1){
			printf("Oi\n");
		}
		else if(opcao==2){
			printf("Adeus\n");
		}
		else if(opcao==9){
			printf("Fim\n");
		}
		else{
			printf("Opcao desconehcida\n");
		}
	}while(opcao!=9);
	return 0;
}
void mostrarMenu(){
	printf("1-Escrever Oi\n");
	printf("2-Escrever Adeus\n");
	printf("9-Finalizar\n");
}
int lerOpcao(){
	int op;
	scanf("%d",&op);
	return op;
}
