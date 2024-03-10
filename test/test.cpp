#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <fstream>
using namespace std;
void quicksort(int* l, int* r);
long double Test(int test_number);


void merge(int* l, int* m, int* r, int* temp) {
	int *cl = l, *cr = m, cur = 0;
	while (cl < m && cr < r) {
		if (*cl < *cr) temp[cur++] = *cl, cl++;
		else temp[cur++] = *cr, cr++;
	}
	while (cl < m) temp[cur++] = *cl, cl++;
	while (cr < r) temp[cur++] = *cr, cr++;
	cur = 0;
	for (int* i = l; i < r; i++)
		 *i = temp[cur++];
}
void _mergesort(int* l, int* r, int* temp) {
	if (r - l <= 1) return;
	int *m = l + (r - l) / 2;
	_mergesort(l, m, temp);
	_mergesort(m, r, temp);
	merge(l, m, r, temp);
}
void mergesort(int* l, int* r) {
	int* temp = new int[r - l];
	_mergesort(l, r, temp);
	delete temp;
}

int main(int argc, char* argv[])
{
    srand(time(0));
    int N = 10;
    int Size = 9;
    long double clc = 0;
    if (ofstream fout("mergesorttest.csv"); fout.is_open())
    {
        
        for (int i=0;i<N;i++){
          for (int j = 0;j<Size;j++){
            clc = Test(pow(10,j+1));
            cout <<  clc << '\t';  
            
            fout <<clc  << '\t';  
          }
          cout << '\n';
          fout <<'\n';
        }
        fout.close();
    
    }
   else cout << "QWERT.csv не открыт\n"; 

   // cout << Test(10);// << "\t"<< Test(100) ;
  return 0;
}

long double Test(int test_number){
  srand(time(0));
  int* array = new int[test_number];
  for (int counter = 0; counter < test_number; counter++)
  {
     array[counter] = rand() - rand(); // заполняем массив случайными значениями в диапазоне от -49 до 49 включительно
     //cout << array1[counter] << " "; // печать элементов одномерного массива array1
  }

  unsigned long long start_time =  clock();
  mergesort(array, array + test_number);
  //quicksort(array, array+test_number);
  unsigned int end_time = clock(); // конечное время 

  unsigned int search_time = end_time - start_time; // искомое время    
 // cout << "runtime = " << search_time/1000.0 << endl; // время работы программы                             ////
  delete[] array;
  return search_time/1000.0;
}





void quicksort(int* l, int* r) {
	if (r - l <= 1) return;
	int z = *(l + (r - l) / 2);
	int* ll = l, *rr = r - 1;
	while (ll <= rr) {
		while (*ll < z) ll++;
		while (*rr > z) rr--;
		if (ll <= rr) {
			swap(*ll, *rr);
			ll++;
			rr--;
		}
	}
	if (l < rr) quicksort(l, rr + 1);
	if (ll < r) quicksort(ll, r);
}
