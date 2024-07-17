#include <stdio.h>

int main(){
	int N;
	
	printf("Eduardo Vollet de Souza\n");
	printf("Giancarlo Gilioli\n");
	printf("Questao 2\n");
	
	printf("\nEscolha o tamanho da base: ");
	scanf("%d", &N);
	while(N < 5 || N > 49 || N % 2 == 0){
		printf("O numero e invalido. Escreva novamente: ");
		scanf("%d", &N);
	}
	
	for(int i = 0; i <= N ; i++){
		for(int g = (N - i)/2; g >= 1; g--){
			printf(" ");
		}
		for(int h = 0; h < i; h++){
			if(i % 2 != 0){
				printf("*");
			}
		}
		if(i % 2 == 0){
			printf("\n");
		}
	}
	
	for(int j = 0; j <= 1; j++){
		for(int v = (N - j)/ 2; v >= 1; v--){
			printf(" ");
		}
		for(int f = 0; f < j; f++){
			printf("|");
		}
		if(j != 1){
			printf("\n");
		}
	}
	
	for(int m = 0; m <= 1; m++){
		for(int b = (N - m - 1)/ 2; b >= 1; b--){
			printf(" ");
		}
		for(int y = 0; y < m; y++){
			printf("---");
		}
		printf("\n");
	}
	return 0;
}
