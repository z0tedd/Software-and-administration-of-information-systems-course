#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	int* mas = new int [n];
	int* buf = new int;
	int k = 0;
	for(int i=0;i<n;i++){
			cin >> *buf;
			if (((*buf)/1000 + (*buf)/100%10)==((*buf)/10%10 + (*buf)%10)){
					mas[i]=0;
			}
			else{
					k++;
					mas[i]=*buf;
			}
	}
	delete buf;
	int* mas1 = new int [k];
	for (int i=0,j=0;i<k;i++){
		while (mas[j]==0){
			j++;
		}
		mas1[i]=mas[j];
		j++;
		//cout << mas1[i]<<" ";
	}
	delete[]  mas;
	mas = mas1;
	//delete *(&mas1);

	for (int i=0;i<k;i++){
		cout << mas[i]<< " ";
	}
	delete [] mas;
	/*
	for (int i=0;i<k;i++){
		cout << mas[i]<< " ";
	}
	*/




return 0;
}
