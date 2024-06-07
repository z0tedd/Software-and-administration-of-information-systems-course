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
  solve();
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n + 2), pre(n + 1), suf(n + 1), m;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  m.emplace_back(0);
  for (int i = 1; i <= n + 1; i++) {
    while (a[i] < a[m.back()]) {
      suf[m.back()] = i;
      m.pop_back();
    }
    m.emplace_back(i);
  }
  m.clear(), m.emplace_back(n + 1);
  for (int i = n; i >= 0; i--) {
    while (a[i] < a[m.back()]) {
      pre[m.back()] = i;
      m.pop_back();
    }
    m.emplace_back(i);
  }
  vector<int> f(n + 2), g(n + 2);
  for (int i = 1; i <= n; i++) {
    int j = pre[i];
    f[i] = f[j] + (i - j) * a[i];
  }

  for (int i = n; i >= 1; i--) {
    int j = suf[i];
    g[i] = g[j] + (j - i) * a[i];
  }
  int pos = -1, res = -1;
  for (int i = 1; i <= n; i++) {
    if (f[i] + g[i] - a[i] > res) {
      pos = i;
      res = f[i] + g[i] - a[i];
    }
  }

  vector<int> ans(n + 1);
  for (int i = pos, j = pre[pos]; i >= 1; i = j, j = pre[j]) {
    for (int k = j + 1; k <= i; k++)
      ans[k] = a[i];
  }

  for (int i = pos, j = suf[pos]; i <= n; i = j, j = suf[j]) {
    for (int k = i; k < j; k++) {
      ans[k] = a[i];
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << ans[i] << " ";
  }
  cout << '\n';
}
