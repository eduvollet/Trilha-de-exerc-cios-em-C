#include <iostream>

int main (){
	int V[15] = {17, 4, 53, 38, 22, 40, 25, 16, 31, 64, 45, 32, 20, 12, 29}, A;
	while (A > 0){
		std::cin >> A;
		for(int i = 0; i < 15; i++){
			if(V[i] == A){
				std::cout << "Esta dentro na posição: V[" << i << "]" <<  std::endl;
			}
		}
	}
}
