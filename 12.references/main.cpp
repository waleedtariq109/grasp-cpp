#include <iostream>

int main() {
  /**
   * Comparing Pointers and Reference
   *
   * Reference:
   * 1: We don't need to use the dereferencing for read and write
   * 2: Once reference is established to a variable it cannot be changed later.
   * 3: Reference must be initialized at declaration
   *
   * Pointers:
   * 1: We need to use dereference operator in order to read and write the value.
   * 2: Pointer can changed to somewhere else.
   * 3: Pointer can be declared uninitialized (contain garbage value)
   */

  // Declaring Reference and Pointer

  double doubleVal{12.34};
  double& refToDoubleVal{doubleVal};   // Reference to doubleVal
  double* ptrToDoubleVal{&doubleVal};  // Pointer to doubleVal

  // Reading
  std::cout << std::endl;
  std::cout << "doubleVal: " << doubleVal << std::endl;
  std::cout << "refToDoubleVal: " << refToDoubleVal << std::endl;
  std::cout << "ptrToDoubleVal: " << ptrToDoubleVal << std::endl;
  std::cout << "*ptrToDoubleVal: " << *ptrToDoubleVal << std::endl;
  std::cout << std::endl;

  // Writing through pointer
  *ptrToDoubleVal = 15.44;

  std::cout << std::endl;
  std::cout << "doubleVal: " << doubleVal << std::endl;
  std::cout << "refToDoubleVal: " << refToDoubleVal << std::endl;
  std::cout << "ptrToDoubleVal: " << ptrToDoubleVal << std::endl;
  std::cout << "*ptrToDoubleVal: " << *ptrToDoubleVal << std::endl;
  std::cout << std::endl;

  // Writing through reference
  refToDoubleVal = 18.44;

  std::cout << std::endl;
  std::cout << "doubleVal: " << doubleVal << std::endl;
  std::cout << "refToDoubleVal: " << refToDoubleVal << std::endl;
  std::cout << "ptrToDoubleVal: " << ptrToDoubleVal << std::endl;
  std::cout << "*ptrToDoubleVal: " << *ptrToDoubleVal << std::endl;
  std::cout << std::endl;

  /**
   * Once the reference is established then it cannot changed
   * or reference to another variable
   */

  double otherDoubleVal{78.45};
  refToDoubleVal = otherDoubleVal;

  /**
   * In the above example in refToDouble variable the value of
   * otherDoubleVal is assigned no the reference of it.
   */

  std::cout << std::endl;
  std::cout << "doubleVal: " << doubleVal << std::endl;
  std::cout << "refToDoubleVal: " << refToDoubleVal << std::endl;
  std::cout << "ptrToDoubleVal: " << ptrToDoubleVal << std::endl;
  std::cout << "*ptrToDoubleVal: " << *ptrToDoubleVal << std::endl;
  std::cout << std::endl;

  otherDoubleVal = 8898.98;  // The value of refToDoubleVal will not change

  std::cout << std::endl;
  std::cout << "doubleVal: " << doubleVal << std::endl;
  std::cout << "refToDoubleVal: " << refToDoubleVal << std::endl;
  std::cout << "ptrToDoubleVal: " << ptrToDoubleVal << std::endl;
  std::cout << "*ptrToDoubleVal: " << *ptrToDoubleVal << std::endl;
  std::cout << std::endl;

  return 0;
}
