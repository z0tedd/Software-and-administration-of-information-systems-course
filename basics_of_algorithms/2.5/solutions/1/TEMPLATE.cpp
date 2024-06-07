#include <bits/stdc++.h>
using namespace std;
typedef long long lg;
typedef vector<int> iv;
typedef vector<lg> lv;
#define range(n) for(lg i = 0;i<n;i++)
#define rpt(i,a,b) for(lg i = a;i<b;i++)
#define all(v) begin(v),end(v)

void solve();
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin.exceptions(cin.failbit); //Throws an exception, if you have an input error. Variable overflow will summon RTE, not WA;
  //int t; cin >> t; while(t--)
  solve();
  return 0;
}
void solve(){
  int n,q;
  cin >> n >> q;
  vector<int> a(n);
  long long sum = 0;
  for (auto &it : a){ cin >> it;sum+=it;}
  int lastChange = 0;
  int sizeOfChange = 0;
  short int type;
  int pos,num;
  while (q--){
    cin >> type;
    switch (type) {
      case 1:
        cin >> pos >> num;
        sum+=num-a[pos-1];
        cout << sum<<'\n';
        break;
      case 2:
        cin >> num;
        sum = num*n;
        for (auto &it: a) it = num;
        cout << sum << '\n';
        break;
    }
  }
}

//cout.tie(0); Для магических компиляторов.
//String transformation to lower case, using cctype.
//transform(a.begin(), a.end(), a.begin(),
//    [](unsigned char c){ return std::tolower(c); });
//
//
//
//
