#include <iostream>

int main(){
	int VETOR[10], cont;
	cont = 0;
	for(int i = 0; i < 10; i++){
		std::cin >> VETOR[i];
		if(VETOR[i] > 0){
			std::cout << VETOR[i] << std::endl;
		}
		else{
			i = i + 10;
		}
	}
}
