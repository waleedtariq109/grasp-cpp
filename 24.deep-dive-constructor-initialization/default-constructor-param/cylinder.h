#ifndef CYLINDER_HEADER
#define CYLINDER_HEADER

class Cylinder {
 public:
  Cylinder(double radius = 1.0, double height = 1.0);

  // Getters
  double getBaseRadius() const;
  double getBaseHeight() const;

  // Setters
  void setBaseRadius(double radius);
  void setBaseHeight(double height);

  // Helper
  double volume();

 private:
  double baseRadius{1};
  double baseHeight{2};
};

#endif