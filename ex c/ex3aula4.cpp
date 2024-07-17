#include <iostream>

int main(){
	int X;
	do{
		std::cin >> X;
		if(X > 0){
			std::cout << "Positivo" << std::endl;	
		}
		
		if(X < 0){
			std::cout << "Negativo" << std::endl;
		}
		
	}while(X != 0);
}
