#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void cochilo();
void * exemplo_thread_1(void *data);
void * exemplo_thread_2(void *data);

int saldo = 0; // Regiao critica

int main(void){
    int status;
    // Declarando as threads
    pthread_t thrd_1, thrd_2;
    
	// Criando as threads
    pthread_create(&thrd_1, NULL, exemplo_thread_1, (void *)0);
    pthread_create(&thrd_2, NULL, exemplo_thread_2, (void *)0);   
	
	// Finaliando as threads 
    pthread_join(thrd_1, NULL);
    pthread_join(thrd_2, NULL);
    
    return 0;
}

void cochilo(){
   int i, nada, limiteAleatorio;
   limiteAleatorio = 5000 + (rand() % 50000);
   for( i = 1; i <= limiteAleatorio; i++){ 
      nada++; // Retardo de tempo
   }
}

void * exemplo_thread_1(void *data){
   int pos, saldo_interno;
   for( pos = 1; pos <= 10; pos++){ 
      saldo_interno = saldo;
      cochilo();
	  saldo_interno++;
	  saldo = saldo_interno;
	  printf("Thread 1 [%2d] saldo= %d \n", pos, saldo);
	  cochilo(); // Dorme mais um pouco
   }     
}

void * exemplo_thread_2(void *data){
   int pos, saldo_interno;
   for( pos = 1; pos <= 10; pos++){ 
      saldo_interno = saldo;
      cochilo();
	  saldo_interno--;
	  saldo = saldo_interno;
	  printf("===> Thread 2 [%d] saldo = %d \n", pos, saldo);
	  cochilo(); // Volta a dormir
   }     
}

