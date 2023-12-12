#include<stdio.h>
int main(void)

{

int valor;



printf("Digite um valor de 1 a 7: ");

scanf("%d", &valor);

printf("%s”, (valor == 1?”Cachorro\n”: (valor == 2? “Gato\n”: (valor%3==0?”Peixe\n”: “SRD\n") ) ));

return 0;


}


