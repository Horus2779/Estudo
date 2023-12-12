#include<stdio.h>
int gyro(int parm);

int main (void){
int num;
printf("Digite a posição: ");
scanf("%d",&num);
printf("Resultado: %d\n",gyro(num));
return 0;
}

int gyro (int parm){
if(parm < 3){
	return 1;
}
	return(gyro(parm-1)+gyro(parm-2));
return 1;
}
