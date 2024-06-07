#include <bits/stdc++.h>
#include <climits>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;
typedef long long lg;
typedef vector<int> iv;
typedef vector<lg> lv;
#define range(i, n) for (lg i = 0; i < n; i++)
#define rpt(i, a, b) for (lg i = a; i < b; i++)
#define all(v) begin(v), end(v)

void solve();
int main() {
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
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> a(n);
  range(i, n) {
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a.rbegin(), a.rend());
  queue<int> q;
  set<int> ind;
  range(i, n) { q.push(a[i].second); }
  for (int i = 0; i < n; ++i) {
    ind.insert(i);
  }
  string ans(n, '0');
  int who = 0;
  while (!ind.empty()) {
    while (!ind.count(q.front())) {
      q.pop();
    }
    int pos = q.front();
    q.pop();
    iv add;
    auto it = ind.find(pos);
    range(i, k + 1) {
      add.push_back(*it);
      if (it == ind.begin())
        break;
      it--;
    }
    it = next(ind.find(pos));
    range(i, k) {
      if (it == ind.end())
        break;
      add.push_back(*it);
      it++;
    }
    for (auto it : add) {
      ind.erase(it);
      ans[it] = '1' + who;
    }
    if (who == 1)
      who = 0;
    else
      who = 1;
  }
  cout << ans << '\n';
}
