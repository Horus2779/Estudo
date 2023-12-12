#include <stdio.h>
#include <time.h>

int main (void){
	struct timeb start, end;
	int contador, vetor1[500000], vetor2[500000], dif;
	
	ftime(&start);
	for(contador = 0; contador < 500000; contador ++){
		vetor1[contador] = rand();
		vetor2[contador] = rand();
	}
	ftime(&end);
	dif = (int) (1000.0 * (end.time - start.time) + (end.millitm - end.millitm));
	printf("\n Tempo gasto [selection_sort]: %d ms.\n", dif);
	
	return 0;
}
