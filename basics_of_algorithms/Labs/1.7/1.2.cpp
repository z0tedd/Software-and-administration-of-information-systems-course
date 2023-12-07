#include <iostream>
using namespace std;
void drawMatrixPos(int ** mas, int n){
for (int i =0;i<n;i++){
		for (int j = 0; j<n;j++){
			cout <<i<<","<<j<<" "; // mas[i][j] << " ";
		}
		cout << "\n";
	}
}
void drawMatrix(int ** mas, int n){
for (int i =0;i<n;i++){
		for (int j = 0; j<n;j++){
			cout << mas[i][j] << " ";
		}
		cout << "\n";
	}
}

int main(){
	int n;
	cin >> n;
	int** mas = new int*[n];
	for (int i =0;i<n;i++){
		mas[i] = new int[n];
		for (int j = 0; j<n;j++){
			mas[i][j] = 0;
		}
	}
	drawMatrix(mas, n);
	cout << "\n";
	drawMatrixPos(mas , n);
 int 	g=1;
	/*for (int h = -4;h<=n;h++){
			for (int i = 0;i < n;i++){
				for (int j = 0; j< n ; j ++){
					if(n-h+i==j) mas[i][j] = g++;
				}
			}
	}*/
// drawMatrix(mas,n);

	///*
 //nemoi cod
 	g = 1;
 	int start = 0;
	//for (int h =-3;h<4;h++){
	for (int h=-n;h<=n;h++){
		if (h>=0) start++;
		for (int i = start; i<n+h+1;i++){
			mas[i][n-i+h] = g++;
			cout << i <<" "<< n-i +h << "\n";
		}
	}
//*/
/*
bool up_flag = false;
for (int k = 1, i = 0, j = 0; k <= n; k++)
{
	if (j == 0 && !up_flag)
	{
		up_flag = true;
		mas[i][j] = k;
		i++;

	}
	else if (i == 0 && up_flag)
	{
		up_flag = false;
		mas[i][j] = k;
		j++;
	}
	else if (up_flag)
	{
		mas[i][j] = k;
		i--; j--;
	}
	else
	{
		mas[i][j] = k;
		i++; j++;
	}
}
*/
	//}
	drawMatrix(mas, n);





	return 0;
}
