#include <iostream>

int main(){
	int peso;
	std::cout << "Escreva o peso do lutador: ";
	std::cin >> peso;
	if(peso < 65){
		std::cout <<"Este lutador pesa " << peso << " e peso pena";		
	}
	else{
		if(peso >= 65 and peso < 72){
			std::cout <<"Este lutador pesa " << peso << " e peso leve";
		}
		else{
			if(peso >= 72 and peso < 79){
				std::cout <<"Este lutador pesa " << peso << " e peso ligeiro";
			}
			else{
				if(peso >= 79 and peso < 86){
					std::cout <<"Este lutador pesa " << peso << " e peso meio medio";
				}
				else{
					if(peso >= 86 and peso < 93){
						std::cout <<"Este lutador pesa " << peso << " e peso medio";
					}
					else{
						if(peso >= 93 and peso < 100){
							std::cout <<"Este lutador pesa " << peso << " e peso meio pesado";	
						}
						else{
							if(peso >= 100){
								std::cout <<"Este lutador pesa " << peso << " e peso pesado";
							}
						}
					}
				}
			}
		}
	}	
}
