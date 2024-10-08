#include <iostream>

int main() {
  /**
   * In C++ the reference is an alias for another variable.
   * Once a reference is established to a variable, it cannot
   * be made to refer to another variable.
   *
   * References are particularly useful when passing arguments to
   * functions or returning values from functions without copying the data.
   *
   * A reference must be initialized to refer to an existing variable when
   * it is created. It cannot be left uninitialized.
   * After initialization, the reference acts as a synonym for the original
   * variable. Any changes made to the reference affect the original variable.
   * A reference must always be bound to a valid object. It cannot be null or uninitialized.
   *
   */

  int intData{33};
  double doubleData{57};

  // Setting up a reference
  int& referenceToIntData{intData};
  double& referenceToDoubleData{doubleData};

  std::cout << "intData: " << intData << std::endl;
  std::cout << "&intData: " << &intData << std::endl;
  std::cout << "doubleData: " << doubleData << std::endl;
  std::cout << "&doubleData: " << &doubleData << std::endl;

  std::cout << std::endl;

  std::cout << "referenceToIntData: " << referenceToIntData << std::endl;
  std::cout << "&referenceToIntData: " << &referenceToIntData << std::endl;
  std::cout << "referenceToDoubleData: " << referenceToDoubleData << std::endl;
  std::cout << "&referenceToDoubleData: " << &referenceToDoubleData << std::endl;

  std::cout << std::endl;

  referenceToIntData = 55;
  referenceToDoubleData = 88.98;

  std::cout << "intData: " << intData << std::endl;
  std::cout << "&intData: " << &intData << std::endl;
  std::cout << "doubleData: " << doubleData << std::endl;
  std::cout << "&doubleData: " << &doubleData << std::endl;

  std::cout << std::endl;

  std::cout << "referenceToIntData: " << referenceToIntData << std::endl;
  std::cout << "&referenceToIntData: " << &referenceToIntData << std::endl;
  std::cout << "referenceToDoubleData: " << referenceToDoubleData << std::endl;
  std::cout << "&referenceToDoubleData: " << &referenceToDoubleData << std::endl;

  std::cout << std::endl;

  intData = 875;
  doubleData = 998.98;

  std::cout << "intData: " << intData << std::endl;
  std::cout << "&intData: " << &intData << std::endl;
  std::cout << "doubleData: " << doubleData << std::endl;
  std::cout << "&doubleData: " << &doubleData << std::endl;

  std::cout << std::endl;

  std::cout << "referenceToIntData: " << referenceToIntData << std::endl;
  std::cout << "&referenceToIntData: " << &referenceToIntData << std::endl;
  std::cout << "referenceToDoubleData: " << referenceToDoubleData << std::endl;
  std::cout << "&referenceToDoubleData: " << &referenceToDoubleData << std::endl;

  std::cout << std::endl;

  return 0;
}
