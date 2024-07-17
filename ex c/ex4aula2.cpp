#include <stdio.h>

int a, b, resultado;

int main(){
	printf("Primeiro numero: ");
	scanf("%d", &a);
	printf("Segundo numero: ");
	scanf("%d", &b);
	resultado = (3 * a + 2 * b) / (a + b);
	printf("resultado = %d", resultado);	
}
