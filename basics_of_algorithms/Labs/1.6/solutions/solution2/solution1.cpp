#include <iostream>
#include "QuickSort.h"
using namespace std;
int main(){
		int* mas = new int [10];
		for (int i=0;i<10;i++){
				mas[i]=i;
		}
		not_quick_sort(mas,0,9);
}
