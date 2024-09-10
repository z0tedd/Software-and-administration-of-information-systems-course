#include <iostream>
#include <algorithm>
#include "DangerousMatrix.h"
typedef long double LD;
using namespace std;
using namespace DM;
//using Matrix = vector<vector<long double>>;
template <typename T>
bool Is_Decreasing(vector<T>& mas,int Rows);
//возрастание - каждый элемент больше предыдущего
//убывание - каждый элемент меньше предыдущего
int main(){
  int Rows,Columns;
  cin >> Rows >> Columns;
  //Rows = 2; Columns = 2;
  Matrix mas(vector<vector<LD>>(Rows, vector<LD>(Columns,0)));
  mas.drawMatrix();
  cin >> mas;
  for (int i = 0;i<Rows;i++){
    if (!Is_Decreasing(mas[i],Columns)){
      sort(mas[i].begin(),mas[i].end());
    }
  }

  cout << mas;

}
template <typename T>
bool Is_Decreasing(vector<T>&  mas, int n){
  const long double e = 0.00000001;
  for (int i=1;i<n;i++){
    if (!(mas[i-1]-mas[i]>e)){
        return false;
    }
  }
  return true;
}
