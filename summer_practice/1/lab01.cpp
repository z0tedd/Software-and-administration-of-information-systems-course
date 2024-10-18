#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  size_t number_count;
  cerr << "Enter number count: ";
  cin >> number_count;
  vector<double> numbers(number_count);
  for_each(numbers.begin(), numbers.end(), [](auto &x) { cin >> x; });
  size_t bin_count;
  cerr << "Enter bin count: ";
  cin >> bin_count;
  vector<size_t> bins(bin_count);
  auto it = minmax_element(numbers.begin(), numbers.end());
  double Min = *(it.first), Max = *(it.second);

  double bin_size = (Max - Min) / bin_count;
  for (size_t i = 0; i < number_count; i++) {
    bool found = false;
    for (size_t j = 0; !found && (j < bin_count - 1); j++) {
      auto low_bound = Min + j * bin_size;
      auto upp_bound = Min + (j + 1) * bin_size;
      if ((low_bound <= numbers[i]) && (numbers[i] < upp_bound)) {
        bins[j]++;
        found = true;
      }
    }
    if (!found) {
      bins[bin_count - 1]++;
    }
  }
  auto max_count = *max_element(bins.begin(), bins.end());
  bool isScalable = false;
  if (max_count > 76) {
    isScalable = true;
  }
  const size_t SCREEN_WIDTH = 80;
  const size_t MAX_ASTERISK = SCREEN_WIDTH - 3 - 1;
  for (auto count : bins) {
    if (count <= 99)
      cout << ' ';
    if (count <= 9)
      cout << ' ';
    cout << count << "|";
    size_t height = count;
    if (isScalable) {
      height = MAX_ASTERISK * (static_cast<double>(count) / max_count);
      if (count == max_count) {
        height = 76;
      }
    }
    cerr << height;
    for (int i = 0; i < height; i++) {
      cout << '*';
    }
    cout << '\n';
  }
  return 0;
}
