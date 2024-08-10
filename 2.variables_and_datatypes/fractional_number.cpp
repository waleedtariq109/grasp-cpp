#include <iostream>
#include <iomanip>

int main() {
  // Fractional Number

  float number1 {12.87f};
  double number2 {1332.3773264};
  long double number3 {8876.65656l};

  double inf1 {0.0};
  double inf2 {0.0};

  std::cout << std::setprecision(15);
  std::cout << number1 << std::endl;
  std::cout << number2 << std::endl;
  std::cout << number3 << std::endl;

  return 0;
}
