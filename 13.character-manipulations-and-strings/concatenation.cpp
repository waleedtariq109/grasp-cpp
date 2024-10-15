#include <cstring>
#include <iostream>

int main() {
  // Concatenation
  std::cout << std::endl;
  std::cout << "std::strcat : " << std::endl;
  // doc : https://en.cppreference.com/w/cpp/string/byte/strcat

  char dest[50] = "Hello ";
  char src[50] = "World!";
  std::strcat(dest, src);                       // Concatenates "World!" to "Hello "
  std::cout << "dest : " << dest << std::endl;  // Hello World
  std::strcat(dest, " Goodbye World!");
  std::cout << "dest : " << dest << std::endl;  // Hello World Goodbye World!

  // More concatenation
  std::cout << std::endl;
  std::cout << "More std::strcat : " << std::endl;

  char *dest1 = new char[30]{'F', 'i', 'r', 'e', 'l', 'o', 'r', 'd', '\0'};
  char *source1 = new char[30]{',', 'T', 'h', 'e', ' ', 'P', 'h', 'e', 'n', 'i', 'x', ' ', 'K', 'i', 'n', 'g', '!', '\0'};

  std::cout << "std::strlen(dest1) :" << std::strlen(dest1) << std::endl;
  std::cout << "std::strlen(source1) : " << std::strlen(source1) << std::endl;

  std::cout << "Concatenating..." << std::endl;
  std::strcat(dest1, source1);

  std::cout << "std::strlen(dest1) :" << std::strlen(dest1) << std::endl;
  std::cout << "dest1 : " << dest1 << std::endl;

  // Fix: free memory and set pointers to nullptr
  delete[] dest1;
  dest1 = nullptr;
  delete[] source1;
  source1 = nullptr;

  // std::strncat: concatenates n characters from source to destination
  std::cout << std::endl;
  std::cout << "std::strncat:" << std::endl;
  char dest2[50]{"Hello"};
  char source2[30] = {" There is a bird on my window"};

  // Concatenate only 6 characters from source2 to dest2
  std::cout << std::strncat(dest2, source2, 6) << std::endl;
  std::cout << "The concatenated string is : " << dest2 << std::endl;

  // std::strcpy
  std::cout << std::endl;
  std::cout << "std::strcpy : " << std::endl;
  const char *source3 = "C++ is a multipurpose programming language.";
  char *dest3 = new char[std::strlen(source3) + 1];  // +1 for null character

  std::strcpy(dest3, source3);

  std::cout << "std::strlen(dest3) : " << std::strlen(dest3) << std::endl;
  std::cout << "dest3 : " << dest3 << std::endl;

  // Fix: free memory and set pointer to nullptr
  delete[] dest3;
  dest3 = nullptr;

  // std::strncpy: Copy n characters from source4 to dest4
  std::cout << std::endl;
  std::cout << "std::strncpy:" << std::endl;
  const char *source4 = "Hello";
  char dest4[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};  // null-terminated for printing

  std::cout << "dest4 before copy: " << dest4 << std::endl;

  // Copy exactly 5 characters from source4 to dest4
  std::strncpy(dest4, source4, 5);

  std::cout << "dest4 after copy: " << dest4 << std::endl;

  return 0;
}
