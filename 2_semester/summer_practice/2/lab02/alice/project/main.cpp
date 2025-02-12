#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  cout << "Enter A and B: ";
  double a, b;
  cin >> a >> b;

  cout << "A + B = " << a + b << '\n'
       << "A - B = " << a - b << '\n'
       << "A * B = " << a * b << '\n'
       << "A / B = " << a / b << '\n'
       << "Max(A,B) = " << max(a, b) << '\n'
       << "Min(A,B) = " << min(a, b) << '\n';
  // comment
  return 0;
}
