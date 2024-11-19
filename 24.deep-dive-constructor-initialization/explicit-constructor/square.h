#ifndef SQUARE_H
#define SQUARE_H

class Square {
 public:
  explicit Square(double side);
  ~Square();

  double Surface() const;

 private:
  double side;
};

#endif