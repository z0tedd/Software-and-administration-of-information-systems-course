#include <bits/stdc++.h>
using namespace std;
typedef long long lg;
typedef vector<int> iv;
typedef vector<lg> lv;
#define range(i,n) for(lg i = 0;i<n;i++)
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
  int lastSecondQuery = -2;
  lg lastSecondQueryValue = 1;
  iv LastFirstQuery(n,-1);
  iv LastFirstQueryValue = a;
  int type;
  int i;
  int num;
  range(t,q){
    cin >> type;
    if (type == 1){
      cin >> i >> num;
      i--;
      (lastSecondQuery > LastFirstQuery[i])?
        a[i] = lastSecondQueryValue:
        a[i] = LastFirstQueryValue[i];
      sum-=a[i];
      LastFirstQuery[i] = t;
      LastFirstQueryValue[i] = num;
      sum+=num;
    }
    if (type == 2){
      cin >> num;
      lastSecondQuery = t;
      lastSecondQueryValue = num;
      sum = n* lastSecondQueryValue;
    }
    cout << sum << '\n';
    
  }

}

//cout.tie(0); Для магических компиляторов.
//String transformation to lower case, using cctype.
//transform(a.begin(), a.end(), a.begin(),
//    [](unsigned char c){ return std::tolower(c); });
//
//
//

