#include <string>

#ifndef SQUARE_H
#define SQUARE_H

class Square {
 public:
  explicit Square(double side);
  Square(double side, std::string color, int shading);

  ~Square();

  double surface() const;

 private:
  int shading;
  double side;
  double position;
  std::string color;
};

#endif