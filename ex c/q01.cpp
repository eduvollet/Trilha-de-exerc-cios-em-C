#include <stdio.h>
#include<stdlib.h>

int main (){
	
	printf("Eduardo Vollet de Souza\n");
	printf("Giancarlo Gilioli\n");
	printf("Questao 1\n");
	
	int codigo, linha, aux1, aux2, aux3, invalido, *codinvalido, resp, resp2;
	double *VetorLI, *VetorLF, *VetorLM, LI, LF, LM, somaLI = 0, somaLF = 0, somaLM = 0, total = 0, valor = 0, qtde = 0;
	resp = 0;
	resp2 = 0;
	aux1 = 0;
	aux2 = 0;
	aux3 = 0;
	invalido = 0;

	VetorLI = (double *)malloc(sizeof(double) * 1);
	VetorLF = (double *)malloc(sizeof(double) * 1);
	VetorLM = (double *)malloc(sizeof(double) * 1);
	codinvalido = (int *)malloc(sizeof(int) * 1);
	
	while(resp == 0){			
		do{
			printf("\nInsira o codigo do produto(LLLMMMM) ");
			scanf("%d", &codigo);
			if(codigo == 0){
				resp = 1;
				resp2 = 1;
      			for(int i = 0; i < aux1; i++){
      				somaLI = VetorLI[i] + somaLI;
      			}
      			for(int g = 0; g < aux2; g++){
      				somaLF = VetorLF[g] + somaLF;
      			}
      			for(int j = 0; j < aux3; j++){
      				somaLM = VetorLM[j] + somaLM;
      			}
        		printf("Total linha infantil %.2lf\n", somaLI);
      			printf("Total linha feminina %.2lf\n", somaLF);
      			printf("Total linha masculina %.2lf\n", somaLM);
      			total = somaLI + somaLF + somaLM;
      			printf("Total: RS %.2lf\n", total);
      	
      			for(int l = 0; l < invalido; l++){
      				if(codinvalido[0] == 0){
      					printf("Nao ha inconsistencias");
					}
					else{
						printf("codigos invalidos: %d\n", codinvalido[l]);
					}
				}
        	return 0;
			}
			
			if(codigo > 1000000 || codigo <= 9999999){
				resp2 = 1;
			}
			if(codigo <= 1000000 || codigo > 9999999){
				resp2 = 0;
				printf("Codigo invalido, insira novamente:\n");
				codinvalido[invalido] = codigo;
				invalido++;
			}
		}while(resp2 == 0);
		
		do{
			printf("Qual a quantidade de vendas do produto? (maior ou igual a 1) ");
			scanf("%lf", &qtde);
		}while(qtde < 1);
		
		do{
			printf("Qual o valor unitario do produto? (maior que 1 real) ");
			scanf("%lf", &valor);
		}while(valor < 1);
		
		linha = codigo / 10000;
		
		if(linha >= 100 && linha <= 399){
			LI = qtde * valor;
			VetorLI[aux1] = LI;
			aux1++;
			VetorLI = (double *)realloc(VetorLI,sizeof(double) * aux1);
			qtde = 0;
			valor = 0;
		}
		
		if(linha >= 400 && linha <= 799){
			LF = qtde * valor;
			VetorLF[aux2] = LF;
			aux2++;
			VetorLF = (double *)realloc(VetorLF,sizeof(double) * aux2);
			qtde = 0;
			valor = 0;
		}
		
		if(linha >= 800 && linha <= 999){
			LM = qtde * valor;
			VetorLM[aux3] = LM;
			aux3++;
			VetorLM = (double *)realloc(VetorLM,sizeof(double) * aux3);
			qtde = 0;
			valor = 0;
		}		
	}
}
