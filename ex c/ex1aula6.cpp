#include <iostream>

int main (){
	int A[5] = {19, 23, 29, 31, 37};
	for(int i = 0; i < 5; i++){
		std::cout << A[i] << std::endl;
	}
	
	for(int i = 4; i >= 0; i--){
		std::cout << A[i] << std::endl;
	}
}
