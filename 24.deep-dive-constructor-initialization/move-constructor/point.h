#ifndef POINT_H
#define POINT_H

class Point {
 public:
  Point(double x, double y);
  Point(const Point& sourcePoint);
  ~Point();

  void setX(double x);
  void setY(double y);

  const double* getX() const;
  const double* getY() const;

  const void printInfo() const;

 private:
  double* x{nullptr};
  double* y{nullptr};

  void invalidate() {
    this->x = nullptr;
    this->y = nullptr;
  }
};

#endif