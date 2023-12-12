#include <stdio.h>

#include <stdlib.h>

int main(void){

   int vet[5], pos, *apNum;

   apNum = vet;

   *apNum = 15;

   for( pos = 1; pos < 5; pos++ ){

      apNum = &vet[pos];

      *apNum = pos;

   }

   for( pos = 0; pos < 5; pos++ ){

      printf("%d \n", vet[pos]);

   }

   return 0;

}
