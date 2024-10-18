#include <iostream>
#include <stdexcept>
class vector {
private:
  int *mas;
  int n;
  int lowerBound;
  int upperBound;

public:
  vector(int n) : n(n), lowerBound(0), upperBound(n - 1) {
    this->mas = new int[n];
  }
  vector(int lowerBound, int upperBound)
      : n(upperBound - lowerBound - 1), lowerBound(lowerBound),
        upperBound(upperBound) {
    this->mas = new int[n];
  }
  int GetValue(int i) {
    return i >= lowerBound && i <= upperBound
               ? mas[i - lowerBound]
               : throw std::invalid_argument("index isn't in range of bounds!");
  }
  int GetLowerBound() { return this->lowerBound; }
  int GetUpperBound() { return this->upperBound; }

  void SetValue(int i, int j) {
    i >= lowerBound &&i <= upperBound
        ? this->mas[i - lowerBound] = j
        : throw std::invalid_argument("index isn't in range of bounds!");
  }
  void minusVector(vector &other) {
    if (other.GetLowerBound() == lowerBound &&
        other.GetUpperBound() == upperBound) {
      for (int i = lowerBound; i <= upperBound; i++) {
        mas[i - lowerBound] -= other.GetValue(i);
      }
    } else {
      throw std::invalid_argument("bounds aren't equal!");
    }
  }
  void addVector(vector &other) {
    if (other.GetLowerBound() == lowerBound &&
        other.GetUpperBound() == upperBound) {
      for (int i = lowerBound; i <= upperBound; i++) {
        this->mas[i - lowerBound] += other.GetValue(i);

        std::cout << '\n'
                  << mas[i - lowerBound] << " " << other.GetValue(i) << '\n';
      }

    } else {
      throw std::invalid_argument("bounds aren't equal!");
    }
  }
  bool isEqual(vector &other) {
    if (other.GetLowerBound() == lowerBound &&
        other.GetUpperBound() == upperBound) {
      for (int i = lowerBound; i <= upperBound; i++) {
        if (mas[i - lowerBound] != other.GetValue(i)) {
          return false;
        }
      }
    } else {
      throw std::invalid_argument("bounds aren't equal!");
      return false;
    }
    return true;
  }
  // Вывод вектора для удобства
  void print() {
    for (int i = lowerBound; i <= upperBound; ++i) {
      std::cout << mas[i - lowerBound] << " ";
    }
    std::cout << std::endl;
  }
};
int main() {
  vector test(10);
  for (int i = 0; i < 10; i++) {
    test.SetValue(i, i);
  }

  test.print();
  vector test2(10);
  for (int i = 0; i < 10; i++) {
    test2.SetValue(i, i);
  }

  vector test3(10);
  for (int i = 0; i < 10; i++) {
    test3.SetValue(i, 10 - i - 1);
  }

  std::cout << test.isEqual(test2) << '\n';
  test2.addVector(test);
  test2.print();
  vector test4(-5, 5);
  for (int i = -5; i < 6; i++) {
    test4.SetValue(i, i);
  }
  test4.print();
}
