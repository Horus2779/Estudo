#include<stdio.h>
int main (void){
	int n,res;
	printf("Digite um ano: ");
	scanf("%d",&n);
	res=(n%4==0)&&(n%100!=4)||(n%400==0)||(n==4) ? 1:0;
	printf("%d",res);
	return 0;
}
