//Excericio função 27/04/22
#include <stdio.h>

int lerNumero1(){
  int num1;
  printf("Digite o primeiro numero ");
  scanf("%d",&num1);
 return num1;
}
int lerNumero2(){
	int num2;
	printf("Digite o segundo numero ");
  	scanf("%d",&num2);
  	return num2;
  }
int lerNumero();
 int main (void){
  int valor1,valor2;
  valor1=lerNumero1();
  valor2=lerNumero2();
  if(valor1>valor2){
  	printf("%d",valor1);
  }else{
  	printf("%d",valor2);
  }
 return 0;
}
