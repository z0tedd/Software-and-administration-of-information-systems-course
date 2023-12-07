#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int** mas = new int* [n];
	for (int i=0;i<n;i++){
		mas[i] = new int[n];
	}
	int g =1;
	int k = 0;
	for (int h=-n;h<=n;h++){
		for (int i = 0; i<n;i++){
			for (int j = 0; j<n;j++){
					if (n-i+h==j){
						mas[i][j] += g++;
						if (k%2!=0)
							swap(mas[i][j],mas[j][i]);
						k++;
					}

			}//mas[i][j] += g;
			//g+=1;
		}
	}
	for (int i=0;i<n;i++){

        for (int j=0;j<n;j++){

            cout << mas[i][j] << " ";
        }
        cout << "\n";
  }
	return 0;
}
