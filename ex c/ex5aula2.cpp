#include <stdio.h>

double r, pi, area, volume; 

int main(){
	pi = 3.1415; 
	printf("Qual o raio? ");
	scanf("%lf", &r);
	area = pi * (r * 2);
	printf("Essa e a area do circulo: %.3f", area);
	volume = (4/3) * pi * (r * r * r);
	printf("\nEsse e o volume do circulo: %.3f", volume);	
}
