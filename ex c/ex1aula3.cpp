#include <iostream>

int main(){
	int num1;
	std::cout << "Escreva um numero: ";
	std::cin >> num1;
	if(num1 % 2 == 1){
		std::cout << "O numero e impar";
	}
	else{
		std::cout << "O numero e par";	
	}
}
