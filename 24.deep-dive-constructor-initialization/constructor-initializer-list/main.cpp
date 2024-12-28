#include <iostream>

struct Point {
  Point(std::initializer_list<double> list) {
    auto it = list.begin();
    x = *it++;
    y = *it;
    std::cout << "y: " << y << std::endl;
    std::cout << "x: " << x << std::endl;
  }
  double x;
  double y;
};

int main() {
  Point p1{33.4, 55.6};
}
