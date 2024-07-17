#include <iostream>

int main(){
	int N, somapos, somane;
	somapos = 0;
	somane = 0;
	do{
		std::cin >> N;
		if(N > 0){
			somapos = N + somapos;
		}
		
		if(N < 0){
			somane = N + somane;
		}
		
	}while(N != 0);
	std::cout << "Soma positivo " << somapos << std::endl;
	std::cout << "Soma negativa " << somane << std::endl;
}
