#include <iostream>

int main(){
	int a;
	std::cin >>a;
	for (int i=0; i<a;i++){
		for (int j=0; j< (i*2+1); j++){
			std::cout<< " * ";
		}
		std::cout<<std::endl;
	}
}

