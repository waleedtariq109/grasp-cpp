#include <iostream>

#include "cylinder.h"

int main() {
  // Stored in Stack
  Cylinder cylinder(8, 10);

  /*
    If our object stored in stack we can use dot notation to access it's
    members
  */

  std::cout << "Object Stored in stack" << std::endl;
  std::cout << std::endl;

  std::cout << "Volume: " << cylinder.volume() << std::endl;
  std::cout << "radius: " << cylinder.getBaseRadius() << std::endl;
  std::cout << "height: " << cylinder.getHeight() << std::endl;

  cylinder.setBaseRadius(3);
  cylinder.setHeight(4);

  std::cout << "Volume: " << cylinder.volume() << std::endl;
  std::cout << "radius: " << cylinder.getBaseRadius() << std::endl;
  std::cout << "height: " << cylinder.getHeight() << std::endl;

  std::cout << std::endl;

  // Stored in heap
  Cylinder* cylinder1 = new Cylinder(56, 65);

  /*
    If our object stored in heap then we need to dereference the object first then
    access it's members or we can also use arrow pointer notation
  */

  // Accessing member through dereferenceing
  std::cout << "Accessing member through dereferenceing" << std::endl;
  std::cout << std::endl;

  std::cout << "Volume: " << (*cylinder1).volume() << std::endl;
  std::cout << "radius: " << (*cylinder1).getBaseRadius() << std::endl;
  std::cout << "height: " << (*cylinder1).getHeight() << std::endl;

  (*cylinder1).setBaseRadius(3);
  (*cylinder1).setHeight(4);

  std::cout << "Volume: " << (*cylinder1).volume() << std::endl;
  std::cout << "radius: " << (*cylinder1).getBaseRadius() << std::endl;
  std::cout << "height: " << (*cylinder1).getHeight() << std::endl;
  std::cout << std::endl;

  // Accessing member through dereferenceing
  std::cout << "Accessing member through arrow pointer" << std::endl;
  std::cout << std::endl;

  std::cout << "Volume: " << cylinder1->volume() << std::endl;
  std::cout << "radius: " << cylinder1->getBaseRadius() << std::endl;
  std::cout << "height: " << cylinder1->getHeight() << std::endl;

  cylinder1->setBaseRadius(3);
  cylinder1->setHeight(4);

  std::cout << "Volume: " << cylinder1->volume() << std::endl;
  std::cout << "radius: " << cylinder1->getBaseRadius() << std::endl;
  std::cout << "height: " << cylinder1->getHeight() << std::endl;

  delete cylinder1;
}
