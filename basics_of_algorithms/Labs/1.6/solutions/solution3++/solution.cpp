#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> mas(n,0);
	int* buf = new int;
	int k = 0;
	for(int i=0,j = 0;i<n;i++){
			cin >> *buf;
			if (((*buf)/1000 + (*buf)/100%10)==((*buf)/10%10 + (*buf)%10)){
					continue;
			}
			else{
					mas[j]=*buf;
					j++;
			}
	}
	delete buf;
	for(int var: mas){if (var) cout << var << " ";}
return 0;
}
