#include <iostream>
#include "DangerousMatrix.h"
using namespace std;
using namespace DM;
long long sol(long long n, long long s = 0);
int main() {
    int n;
    cin >> n;
    cout << sol(n);
 
}

long long sol(long long n, long long s){
   if (n-s>=0)return sol(n-s,s+1);
   return s-1;
}
