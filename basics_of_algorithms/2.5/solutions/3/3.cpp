#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
  string name, surname;
  int math, phys, comp_science;
};

bool cmp(Student a, Student b) {
  return a.math + a.phys + a.comp_science > b.math + b.phys + b.comp_science;
}

int main(void) {
  fstream s("tExT.txt", s.binary | s.out | s.in);
  if (!s.is_open()) {
    cout << "Failed to open\n";
    return 0;
  }

  int n;
  s >> n;
  if (n < 1)
    return 1;

  vector<Student> data(n);
  for (int i = 0; i < n; ++i) {
    s >> data[i].name >> data[i].surname;
    s >> data[i].math >> data[i].phys >> data[i].comp_science;
  }
  stable_sort(data.begin(), data.end(), cmp);
  s << '\n';
  for (auto d : data)
    s << d.name << " " << d.surname << endl;
  s.close();
  return 0;
}
