
#include <stdio.h>

void funq_val(int parm);
void func_ref(int *parm);


int main (void){
	int num = 5;
	printf("funcao main: %d\n",num);
	func_val(num);
	printf("funcao main 2: %d\n",num);
	func_ref(&num);
	printf("funcao main 3: %d\n",num);
}

void func_val(int parm){
	parm = parm + 1;
	printf("func.val %d\n",parm);
}
void func_ref(int*parm){
	*parm = *parm+1;
	printf("func.ref %d\n",*parm);
}
