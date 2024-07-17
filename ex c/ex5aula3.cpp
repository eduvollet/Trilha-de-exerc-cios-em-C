#include <iostream>

int main(){
	double num1, num2, num3;
	std::cout << "Digite tres numeros" << std::endl;
	std:: cout << "Numero 1: ";
	std::cin >> num1;
	std:: cout << "Numero 2: ";
	std:: cin >> num2;
	std:: cout << "Numero 3: ";
	std::cin >> num3;
	if(num1 + num2 >= num3 || num1 + num3 >= num2 || num2 + num3 >= num1){
		std::cout << "Os valores podem ser um triangul." << std::endl;
		if(num1 == num2 && num2 == num3){
			std::cout << "E equilatero";
		}
		else{
			if(num1 == num2 || num1 == num3 || num2 == num3){
				std::cout << "E isosceles";
			}
			else{
				std::cout << "E escaleno";	
			}
		}
	}
	else{
		std::cout << "nao e triangulo";
	}
}
