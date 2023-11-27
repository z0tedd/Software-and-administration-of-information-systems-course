#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int superbuf = 0;
	float *m = new float[n];
	for (int i=0; i<n; i++){
		cin >> m[i];
		//m[i] = superbuf;
	}
	int buf = 0;

	if (n < 3){
		cout << "Program error";
		return 0;
	}



	if (n%2==0){
		// Сдвиг вправо четных
		buf = m[n-2];
		for(int i = n-2; i>=2;){
			m[i] = m[i-2];
			i-=2;
		}
		m[0] = buf;
		/*
		for(int i=0;i<n;i++){
			cout << m[i] << " ";
		}
		cout << "\n";
		*/
		// Сдвиг влево нечетных
		buf = m[1];
		for(int i = 1; i<=n-3;){
			m[i] = m[i+2];
			i+=2;
		}
		m[n-1] = buf;
	}
	else{
		if (n!=3){
		// Сдвиг вправо четных
		buf = m[n-1];
		for(int i = n-1; i>=2;i-=2){
			m[i] = m[i-2];
		}
		m[0] = buf;
		}
		// Сдвиг влево нечетных
		buf = m[1];
		for(int i = 1; i<=n-4; i+=2){
			m[i] = m[i+2];
		}
		m[n-2] = buf;
	}
	for (int i=0; i<n; i++)
		cout << m[i] << " ";


	delete [] m;
	return 0;
}
