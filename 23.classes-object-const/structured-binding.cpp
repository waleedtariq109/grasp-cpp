#include <iostream>

struct Point {
  double x;
  double y;
};

int main() {
  Point point1{23.45, 45.67};

  std::cout << "x: " << point1.x << std::endl;
  std::cout << "y: " << point1.y << std::endl;

  auto [a, b] = point1;
  std::cout << std::endl;

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;

  point1.x = 98.99;
  point1.y = 88.76;

  std::cout << "point1 is changed" << std::endl;

  std::cout << "x: " << point1.x << std::endl;
  std::cout << "y: " << point1.y << std::endl;

  std::cout << std::endl;

  /**
   * When we change the value x or y then the changes won't
   * reflected to the a or b
   */

  std::cout << "a: " << a << std::endl;
  std::cout << "b: " << b << std::endl;

  auto f = [a]() {
    std::cout << "captured: " << a << std::endl;
  };

  f();
}
