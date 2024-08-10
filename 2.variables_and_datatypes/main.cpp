#include <iostream>

int main() {
  // Auto

  // Auto keyword let the compiler to deduce the type

  auto var1 {87};
  auto var2 {1.29};
  auto var3 {1.38f};
  auto var4 {7332l};
  auto var5 {3748927729ll};

  std::cout << var1 << std::endl;
  std::cout << typeid(var1).name() << std::endl;
  std::cout << var2 << std::endl;
  std::cout << typeid(var2).name() << std::endl;
  std::cout << var3 << std::endl;
  std::cout << typeid(var3).name() << std::endl;
  std::cout << var4 << std::endl;
  std::cout << typeid(var4).name() << std::endl;
  std::cout << var5 << std::endl;
  std::cout << typeid(var5).name() << std::endl;

  return 0;
}