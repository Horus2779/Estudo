#include <stdio.h>
#include <time.h>

void mostra(int parm[], int tam);
void insert_sort(int vet[], int tam);

int main(void){
    int n1;
    struct timeb inic, fim;
    int dif, num;
    ftime(& inic);
    int tam = 50000;
    int pos, vet[tam];
    ftime(& inic);
    for(pos = 0; pos < tam; pos++){
        vet[pos] = rand();
    }
    mostra(vet, 20);
    ftime(& fim);
    dif = (int)(1000 * (fim.time - inic.time) + (fim.millitm - inic.millitm));
    printf("Tempo gasto = %dms\n", dif);

    ftime(& inic);
    insert_sort(vet, tam);
    ftime(& fim);
    dif = (int)(1000 * (fim.time - inic.time) + (fim.millitm - inic.millitm));
    printf("Tempo de ordenacao = %dms\n", dif);
    mostra(vet, 20);
    return 0;
}

void mostra(int parm[], int tam){
    int pos;
    for(pos = 0; pos < tam; pos++){
        printf("%d\n", parm[pos]);
    }
}

void insert_sort(int vet[], int tam){
    int ext, inter, troca;
    for(ext = 0; ext < tam - 1; ext++){
        for(inter = ext + 1; inter < tam; inter++){
            if(vet[inter] < vet[ext]){
                troca = vet[ext];
                vet[ext] = vet[inter];
                vet[inter] = troca;
            }
        }
    }
}
