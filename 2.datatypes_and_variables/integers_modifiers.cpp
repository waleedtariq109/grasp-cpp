#include <iostream>

int main() {
    signed int value_1 {20};
    signed int value_2 {-98};

    std::cout << value_1 << std::endl;
    std::cout << value_2 << std::endl;

    unsigned int value_3 {87};
    // Unsigned integer can't have the negative value
    // unsigned int value_4 {-327}; -> Compiler Error

    int int_var {89};
    signed int signed_int {238};
    unsigned int unsigned_int {3727};
    short int short_int {65};
    long int long_int {82739};
    long long int long_long_int {36726};

    std::cout << "Int size: " << sizeof(int_var) << std::endl;
    std::cout << "Signed Int size: " << sizeof(signed_int) << std::endl;
    std::cout << "Unsigned Int size: " << sizeof(unsigned_int) << std::endl;
    std::cout << "Short Int size: " << sizeof(short_int) << std::endl;
    std::cout << "Long Int size: " << sizeof(long_int) << std::endl;
    std::cout << "Long Long Int size: " << sizeof(long_long_int) << std::endl;

    return 0;
}
