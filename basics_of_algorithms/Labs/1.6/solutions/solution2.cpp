#include <iostream>
#include "QuickSort.h"
using namespace std;
int main(){
	int mas[] = {10,9,8,7,6,5,4,3,2,1};
	quick_sort(mas, 0, 9);
	for(int i=0;i<10; i++){
		cout << mas[i];
	}



	return 0;
}
