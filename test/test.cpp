#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <fstream>
#include <set>
using namespace std;
void treesort(int* l, int* r) {
	multiset<int> m;
	for (int *i = l; i < r; i++)
		m.insert(*i);
	for (int q : m)
		*l = q, l++;
}
void insertionsort(int* l, int* r) {
	for (int *i = l + 1; i < r; i++) {
		int* j = i;
		while (j > l && *(j - 1) > *j) {
			swap(*(j - 1), *j);
			j--;
		}
	}
}

void quicksort(int* l, int* r);
long double Test(int test_number);
template <class T>
class heap {
public:
	int size() {
		return n;
	}
	int top() {
		return h[0];
	}
	bool empty() {
		return n == 0;
	}
	void push(T a) {
		h.push_back(a);
		SiftUp(n);
		n++;
	}
	void pop() {
		n--;
		swap(h[n], h[0]);
		h.pop_back();
		SiftDown(0);
	}
	void clear() {
		h.clear();
		n = 0;
	}
	T operator [] (int a) {
		return h[a];
	}
private:
	vector<T> h;
	int n = 0;
	void SiftUp(int a) {
		while (a) {
			int p = (a - 1) / 2;
			if (h[p] > h[a]) swap(h[p], h[a]);
			else break;
			a--; a /= 2;
		}
	}
	void SiftDown(int a) {
		while (2 * a + 1 < n) {
			int l = 2 * a + 1, r = 2 * a + 2;
			if (r == n) {
				if (h[l] < h[a]) swap(h[l], h[a]);
				break;
			}
			else if (h[l] <= h[r]) {
				if (h[l] < h[a]) {
					swap(h[l], h[a]);
					a = l;
				}
				else break;
			}
			else if (h[r] < h[a]) {
				swap(h[r], h[a]);
				a = r;
			}
			else break;
		}
	}
};
void heapsort(int* l, int* r) {
	heap<int> h;
	for (int *i = l; i < r; i++) h.push(*i);
	for (int *i = l; i < r; i++) {
		*i = h.top();
		h.pop();
	}
}

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
    int Size =4;
    long double clc = 0;
    if (ofstream fout("inssorttest.csv"); fout.is_open())
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
  //mergesort(array, array + test_number);
  insertionsort(array, array + test_number);
  //treesort(array, array + test_number);
  //heapsort(array, array + test_number);
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
