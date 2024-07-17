#include <iostream>

int main(){
	int num1;
	std::cout << "Escreva um numero: ";
	std::cin >> num1;
	if(num1 < 0){
		std::cout << "Esse numero e negativo";
	}
	else{
		if(num1 == 0){
			std::cout << "Esse numero e 0";
		}
		else{
			if(num1 > 0){
				std::cout << "Esse numero e positivo";
			}
		}
	}
}
