#include <iostream>
#include <algorithm>
#include "QuickSort.h"
using namespace std;
int main(){
		int n;
		float k;
		cin>>n;
		cin >> k;
		vector<float> mas(n,0);
		for (int i=0;i<n;i++){
				cin>> mas[i];
		}
		int first = 0,last=n ;
		//cout << last;
		//cout << "tuuu";

		last = super_partition(0,n,mas,k);

			/*
			*/
		sort(mas.begin(), mas.begin()+last);
		for (int i=0;i<n;i++){
				cout << mas[i]<<" ";
		}
		//*/
}
