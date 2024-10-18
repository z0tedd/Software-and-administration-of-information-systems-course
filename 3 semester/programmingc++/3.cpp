#include <iostream>
#include <string>

class Money {
private:
  long double Dengi;

public:
  Money() : Dengi(0) {}
  Money(int d) : Dengi(d) {}
  void StringToMoney(std::string s) { Dengi = std::stod(s); }
  std::String long double GetValue() const { return Dengi; }
  friend Money operator+(const Money &mn1, const Money &mn2) {
    return Money(mn1.Dengi + mn2.Dengi);
  }

  friend Money operator-(const Money &mn1, const Money &mn2) {
    return Money(mn1.Dengi - mn2.Dengi);
  }
  Money operator+(const long double &mn) const { return Money(Dengi + (mn)); }
  Money operator-(const long double &mn) const { return Money(Dengi - (mn)); }
};
