#include <vector>
#include <iostream>
using namespace std;
int main(){

	int n = 16, k = 1, kmax =0;
	int MaxLen = 0, IndMax = 0;
	int m[n];
	//vector<int> m(n);
	for (int i =0; i<n; i++){
			cin >> m[i];
	}
	for (int i = 0; i<n-1; i++){
			if (m[i]<m[i+1]){
				k+=1;

			}
			else{
				if (k>kmax){
					kmax = k;
					IndMax = i+1;
				}
				k = 1;
			}
	}

	//cout << kmax << " "<< IndMax << " " << IndMax - kmax << endl;
	for (int i = IndMax - kmax; i< IndMax; i++){
		m[i] = 0;
	}

	for (int i = 0; i<n; i++){
			cout << m[i] << endl;
	}

	/*
	for (vector<int>::iterator i = m.begin(); i != m.end(); ++i)
			cout << *i << endl;
	*/


	return 0;
}


