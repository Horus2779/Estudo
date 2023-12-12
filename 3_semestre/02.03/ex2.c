#include <stdio.h>

void funq_val(int parm[5]);

int main (void){
	int num[5], c;
	for(c=0;c<5;c++){
		
	func_val(num[c]);
	}
	return 0;
}

void func_val(int parm[5]){
	parm = parm + 1;
	printf("func.val %d\n",parm);
}
