#include <iostream>
#include <string>

int main() {
  std::string emptyString;                         // Empty string
  std::string fullname{"Waleed Tariq"};            // Initialize with string literal
  std::string planet{"Earth, where sky is blue"};  // Initialize with string literal
  std::string prefferedPlanet{planet};             // Initialize with other existing string literal
  std::string message{"Hello There", 5};           // Initialize with part of string literal, contain Hello
  std::string wierdMessage(4, 'e');                // Initialize with multiple copies of char
  std::string greeting{"Hello World"};             // Initialize with string literal
  std::string sayHello{greeting, 6, 5};            // Initialize with other part of exisiting string, starting from 6 index and taking 5 characters

  std::cout << "emptyString: " << emptyString << std::endl;
  std::cout << "fullname: " << fullname << std::endl;
  std::cout << "planet: " << planet << std::endl;
  std::cout << "prefferedPlanet: " << prefferedPlanet << std::endl;
  std::cout << "message: " << message << std::endl;
  std::cout << "wierdMessage: " << wierdMessage << std::endl;
  std::cout << "greeting: " << greeting << std::endl;
  std::cout << "sayHello: " << sayHello << std::endl;

  planet = "Earth, where sky is blue. Earth, where sky is blue. Earth, where sky is blue. Earth, where sky is blue";
  std::cout << "planet: " << planet << std::endl;

  /**
   * std::string vs character pointer
   *
   * When we reassign a value to a std::string, the memory where the old string
   * was stored is automatically freed, or you can say the new string replaces
   * the previous one. However, when dealing with a character pointer, the
   * previous string remains in memory even after reassignment.
   *
   * This is why std::string in C++ is a safer option for working with strings,
   * as it handles memory management automatically.
   */

  return 0;
}