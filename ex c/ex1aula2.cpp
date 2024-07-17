#include <stdio.h>

float base, altura, area;

int main (){
	printf("Qual a altura do seu triangulo? ");
	scanf("%f", &altura);
	printf("Qual a base do seu triangulo? ");
	scanf("%f", &base);
	area = (base * altura)/2;
	printf("Valor da area = %f", area);
}
