#include <cstdio>
#include <cwchar>
#include <iostream>
#include <locale>
#include <utility>
class angle {
private:
  int degrees;
  float minutes;
  wchar_t direction; // char(215);

public:
  // Constructor
  angle(int d = 0, float m = 0, wchar_t dir = L'\U0001f34c')
      : degrees(d), minutes(m), direction(dir) {}
  // Setters
  void degreesSetter(int degrees) { this->degrees = std::move(degrees); }
  void minutesSetter(float minutes) { this->minutes = std::move(minutes); }
  void directionSetter(wchar_t direction) {
    this->direction = std::move(direction);
  }
  void allSetter(int degrees, float minutes, wchar_t direction) {
    degreesSetter(degrees);
    minutesSetter(minutes);
    directionSetter(direction);
  }

  // Output
  void printAngle() {
    std::wcout << "Degrees: " << degrees << ", minutes: " << minutes
               << ", direction: " << direction << "." << std::endl;
  }
  void printPirateAngle() {

    std::wprintf(L"%d\u00b0%.1f\' %lc\n", degrees, minutes,
                 direction); // like, bussiest, much more bigger than, more,
                             // most interesting, than, as, that, most, have
    //
  }
};

int main() {
  std::setlocale(LC_ALL, "en_US.utf8");
  angle Test(179, 59.9, 'E');
  Test.printPirateAngle();
  Test.printAngle();
  Test.allSetter(149, 34.8, 'W');
  Test.printPirateAngle();
  while (true) {
    std::wcout << "Write data\n";
    int degrees;
    float minutes;
    char direction;
    std::cin >> degrees >> minutes >> (direction);
    Test.allSetter(degrees, minutes, static_cast<wchar_t>(direction));
    Test.printPirateAngle();
    std::wcout << "Continue?\n";
    std::string yes;
    std::cin >> yes;
    if (yes != "yes")
      break;
  }
  return 0;
}
