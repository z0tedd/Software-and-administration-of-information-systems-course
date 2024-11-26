
#include <iostream>
#include <vector>
using namespace std;
typedef unsigned long long lg;
bool* Eratsphen(lg &n,int &k){
    //lg n;
    //cin>> n;
    n++;
    k=0;
    bool* a = new bool[n];
    for(int i = 0; i<n;i++){
        a[i] = 1;
    }
    a[0]=0;a[1]=0;
    //vector<bool>a(n,true);
    for (lg p = 2; p<n;p++){
        if (a[p] !=0){
            k++;
            //cout << p << endl;
            //j=p*p <<<<===== OVERFLOW
            if (p*p>0){
            for (lg j = p*p;j<n;j+=p){
                a[j]=0;
            } }
        }
    }
    /*
    for (int p =2;p<n;p++){
        if (a[])
    }*/
    
    return a;
}

int main(){
    lg n;
    int k = 0;
    lg First;
    cin >> n >> First;
    bool* a = Eratsphen(n,k);
    bool fl = false,fl1 = true;
    for (lg i= First; i>2;i-=2){
        fl = false;
        for (int j = 2; j<=(First/2 + 1);j++){
            if ((a[j] && a[First - j])){
                fl = true;
                break;
            }
        }
        if (fl) cout << i << " "<< "Yes" << "\n";
        if (!fl) fl1 = false;
    }
    if (fl1) cout << "Да выполняется";
    else cout << "Нет, не выполняется";
    /*
    for(int i = 0; i<n;i++){
        cout << a[i] <<" " << i << "\n";
    } */
    //  Если взять одно число и другое число и поделить на два, то мы получим среднее число, 
    // а среднее число лежит всегда в промежутке между двух чисел, поэтому вычисления можно сократить в два раза
    
    return 0;
}