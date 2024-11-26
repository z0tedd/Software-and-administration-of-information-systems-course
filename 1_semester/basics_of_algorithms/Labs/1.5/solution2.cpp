#include <iostream>
using namespace std;
int main(){
	//Неэффективное решение
	int m[16];
	for(int i =0 ; i<16; i++){
		cin >> m[i];
	}
	int k =0, kmax = 0;
	int Moda = 0;
	for (int i=0; i<16;i++){
		k = 0;
		for (int j=0; j<16;j++){
			if (m[i] == m[j] && i!=j){
				k+=1;
			}
		}
		if (kmax<k){
			Moda = i;
		}

	}
	cout << m[Moda] << endl;

	return 0;
}
