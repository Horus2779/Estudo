//exemplo1.c
#include <stdio.h>
void func(int*parmRef,int parVal);
int main (void){
	int num1=3,num2=4;
	func(&num1,num2);
	printf("Resultado num1: %d\n",num1);
	printf("Resultado num2: %d\n",num2);
	return 0;
}
void func(int*parmRef,int parmVal){
	*parmRef=8;
	parmVal=9;
}
