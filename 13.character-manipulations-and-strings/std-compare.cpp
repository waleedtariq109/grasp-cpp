#include <iostream>
#include <string>

static int compareString() {

  // Compare (1)
  std::string str1{ "Hello" };
  std::string str2{ "World" };

  std::cout << "str1 : " << str1 << std::endl;
  std::cout << "str2 : " << str2 << std::endl;
  std::cout << "str1.compare(str2) : " << str1.compare(str2) << std::endl; // negative
  std::cout << "str2.compare(str1) : " << str2.compare(str1) << std::endl; // positive

  // Compare (2)
  std::string str3{ "Hello World" };
  std::cout << "Comparing 'World' to 'Hello' : " << str3.compare(6, 5, str1) << std::endl; // positive

  // Compare (3)
  std::string str5{ "Hello" };
  const char* message{ "World" };
  std::cout << "Comparing Hello to World : " << str5.compare(message) << std::endl; // negative
  std::cout << "Comparing Hello to World : " << str5.compare("World") << std::endl; // negative

  return 0;
}
