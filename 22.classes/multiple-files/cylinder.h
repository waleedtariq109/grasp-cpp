#ifndef CYLINDER_H
#define CYLINDER_H

#include "constant.h"

class Cylinder {
 public:
  Cylinder() = default;
  Cylinder(double radiusParam, double heightParam);
  double getBaseRadius();
  double getHeight();
  void setBaseRadius(double radiusParam);
  void setHeight(double heightParam);
  double volume();

 private:
  double baseRadius{1};
  double height{1};
};

#endif
