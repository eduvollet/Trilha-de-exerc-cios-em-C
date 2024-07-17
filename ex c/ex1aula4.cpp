#include <iostream>

int main(){
	int N, R, P, PG, Aux, soma;
	std::cout << "Quais são os primeiros termos da PG? ";
	std::cin >> N;
	std::cout << "Qual a tazão da PG? ";
	std::cin >> R;
	std::cout << "Primeiro termo ";
	std::cin >> P;
	Aux = P;
	std::cout << P << std::endl;
	for(int i = 1; i < N; i++){
		PG = P * R;
		P = PG;
		soma = P + soma;
		std::cout << PG << std::endl;
	}
	std::cout << "Soma " << soma + Aux << std::endl;
}
