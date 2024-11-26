#include <bits/stdc++.h>
using namespace std;
typedef long long lg;
typedef vector<int> iv;
typedef vector<lg> lv;
#define range(i, n) for (lg i = 0; i < n; i++)
#define rpt(i, a, b) for (lg i = a; i < b; i++)
#define all(v) begin(v), end(v)
#define int long long
void solve();
signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin.exceptions(
      cin.failbit); // Throws an exception, if you have an input error. Variable
                    // overflow will summon RTE, not WA;
  // int t; cin >> t; while(t--)
  solve();
  return 0;
}
void solve() {
  int x1, y1, x2, y2, x3, y3, r;
  scanf("%lld %lld %lld %lld %lld %lld %lld", &x1, &y1, &x2, &y2, &x3, &y3, &r);
  int sum = 0;
  int mx = max(x3 - r, x1);
  int mn = min(x3 + r, x2);
  for (int i = mx; i <= mn; i++) {
    int t = sqrt(r * r - (x3 - i) * (x3 - i));
    t = min(y2, y3 + t) - max(y1, y3 - t) + 1;
    if (t > 0)
      sum += t;
  }
  cout << sum << '\n';
}
