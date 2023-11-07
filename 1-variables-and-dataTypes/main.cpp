#include <iostream>

int main()
{
    // Represent Number in different Number system
    /*
        You need to define number 15 in following Number system
        1: Decimal
        2: Binary
        3: Octal
        4: Hexadecimal
    */

    /*
         1: The total of 8 bits represent 1 byte
         2: Signed and unsigned are terms used to describe the interpretation
            of binary data (bits) in a computer system. They are particularly
            relevant in the context of integer data types, and they determine
            whether the binary representation is used to represent positive and negative
            numbers (signed) or only non-negative numbers (unsigned).

    */

    // This feature only comes in C++14 or Greater

    int numInDecimal = 15;    // In Decimal
    int numInOctal = 017;     // In Octal
    int numInHexa = 0xf;      // In Hexadecimal
    int numInBinary = 0b1111; // In binary

    std::cout << "Decimal Representation : " << numInDecimal << std::endl;
    std::cout << "Octal Representation : " << numInOctal << std::endl;
    std::cout << "Hexadecimal Representation : " << numInHexa << std::endl;
    std::cout << "Binary Representation : " << numInBinary << std::endl;

    return 0;
};
