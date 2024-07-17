#include <stdio.h>
#include<stdlib.h>

int main(){
    int min, max;
    
    printf("Eduardo Vollet de Souza\n");
	printf("Giancarlo Gilioli\n");
	printf("Questao 3\n");
	
    do{
    	printf("\nEscolha o numero minimo maior que 1: ");
    	scanf("%d", &min);
    }while (min <= 1);

    do{
    	printf("Escolha o numero maximo maior que o minimo: ");
    	scanf("%d", &max);
    }while(max <= min);

    int *vetor, cont = 0, aux = 0, soma = 0, cont2 = 0;
    
    vetor = (int *)malloc(sizeof(int) * max);

    for(int i = min; i <= max; i++){
        aux = 0;
        for(int t = 2; t < i; t++){
            if(i % t == 0){
                aux++;
                t = i;
            }
            if(t == i - 1){ 
            	vetor[cont] = i;
				cont++;	
			}
        }
    }
	
	for(int x = 0; x < cont; x++){ 
		soma = vetor[x] + soma;
		cont2++;
	}

    if(min == 2){
    	printf("2 e primo\n");
        for(int z = 0; z < cont; z++){
        	printf("%d e primo\n", vetor[z]);
        }
        printf("A soma e: %d\n", soma + 2);
        printf("A quantidade de numeros primos e: %d\n", cont2 + 1);
    }
    else{
        for(int z = 0; z < cont; z++){
        	printf("%d e primo\n", vetor[z]);
        }
        printf("A soma e: %d\n", soma);
        printf("A quantidade de numeros primos e: %d\n", cont2);
    }
    if(soma == 0){
    	printf("Nao tem numeros primos no intervalo");
	}
	printf("Intervalo: [%d, %d]\n", min, max);
	return 0;
}
