#include <iostream>

int main(){
	int X, maior, menor, cont, media, soma;
	maior = 0;
	menor = 1000000000000000000000000000000000000000000000000000000000000;
	do{
		std::cin >> X;
		if(X > maior){
			maior = X;	
		}
		
		if(X < menor){
			menor = X;
		}
		
		cont++;
		
		soma = X + soma;
		
	}while(X > 0);
	
	media = soma / cont;
	
	std::cout << "Maior n�mero " << maior << std::endl;
	std::cout << "Menor n�mero " << menor << std::endl;
	std::cout << "Quantidade de n�meros " << cont << std::endl;
	std::cout << "M�dia " << media << std::endl;
	
}
