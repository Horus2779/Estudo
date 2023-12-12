#include<stdio.h>
int main (void){
	int res;
	scanf("%d",&res);
	res = (res % 2 == 0) ? 1 : 0;
	printf("%d",res);
	return 0;
}
