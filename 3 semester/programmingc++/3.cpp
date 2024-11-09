#include <cassert>
#include <iostream>
#include <list>
#include <numeric>
#include <string>
#include <vector>

class Money {
private:
  long double MoneyValue;

public:
  Money() : MoneyValue(0) {}
  Money(long double d) : MoneyValue(d) {}
  std::string MoneyToString() { return std::to_string(MoneyValue); }
  void StringToMoney(std::string s) { MoneyValue = std::stod(s); }
  long double GetValue() const { return MoneyValue; }
  long long RoundValue() const { return int(MoneyValue); }
  friend Money operator+(const Money &mn1, const Money &mn2) {
    return Money(mn1.MoneyValue + mn2.MoneyValue);
  }

  friend Money operator-(const Money &mn1, const Money &mn2) {
    return Money(mn1.MoneyValue - mn2.MoneyValue);
  }
  friend Money operator/(const Money &mn1, const Money &mn2) {
    return Money(mn1.MoneyValue / mn2.MoneyValue);
  }

  friend Money operator*(const Money &mn1, const Money &mn2) {
    return Money(mn1.MoneyValue * mn2.MoneyValue);
  }

  friend bool operator==(const Money &mn1, const Money &mn2) {
    return (mn1.MoneyValue == mn2.MoneyValue);
  }
  Money operator*(const long double &mn) const {
    return Money(MoneyValue * (mn));
  }
  Money operator/(const long double &mn) const {
    return Money(MoneyValue / (mn));
  }
  Money operator+(const long double &mn) const {
    return Money(MoneyValue + (mn));
  }
  Money operator-(const long double &mn) const {
    return Money(MoneyValue - (mn));
  }
};

struct Data {
  int day;
  int month;
  int year;

  Data(int d = 0, int m = 0, int y = 0) : day(d), month(m), year(y) {}
  bool operator==(const Data &other) const {
    return day == other.day && month == other.month && year == other.year;
  }
};

struct MoneyAndData {
  Money mn;
  Data dt;
};

class Product {
private:
  std::list<MoneyAndData> Dynamic;

public:
  Product() { Dynamic = std::list<MoneyAndData>(); };
  void AddMoneyAndData(MoneyAndData &md) { Dynamic.push_back(md); }
  Money SearchMoneyByData(Data d) {
    for (auto var : Dynamic) {
      if (var.dt == d) {
        return var.mn;
      }
    }
    return Money();
  }
  Data SearchDataByMaxMoney(Money m) {
    long double mxValue = -1.1;
    Data mxData = Data();
    for (auto var : Dynamic) {
      if (var.mn.GetValue() > mxValue) {
        mxData = var.dt;
        mxValue = var.mn.GetValue();
      }
    }
    return mxData;
  }
  Data SearchDataByMinMoney(Money m) {
    long double mxValue = 10000000000000000.0;
    Data mxData = Data();
    for (auto var : Dynamic) {
      if (var.mn.GetValue() < mxValue) {
        mxData = var.dt;
        mxValue = var.mn.GetValue();
      }
    }
    return mxData;
  }
  std::vector<Data> SearchDataByMoney(Money m) {
    std::vector<Data> ans;
    for (auto var : Dynamic) {
      if (var.mn == m) {
        ans.push_back(var.dt);
      }
    }
    return ans;
  }
};

class Test : Product {

public:
  static void TestMoneyClass() {
    // Test default constructor
    Money m1;
    assert(m1.GetValue() == 0);

    // Test parameterized constructor
    Money m2(50);
    assert(m2.GetValue() == 50);

    // Test MoneyToString and StringToMoney
    m2.StringToMoney("123.45");
    assert(m2.GetValue() == 123.45);
    assert(m2.MoneyToString() == "123.450000");

    // Test arithmetic operators
    Money m3 = m1 + m2;
    assert(m3.GetValue() == 123.45);

    Money m4 = m2 - Money(23.45);
    assert(m4.RoundValue() == 100);

    Money m5 = m2 * Money(2);
    assert(m5.GetValue() == 246.9);

    Money m6 = m2 / Money(2);
    assert(m6.GetValue() == 61.725);

    // Test equality operator
    Money m7(100);
    Money m8(100);
    assert(m7 == m8);

    // Test long double operations
    Money m9 = m7 * 2.5;
    assert(m9.GetValue() == 250);

    Money m10 = m7 / 2.5;
    assert(m10.GetValue() == 40);

    Money m11 = m7 + 50;
    assert(m11.GetValue() == 150);

    Money m12 = m7 - 50;
    assert(m12.GetValue() == 50);

    std::cout << "All Money class tests passed!\n";
  }

  static void TestDataClass() {
    // Test constructors
    Data d1;
    assert(d1.day == 0 && d1.month == 0 && d1.year == 0);

    Data d2(1, 1, 2023);
    assert(d2.day == 1 && d2.month == 1 && d2.year == 2023);

    // Test equality operator
    Data d3(1, 1, 2023);
    assert(d2 == d3);

    std::cout << "All Data class tests passed!\n";
  }

  static void TestProductClass() {
    Product product;

    // Test AddMoneyAndData and SearchMoneyByData
    MoneyAndData md1 = {Money(100), Data(1, 1, 2023)};
    MoneyAndData md2 = {Money(200), Data(2, 2, 2023)};
    MoneyAndData md3 = {Money(50), Data(3, 3, 2023)};
    product.AddMoneyAndData(md1);
    product.AddMoneyAndData(md2);
    product.AddMoneyAndData(md3);

    Money result = product.SearchMoneyByData(Data(1, 1, 2023));
    assert(result.GetValue() == 100);

    // Test SearchDataByMaxMoney
    Data maxData = product.SearchDataByMaxMoney(Money());
    assert(maxData.day == 2 && maxData.month == 2 && maxData.year == 2023);

    // Test SearchDataByMinMoney
    Data minData = product.SearchDataByMinMoney(Money());
    assert(minData.day == 3 && minData.month == 3 && minData.year == 2023);

    // Test SearchDataByMoney
    std::vector<Data> dataWithSpecificMoney =
        product.SearchDataByMoney(Money(200));
    assert(dataWithSpecificMoney.size() == 1);
    assert(dataWithSpecificMoney[0].day == 2 &&
           dataWithSpecificMoney[0].month == 2 &&
           dataWithSpecificMoney[0].year == 2023);

    MoneyAndData md4 = {Money(0), Data(29, 10, 2024)};
    product.AddMoneyAndData(md4);
    Data result2 = product.SearchDataByMinMoney(0);
    assert(result2 == Data(29, 10, 2024));
    std::cout << "All Product class tests passed!\n";
  }
};

int main() {
  Test test;
  test.TestMoneyClass();
  test.TestDataClass();
  test.TestProductClass();

  std::cout << "All tests passed successfully!\n";
  return 0;
}
