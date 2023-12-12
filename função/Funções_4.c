//Funções 27/04/22
#include <stdio.h>

int lerNumero(){
  int num;
  printf("Digite um numero ");
  scanf("%d",&num);
 return num;
}
int lerNumero();
 int main (void){
  int valor;
  valor=lerNumero();
  printf("Resultado: %d\n",valor);
 return 0;
}
