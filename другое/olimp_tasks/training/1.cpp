
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    long long int x;
    cin >> x;
    cout << x << " ";
    int i = 0;
    while(x != 1){
        if (x%2==0) x/=2;
        else x = 3*x + 1;
        cout <<x << " ";
       
    }
    return 0;
}
