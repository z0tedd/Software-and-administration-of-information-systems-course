#include <iostream>
#include <vector>
using namespace std;
vector<int> f(int x){
  vector<int> mas;
  for (int i =1; i<=x/2;i++){
    if (x%i==0)mas.push_back(i);
  }
  mas.push_back(x);
  return mas;
}
int main(){
  int n,m;
  cin >> n >> m;
  vector<int> mn, mm;
  mn = f(n);
  mm = f(m);
  for (auto i: mn) cout << i << ' '; cout << '\n';
  for (auto i: mm) cout << i << ' '; cout << '\n';

  int s1=0,s2=0;
  for (int i =0;i<mn.size();i+=3){
    s1+=mn[i];
  }
  for (int i =0;i<mm.size();i+=3){
    s2+=mm[i];
  }
  cout << max(s1,s2);


  

  return 0;
}
