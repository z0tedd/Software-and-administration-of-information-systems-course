#include "QuickSort.h"
#include <vector>
#include <iostream>
#include <random>
using namespace std;

int VeryRandomNumber(int i,int j)
{
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(i, j); // define the range
		return distr(gen);
}

void superswap(float& a, float& b){
		float c(a);a=b;b=c;
}

bool equal(float a,float b){
	return (abs(a-b)<0.00001);
}


int super_partition(int first, int last,float* mas,float k){
		int e=first,g=first,n=first;
		int buf =0;
		//cout <<k;
		while (n!=last){// && first!=last){
				//cout <<"____" <<n<<"____";
				if (equal(abs(mas[n]), k)){
						swap(mas[n],mas[g]);
						g++;
						n++;
						//cout << "1***"<<"\n";
						//continue;
				}
				else if (abs(mas[n]) > k ){
						//cout << "2***"<<"\n";
						n++;
						//continue;
				}
				else if (abs(mas[n])<k){
						//cout<<mas[n];
						buf = mas[n];
						mas[n]=mas[g];
						mas[g]=mas[e];
						mas[e] = buf;
						n++;
						e++;
						g++;
						//continue;
				}
				//break;
		}
		//cout <<"____" <<n<<"____"<<"\n";
		return e;
}

int partition(int first, int last,float* mas,float k){
		int e=first,g=first,n=first;
		int buf =0;
		//cout <<k;
		while (n!=last){// && first!=last){
				//cout <<"____" <<n<<"____";
				if (equal(mas[n], k)){
						swap(mas[n],mas[g]);
						g++;
						n++;
						//cout << "1***"<<"\n";
						//continue;
				}
				else if (mas[n] > k){
						//cout << "2***"<<"\n";
						n++;
						//continue;
				}
				else if (mas[n]<k){
						//cout<<mas[n];
						buf = mas[n];
						mas[n]=mas[g];
						mas[g]=mas[e];
						mas[e] = buf;
						n++;
						e++;
						g++;
						//continue;
				}
				//break;
		}
	//	cout <<"____" <<n<<"____"<<"\n";

		//cout <<"____" <<n<<"____";
		return e;
}




void not_quick_sort(float *mas,int first, int last, int n){
			int p;
			float k;
			k = mas[VeryRandomNumber(0,n-1)];
			p = partition(first,last,mas,k);
			if ((last != 0) && (first!=n)&&(first<last) && (p+1)<last){
			//cout << first<<"__"<< last << "bebra";
		/*
				for (int i = 0;i<n;i++){
				cout << mas[i] << " ";
			}
			cout << "__"<< first << "*"<<last<<"+"<<p;
			cout << "\n";*/
			not_quick_sort(mas,first,p,n);
			not_quick_sort(mas,p+1,last,n);
			}
			else{
				return;
			}
			/*
			x = a[random(0,n-1)]
			p = partition(l,r,x)

			quicksort(p+1,r)
*/
}
