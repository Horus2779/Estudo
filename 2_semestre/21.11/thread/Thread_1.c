#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void cochilo();
void * exemplo_thread_1(void *data);
void * exemplo_thread_2(void *data);
   
int main(void){
    pthread_t thrd_1, thrd_2; // Declarando as threads
    
	// Criando as threads
    pthread_create(&thrd_1, NULL, exemplo_thread_1, (void *)0);
    pthread_create(&thrd_2, NULL, exemplo_thread_2, (void *)0);   
	
    pthread_join(thrd_1, NULL);  // Finaliando as threads 
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
   int pos;
   for( pos = 1; pos <= 10; pos++){ 
      printf("Thread 1 [%d] \n", pos);
      cochilo();
   }     
}

void * exemplo_thread_2(void *data){
   int pos;
   for( pos = 1; pos <= 10; pos++){ 
      printf("===> Thread 2 [%d] \n", pos);
      cochilo();
   }     
}

