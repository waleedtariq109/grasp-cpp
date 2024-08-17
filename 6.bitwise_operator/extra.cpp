#include <iostream>

using namespace std;

int main()
{
  int x = 6;  // 06 -> 00000110
  int y = 12; // 12 -> 00001100
  int z = 0;  // 06 -> 00000110

  z = x & y;
  cout << z << endl;

  z = x | y;
  cout << z << endl;

  z = x ^ y;
  cout << z << endl;

  z = x << 1;
  cout << z << endl;

  z = y >> 1;
  cout << z << endl;

  return 0;
}

/**
 *
 * 000000000
 * 000000001
 * 000000010
 * 000000011
 * 000000100
 * 000000101
 * 000000110
 * 000000111
 * 000001000
 * 000001001
 * 000001010
 */