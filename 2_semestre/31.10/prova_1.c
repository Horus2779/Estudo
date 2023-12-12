#include <stdio.h>

#include <string.h>

 int main(void){ 

    char nome[80];

    printf("Digite seu nome: ");

    scanf(" %[^\n]", nome);

    printf("Boa noite, %s \n", nome);

    return 0;
}
