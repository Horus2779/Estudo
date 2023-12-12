#include<stdio.h>

int main (void){
	int x = 1, y = 2, z[10], *ip;
	z[1] = 3;
	ip = &x;
	y = *ip;
	*ip = 0;
	*ip = z[1] + y;
	printf("x= %d, y= %d, z[1]= %d e *ip= %d", x,y,z[1], *ip);
}
