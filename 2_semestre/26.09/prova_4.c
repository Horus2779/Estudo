#include <stdio.h>

int main(void){ 

   char opc;

   printf("Digite d ou n:");

   scanf("%c", &opc);

   if( opc == 'd'){

      printf("Bom dia! \n");

   }

   else{

      printf("Boa noite! \n");

   }

   return 0;

}
