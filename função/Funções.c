//Fun��es 27/04/22
#include <stdio.h>
#include <locale.h>
void func (){ //Tipo,nome,padr�o
setlocale(LC_ALL,"Portuguese");
	printf("Primeira linha\n");
	printf("Segunda linha\n");
	printf("Terceira linha\n");
}
int main (void){
	func();
	func();
	func();
	return 0;
}
