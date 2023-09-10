#include <iostream>

using namespace std;

int main()
{
    signed long int T1;
    bool T2;
    long double T3;
    unsigned long T4;

    cin >> T1;
    T2 = T1;
    T3 = static_cast<long double>(T1);
    T4 = (unsigned long)T1;

    cout<<T1<<" "<<sizeof(T1)<<endl;
    cout<<T2<<" unsafe "<<sizeof(T2)<<endl;
    cout<<T3<<" safe "<<sizeof(T3)<<endl;
    cout<<T4<<" unsafe "<<sizeof(T4)<<endl;
}

