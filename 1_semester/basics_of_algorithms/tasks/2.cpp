#include <iostream>
using namespace std;
int k;
int main(){
	cin >> k;
	//int num =(k%2 == 0)?:k/2;(k+1)/2;
	int num;
	if ((k%2) == 0){
	num = k/2;
	}
	else{
	num = (k+1)/2;
	}
	int res = num + 9;
	cout << res;



	return 0;
}
