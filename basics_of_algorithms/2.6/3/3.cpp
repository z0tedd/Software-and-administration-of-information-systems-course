#include <deque>
#include <iostream>
using namespace std;
int main() {
  int n, k, d;
  deque<int> s;
  cin >> n;
  while (n--) {
    cin >> k;
    if (k < 3) {
      cin >> d;
      if (k == 1)
        s.push_front(d);
      else
        s.push_back(d);
    } else {
      if (k == 3) {
        d = s.front();
        s.pop_front();
      } else {
        d = s.back();
        s.pop_back();
      }
      cout << d << ' ';
    }
  }
  return 0;
}
