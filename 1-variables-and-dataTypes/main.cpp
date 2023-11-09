#include <iostream>

int main()
{
    // Characters and Texts
    /*
        We used char keyword as a type for storing a character
        Char data type takes 1 bytes in memory
        In C++ we can also assign a valid ASCII code to a char variable,
        and it will store a corresponsing character in memory.

        https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
    */

    char character1{'a'};
    char character2{'r'};
    char character3{'r'};
    char character4{'o'};
    char character5{'w'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    // char data type takes 1 byte in memory: 2^8 = 256 different values (0 ~ 255)
    std::cout << std::endl;

    // We can also store a ASCII value in char data type
    char ascii_value = 65; // ASCII character code for 'A'
    std::cout << "Value: " << ascii_value << std::endl;
    std::cout << "Value after casting: " << static_cast<int>(ascii_value) << std::endl;

    return 0;
}
