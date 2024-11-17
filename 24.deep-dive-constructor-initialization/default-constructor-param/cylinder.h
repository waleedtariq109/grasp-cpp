#ifndef CYLINDER_HEADER
#define CYLINDER_HEADER

class Cylinder {
 public:
  Cylinder() = default;
  Cylinder(double radius, double height);

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