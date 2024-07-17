#include <iostream>
#include <cmath>

int main(){
	double a, b, c, delta, bask1, bask2;
	std::cout << "Escreva tres numeros" << std::endl;
	std::cout << "Numero A ";
	std::cin >> a;
	std::cout << "Numero B ";
	std::cin >> b;
	std::cout << "Numero C ";
	std::cin >> c;
	delta = (b * b)	- 4 * a * c;
	if (delta > 0){
		bask1 = (- b + sqrt(delta)) / (2 * a);
		bask2 = (- b - sqrt(delta)) / (2 * a);
		std::cout << "Primeira raiz: " << bask1 << std::endl;
		std::cout << "Segunda raiz: " << bask2;
	}
	else{
		if(delta == 0){
			bask1 = (- b + sqrt(delta)) / (2 * a);
			std::cout << "Unica raiz: " << bask1;	
		}
		else{
			if(delta < 0){
				std::cout << "Nao ha raizes reais";
			}
		}
	}
}
