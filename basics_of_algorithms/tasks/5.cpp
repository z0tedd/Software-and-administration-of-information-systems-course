#include <iostream>
#include <vector>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> Hp(101,0);
	vector<int> Hm(101,0);
	int buf;
	vector<int> mas;
	/*
	for (int var: mas){
		cout << var<<" ";
	}
*/
	for (int i=0;i<n;i++){
		cin >> buf;
		if (buf>=0){
			Hp[buf]+=1;
		}
		if (buf<=0){
			Hm[buf*(-1)]+=1;
		}
	}
	for (int i=100;i>0;i--){
		if (Hm[i]>0){
			for (int j=0;j<Hm[i];j++){
				mas.push_back(i*(-1));
			}
		}
	}

	for (int i = 0; i<=100;i++){
		if (Hp[i]>0){
			for (int j=0;j<Hp[i];j++){
				mas.push_back(i);
			}
		}
	}
	for (int var: mas){
		cout << var<<" ";
	}
	return 0;
}
