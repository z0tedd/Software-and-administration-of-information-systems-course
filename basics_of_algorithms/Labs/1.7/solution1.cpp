#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
//Проверка простоты числа
bool is_prime(int x){
	if (x<1) return false;
	for (int i=2;i<=int(sqrt(x));i++){
			if (x%i==0){
				return false;
			}
	}
	return true;
}
// Сумма цифр числа
int sum_of_numbers(int x){
	int s=0;
	while (x!=0){
			s+=x%10;
			x/=10;
	}
	return s;
}

int Going_througth_square(vector<vector<int>> mas,int n,int k){
	int s=0;
	int final2 = 0;
	int step2 = n/2;
	for (int i = 0;i<n;i++){
			for (int x =0;x<=final2;x++){
					if (is_prime(mas[i][step2 + x]) and (sum_of_numbers(mas[i][step2+x ])%k)){
						s+=mas[i][step2 + x];
					}
			}
			final2++;

	}

return s;
}


int main(){
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	const int n = 13;
	vector<vector<int>> mas(n,vector<int>(16,0));
	cout << "Введите по строчкам массив 13*13"<<"\n";
	for (int i=0;i<n;i++){
		for (int j = 0; j<n;j++){
				cin >> mas[i][j];
		}
	}
	/*
	int test = 1;
	while (test){
		cin >> test;
		cout << sum_of_numbers(test)<< " ";
		cout << is_prime(test) << "\n";
	}

  cout << sum_of_numbers(444);
	cout << sum_of_numbers(1000);
*/

	return 0;
}
