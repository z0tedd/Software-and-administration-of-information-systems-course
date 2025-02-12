#ifndef HISTOGRAM_H_INCLUDED
#define HISTOGRAM_H_INCLUDED
#include <algorithm>
#include <cstddef>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

template <typename T> pair<T, T> get_minmax(const vector<T> &numbers);
//
// {
//   auto it = minmax_element(numbers.begin(), numbers.end());
//   return make_pair(*(it.first), *(it.second));
// }

void svg_begin(double width, double height);
void svg_end();
void svg_text(double left, double baseline, string text);
void svg_rect(double x, double y, double width, double height,
              string stroke = "black", string fill = "black");
void show_histogram_svg(const vector<size_t> &bins);

size_t get_avg_bin(const vector<double> &bins);

void show_variant_histogram_svg(const vector<size_t> &bins);
#endif
