#ifndef CYLINDER
#define CYLINDER

class Cylinder {
 public:
  Cylinder() = default;
  Cylinder(double radiusParam, double heightParam);
  double volume();

  // Setters
  void setBaseRadius(double radiusParam);
  void setHeight(double height);

  // Getters
  double getBaseRadius();
  double getHeight();

 private:
  double baseRadius{1};
  double height{1};
};

#endif