#include <iostream>
using namespace std;
int supermod(unsigned long long x){
  return x - (x/10)*10;

}
int sol1(int x ,int y);
int sol2(int x ,int y);
int sol3(long long x, long long y);
int sol4(long long x,long long y){
  if (y-x<20 || x%10<3||x%10>8||y%10<3||y%10>8 ){
    return sol3(x,y);
  } 
  int n = (y-x)/10;
  long long right = y/10;
  long long left = x/10+1;
  long long s = 0;
    s+=(right-left)*5*(right-left>0);

  for (int d = x%10;d<=10;d++){
    s+=d*d;
  }
  for (int d = y%10;d<10;d++){
    s+=d*d;
  }
  return s%10;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long x,y;
    //cin >> x >> y;
    for (int i = 228;i<300;i++)
    for (int j = 300;j<375;j++)
    cout << (sol3(i,j)==sol4(i,j))<< " "<< i << " "<< j<<" "<<sol3(i,j)<<" "<<sol4(i, j)<<'\n';


    /*
    unsigned long long start_time1 =  clock();
    sol1(1000,20000);
    unsigned int end_time1 = clock(); 
    cout << end_time1-start_time1<<"\n";

 unsigned long long start_time =  clock();
    sol2(1000000,2000000000);
    unsigned int end_time = clock(); 
    cout << end_time-start_time<<"\n";
  */
  return 0;
}
int sol3(long long x, long long y){
  long long s = 0;
  int k = 0;
  for (long long i = x; i<=y;i++){
    if (s>100000000) s = supermod(s);
    if (i>=1000000000){
      k = supermod(i);
      s+= k*k;
    }
    else{
     s+= i*i;
    }
  }
  return s%10;
}
int sol1(int x ,int y){
  long long s = 0;
  for (int i=x;i<=y;i++){
    s+= i*i;
  }
  return s%10;
}

int sol2(int x ,int y){
  long long s = 0;
  long long k =0;
  for (int i=x;i<=y;i++){
    s%=10;
    k = i%10;
    s+= k*k;
  }
  return s%10;
}
