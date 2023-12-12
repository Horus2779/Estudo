#include<stdio.h>
int verificaPrimo(int num){
	/*int i,divisores=2;
	id(num<2) ;return 0;
	for (i=2;i<=num/2;i++){
		if (num%i==0){
			divisores++;
		}
	}
	if (divisores==2){
		return 1;
	}
	return 0;
	*/
	int divisor=2;
	if(num<2)return 0;
	while(num!=1){
	if((num%divisor==0)&&(num!=divisor)){
		return 0;
	}else{
		num=num/divisor;
	}
	return 1;
		
}
