#include <stdio.h>

#include <string.h>

int main(void){

   char nome[30];

   int idade;

   printf("Digite seu nome: ");

   scanf(" %[^\n]", &nome);

   printf("Digite sua idade: ");

   scanf("%d", &idade);

   

   printf("Nome informado: %s e idade informada: %d \n", nome, idade);

   return 0;

}
