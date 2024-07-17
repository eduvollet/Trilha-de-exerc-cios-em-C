#include <stdio.h>
#include <stdlib.h>

int main (){
	int *P, A, MIN, MAX, i, j, *G;
	
	
	do{
		printf("Escreva um numero min >= 1 e numero max maior que min\n");
		printf("Escreva o numero min: ");
		scanf("%d", &MIN);
		printf("Escreva o numero max: ");
		scanf("%d", &MAX);		
	}while(MIN < 1 || MIN > MAX);
	
	printf("Escreva o numero que quer dividir o vetor ");
	scanf("%d", &A);
	
	P = (int *)malloc(4 * MAX);
	
	for(i = MIN; i <= MAX; i++){
		if(i == MIN){
			P[i] = MIN;
		}
		else{
			P[i] = P[i - 1] + 1;
		}
	}
	
	G = (int *)malloc(4 * (MAX - MIN));
	
	for(j = MIN; j <= MAX; j++){
		if(P[j] % A == 0){
			G[j] = P[j];
			printf("Esse numeros %d eh divisivel por %d\n", G[j], A);
		}
	}
	free(P);
	free(G);
}
