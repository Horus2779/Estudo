#include<stdio.h>
int main (void){
	char letra;
	 
	do{
	printf("Digite um caractere: \n");	
	scanf(" %c" , &letra);
	printf("%c -> ASCII = %d\n",letra, letra);
	sleep(10);
	}while(letra != '#');
return 0;
}
