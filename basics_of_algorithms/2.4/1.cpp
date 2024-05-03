
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
struct Student {
    string name, surname;
    int math, phys, comp_science;
};
 
bool cmp (Student a, Student b) {
    return a.math + a.phys + a.comp_science > b.math + b.phys + b.comp_science;
}
 
int main (void) {
    int n;
    cin >> n;
    if (n < 1) return 1;
 
    vector <Student> data(n);
    for (int i = 0; i < n; ++i) {
        cin >> data[i].name >> data[i].surname;
        cin >> data[i].math >> data[i].phys >> data[i].comp_science;
    }
    stable_sort(data.begin(), data.end(), cmp);
 
    for (auto s : data)
        cout << s.name << " " << s.surname << endl;
    return 0;
}
/*
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
#define range(i,n) for(int i = 0;i<n;i++)
void solve();
int main(){


  solve();
  return 0;
}
void solve(){
    long long n;
    cin >> n;
    long long lq = 0;
    long long buf = 0;
    long double ffi;
    string name;
    string bebra;
    unordered_map<long long,string> map1;
    vector<long long> mas(n);
    range(i,n){
        cin >> name;
        cin >> bebra;
        name.append(1,' ');
        name.append(bebra);
        range(j,3){
            cin >> buf;
            lq += buf;
        }
        ffi = lq;
        lq = 0;
        mas[i] = ffi;
        map1[ffi] = name;
    }
    //cout << "\\\\\\";
    stable_sort(mas.begin(),mas.end(),greater_equal<long long>());
    
    for (auto c: mas) cout << map1[c]<<'\n';

}
*/
