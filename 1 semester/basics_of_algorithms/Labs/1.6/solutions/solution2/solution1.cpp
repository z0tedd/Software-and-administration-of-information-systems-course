#include <iostream>
#include "QuickSort.h"
using namespace std;
int main(){
		int n;
		float k;
		cin>>n;
		cin >> k;
		float* mas = new float [n];
		for (int i=0;i<n;i++){
				cin>> mas[i];
		}
		int first = 0,last=n ;
		//cout << last;
		//cout << "tuuu";

		last = super_partition(0,n,mas,k);

			/*
			*/
		not_quick_sort(mas,first,last,n);
		for (int i=0;i<n;i++){
				cout << mas[i]<<" ";
		}
		//*
		delete [] mas;
}
