// Hipismo

#include <stdio.h>

float CompetidoresTempo(float tempo);
float MelhorTempo(float Mtempo);
int main (void){
	float tempo,Mtempo,tempoc;
	printf("Digite o tempo da categoria: ");
	scanf("%f",tempoc);
	tempo = CompetidoresTempo(tempo);
	MelhorTempo(Mtempo);
	printf("O melhor tempo foi: %0.2f", Mtempo);
	return 0;
}

float CompetidoresTempo(float tempo){
	int idv,c;
		printf("Digite a quantidade de competidores: ");
		scanf("%d",&c);
		for(idv=0;idv=c;idv++){
			printf("Digite o tempo do %d competidor: ", idv);
			scanf("%f",&tempo);
		}
		return tempo;
}

float MelhorTempo(float Mtempo){
	float tempo,tempoc, tempo1 = 0, melhor = 0;
		if(tempo>tempoc){
			tempo1 = tempo - tempoc;
		}
		else{
			tempo1 = tempoc - tempo;
		}
		
	if(melhor = 0){
		melhor = tempo1;
	}else if(melhor>tempo1){
		melhor = tempo1;
	}
	return melhor;
}










