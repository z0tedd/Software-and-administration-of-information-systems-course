#include "histogram.h"
#include <algorithm>
#include <cstddef>
#include <numeric>
#include <utility>
void svg_begin(double width, double height) {
  cout << "<?xml version='1.0' encoding='UTF-8'?>\n";
  cout << "<svg ";
  cout << "width='" << width << "' ";
  cout << "height='" << height << "' ";
  cout << "viewBox='0 0 " << width << " " << height << "' ";
  cout << "xmlns='http://www.w3.org/2000/svg'>\n";
}

void svg_end() { cout << "</svg>\n"; }

void svg_text(double left, double baseline, string text) {
  cout << "<text x='" << left << "' y='" << baseline << "'>" << text
       << "</text>";
}
void svg_rect(double x, double y, double width, double height, string stroke,
              string fill) {
  cout << "<rect x='" << x << "' y ='" << y << "' width ='" << width
       << "' height='" << height << "' stroke ='" << stroke << "' fill ='"
       << fill << "'></rect>";
}
size_t get_avg_bin(const vector<double> &bins) {
  return size_t(std::accumulate(bins.begin(), bins.end(), 0) /
                static_cast<double>(bins.size()));
}
void show_variant_histogram_svg(const vector<size_t> &bins) {
  const auto IMAGE_WIDTH = 400;
  const auto IMAGE_HEIGHT = 300;
  const auto TEXT_LEFT = 20;
  const auto TEXT_BASELINE = 20;
  const auto TEXT_WIDTH = 60; // Раньше было 50
  const auto BIN_HEIGHT = 30;
  const auto BLOCK_WIDTH = 10;
  svg_begin(IMAGE_WIDTH, IMAGE_HEIGHT);
  double top = 0;

  auto [min_count, max_count] = get_minmax(bins);
  bool isScalable = false;
  if (max_count * BLOCK_WIDTH > IMAGE_WIDTH) {
    isScalable = true;
  }
  const size_t SCREEN_WIDTH = IMAGE_WIDTH;
  const size_t MAX_ASTERISK = SCREEN_WIDTH - TEXT_WIDTH;

  // for (size_t bin : bins) {
  //   const double bin_width = BLOCK_WIDTH * bin;
  //   svg_text(TEXT_LEFT, top + TEXT_BASELINE, to_string(bin));
  //   svg_rect(TEXT_WIDTH, top, bin_width, BIN_HEIGHT);
  //   top += BIN_HEIGHT;
  // }
  vector<double> heights(bins.size());
  for (auto i = 0; i < bins.size(); i++) {
    auto bin = bins[i];
    double height = bin * BLOCK_WIDTH;
    if (isScalable) {
      height = MAX_ASTERISK * (static_cast<double>(bin) / max_count);
      if (bin == max_count) {
        height = MAX_ASTERISK;
      }
    }
    heights[i] = height;
  }
  size_t avg_bin = get_avg_bin(heights);
  for (auto i = 0; i < bins.size(); i++) {
    auto bin = bins[i];
    auto height = heights[i];
    cerr << '\n' << height;
    // double bin_width = BLOCK_WIDTH * height; // раньше был конст, но я это
    // убрал
    //  В теории это вообще быть не должно, просто меня бесит не форматированный
    //  текст
    auto TEXT_ALIGN = 0;
    if (bin <= 99)
      TEXT_ALIGN += BLOCK_WIDTH;
    if (bin <= 9)
      TEXT_ALIGN += BLOCK_WIDTH;

    svg_text(TEXT_LEFT + TEXT_ALIGN, top + TEXT_BASELINE, to_string(bin));

    if (height > avg_bin)
      svg_rect(TEXT_WIDTH, top, height, BIN_HEIGHT, "red", "red");

    else {

      svg_rect(TEXT_WIDTH, top, height, BIN_HEIGHT, "green", "green");
    }
    top += BIN_HEIGHT;
  }
  // svg_rect(TEXT_WIDTH, 0, bins[0] * BLOCK_WIDTH, BIN_HEIGHT);
  // svg_text(TEXT_LEFT, TEXT_BASELINE, to_string(bins[0]));
  svg_end();
}

void show_histogram_svg(const vector<size_t> &bins) {
  const auto IMAGE_WIDTH = 400;
  const auto IMAGE_HEIGHT = 300;
  const auto TEXT_LEFT = 20;
  const auto TEXT_BASELINE = 20;
  const auto TEXT_WIDTH = 60; // Раньше было 50
  const auto BIN_HEIGHT = 30;
  const auto BLOCK_WIDTH = 10;
  svg_begin(IMAGE_WIDTH, IMAGE_HEIGHT);
  double top = 0;

  auto [min_count, max_count] = get_minmax(bins);
  bool isScalable = false;
  if (max_count * BLOCK_WIDTH > IMAGE_WIDTH) {
    isScalable = true;
  }
  const size_t SCREEN_WIDTH = IMAGE_WIDTH;
  const size_t MAX_ASTERISK = SCREEN_WIDTH - TEXT_WIDTH;

  // for (size_t bin : bins) {
  //   const double bin_width = BLOCK_WIDTH * bin;
  //   svg_text(TEXT_LEFT, top + TEXT_BASELINE, to_string(bin));
  //   svg_rect(TEXT_WIDTH, top, bin_width, BIN_HEIGHT);
  //   top += BIN_HEIGHT;
  // }
  for (size_t bin : bins) {

    double height = bin * BLOCK_WIDTH;
    if (isScalable) {
      height = MAX_ASTERISK * (static_cast<double>(bin) / max_count);
      if (bin == max_count) {
        height = MAX_ASTERISK;
      }
    }
    cerr << '\n' << height;
    // double bin_width = BLOCK_WIDTH * height; // раньше был конст, но я это
    // убрал
    //  В теории это вообще быть не должно, просто меня бесит не форматированный
    //  текст
    auto TEXT_ALIGN = 0;
    if (bin <= 99)
      TEXT_ALIGN += BLOCK_WIDTH;
    if (bin <= 9)
      TEXT_ALIGN += BLOCK_WIDTH;

    svg_text(TEXT_LEFT + TEXT_ALIGN, top + TEXT_BASELINE, to_string(bin));
    svg_rect(TEXT_WIDTH, top, height, BIN_HEIGHT);
    top += BIN_HEIGHT;
  }
  // svg_rect(TEXT_WIDTH, 0, bins[0] * BLOCK_WIDTH, BIN_HEIGHT);
  // svg_text(TEXT_LEFT, TEXT_BASELINE, to_string(bins[0]));
  svg_end();
}

template <typename T> pair<T, T> get_minmax(const vector<T> &numbers) {
  auto it = minmax_element(numbers.begin(), numbers.end());
  if (!numbers.size())
    return make_pair(0, 0);
  return make_pair(*(it.first), *(it.second));
}
// проблема линковки
// https://stackoverflow.com/questions/4933056/how-do-i-explicitly-instantiate-a-template-function
// https://stackoverflow.com/questions/8752837/undefined-reference-to-template-class-constructor
namespace std {
template class std::pair<size_t, size_t>;
template class std::vector<size_t>;
template class std::pair<double, double>;
template class std::vector<double>;
} // namespace std
template pair<double, double> get_minmax(const vector<double> &numbers);
template pair<size_t, size_t> get_minmax(const vector<size_t> &numbers);
