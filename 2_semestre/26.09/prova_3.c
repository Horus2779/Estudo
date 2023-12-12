#include <stdio.h>

#include <stdlib.h>

int main(void){

   int *apVet, *apNum, pos;

   if( ! (apVet = malloc(5 * sizeof(int)))){

      printf("Faltou memoria\n");

      return 1;

   }

   for( pos = 0; pos < 5; pos++ ){

      apNum = &apVet[pos];

      *apNum = pos;

   }

   for( pos = 0; pos < 5; pos++ ){

      printf("%d \n", apVet[pos]);      

   }

   return 0;

}
