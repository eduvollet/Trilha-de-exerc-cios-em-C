#include <stdio.h>

float receber, valor_hora_trabalhada,horas_trabalhadas,horas_extras;


int main(){
	printf("Quantas horas foram trabalhadas?");
	scanf("%f", &horas_trabalhadas);
	printf("Quanto recebe por hora?");
	scanf("%f", &valor_hora_trabalhada);
	printf("Quantas horas extras foram trabalhadas");
	scanf("%f", &horas_extras);
	receber = horas_trabalhadas * valor_hora_trabalhada + (valor_hora_trabalhada * 2 * horas_extras);
	printf("Deve receber: R$ %.2f", receber);
}
