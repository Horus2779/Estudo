#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void cochilo();
void * exemplo_thread_1(void *data);
void * exemplo_thread_2(void *data);

int saldo = 0; // Regiao critica
int semaforo = 0; // 0= Aberto e 1= Fechado

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
      while( semaforo != 0){ // Thread fica parada aqui ate abrir o SEMAFORO
         cochilo();
	  }
      semaforo = 1; // Fechar o semaforo para entrar na REGIAO CRITICA com seguranca
      saldo_interno = saldo;
      cochilo();
	  saldo_interno++;
	  saldo = saldo_interno;
	  printf("Thread 1 [%2d] saldo= %d \n", pos, saldo);
	  semaforo = 0; // Libera a REGIAO CRITICA para outras threads (abre o SEMAFORO)
	  cochilo(); // Volta a dormir
   }     
}

void * exemplo_thread_2(void *data){
   int pos, i, nada, limiteAleatorio, saldo_interno;
   for( pos = 1; pos <= 10; pos++){ 
      while( semaforo != 0){ // Thread fica parada aqui ate abrir o SEMAFORO
         cochilo();
	  }
      semaforo = 1; // Fechar o semaforo para entrar na REGIAO CRITICA com seguranca
      saldo_interno = saldo;
      cochilo();
	  saldo_interno--;
	  saldo = saldo_interno;
	  printf("==> Thread 2 [%d] saldo = %d \n", pos, saldo);
	  semaforo = 0; // Libera a REGIAO CRITICA para outras threads (abre o SEMAFORO)
	  cochilo(); // Volta a dormir
   }     
}

