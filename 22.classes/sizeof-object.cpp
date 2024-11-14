#include <iostream>

class Wrapper {
 public:
  void doingSomething() {
    std::cout << "Doing something..." << std::endl;
  }

  void printInfo() {
    std::cout << "var1: " << this->var1 << std::endl;
    std::cout << "var2: " << this->var2 << std::endl;
    std::cout << "name: " << this->name << std::endl;
  }

 private:
  int var1 = 0;
  int var2 = 0;
  std::string name = "your_name";
};

int main() {
  Wrapper wrapper;
  std::cout << "sizeof(wrapper): " << sizeof(wrapper) << std::endl;
  wrapper.printInfo();
}
