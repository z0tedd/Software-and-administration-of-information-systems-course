#include <bits/stdc++.h>
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
  int n = 5;
  vector<int> a(n, 0);
  set<int> b;
  for (auto &c : a) {
    cin >> c;
    b.insert(c);
  }
  vector<int> c = a;
  sort(all(c));
  unordered_map<int, int> mp;
  range(i, n) {
    if (mp[c[i]])
      mp[c[i]]++;
    else
      mp[c[i]] = 1;
  }
  if (b.size() == 1) {
    cout << "Impossible" << '\n';
    return;
  }
  if (b.size() == 2 && mp[c[0]] != 3 && mp[c[0]] != 2) {
    cout << "Four of a Kind\n";
    return;
  }
  if (b.size() == 2 && mp[c[0]] != 4 && mp[c[0]] != 1) {
    cout << "Full House\n";
    return;
  }
  bool fl = true;
  for (int i = 0; i < c.size(); i++) {
    if (!i)
      continue;
    if (c[i] != c[i - 1] + 1) {
      fl = 0;
      break;
    }
  }
  if (fl) {
    cout << "Straight\n";
    return;
  }
  set<int> gh;
  int k1 = 0;
  for (auto [key, value] : mp) {
    if (value == 3) {
      cout << "Three of a Kind\n";
      return;
    }
    if (value == 2)
      k1++;
    gh.insert(value);
  }

  if (k1 == 2) {
    cout << "Two Pairs\n";
    return;
  }
  if (b.size() == 4) {
    cout << "One Pair\n";
    return;
  }
  cout << "Nothing";
}
