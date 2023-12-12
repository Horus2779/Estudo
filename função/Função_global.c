#include <stdio.h>
void mostraVet();
int vet[5];
int main (void){
    int pos;
    for(pos=0;pos<5;pos++){
        printf("Digite o %d numero",pos+1);
        scanf("%d",&vet[pos]);
    }
    mostraVet();
    return 0;
}
void mostraVet(){
	int pos;
	for(pos=0;pos<5;pos++){
		printf("%d",vet[pos]);
	}
}
