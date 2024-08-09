#include <iostream>

int main() {
  // Integers Modifiers
  signed int signed_int {-887}; // Signed integer
  unsigned int unsigned_int {998}; // Unsigned integer -> You can't add negative number in unsigned integer
  short int short_int {88}; // The size of short int in memory is 2 bytes
  signed short int signed_short_int {223}; // Signed short integer
  unsigned short int unsigned_short_int {376}; // Unsigned short int
  long int long_int {9938}; // The size of long int is 4 or 8 bytes
  signed long int signed_long_int {8938}; // Signed long integer
  unsigned long int unsigned_long_int {387}; // Unsigned long integer
  long long int long_long_int {3783278234}; // long long int


  std::cout << signed_int << std::endl;
  std::cout << unsigned_int << std::endl;
  return 0;
}

// I have 1 byte -> 8 bits

//  