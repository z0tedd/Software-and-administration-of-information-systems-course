#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	int n, x =0;
	cin >> n;
	string a;
	int buf;
	for (int i=0;i<n;i++){
		cin >> a;
		buf =count(a.begin(), a.end(), '+');
		if (buf == 2){
			x++;
		}
		else{
			x--;
		}
	}
	cout << x;


	return 0;
}
