#include <iostream>
#include <iomanip>

int main()
{
    // Fractional Number - Known as floating point number
    /*
        Types of Floating point number
        1: float - size: 4 bytes, precision: 7
        2: double - size: 8 bytes, precision: 15
        3: long double - size: 12 bytes precision > double

        NOTE: We can also use the scientific notation such as 1.9287389e8 which means 1.9287389*10^8
        In c++ if we are trying to divide a floating point number it will return the infinity(+/-)
        If we divide 0.0/0.0 it will return NaN
    */

    float number1{1.12345678901234567890f};       // Float Type - must end with f, size: 4 bytes
    double number2{1.12345678901234567890};       // Double Type, 8 bytes
    long double number3{1.12345678901234567890L}; // Long type - must end with L, size: 16 bytes

    // Size of different types
    std::cout << "The size of float is: " << sizeof(float) << std::endl;
    std::cout << "The size of double is: " << sizeof(double) << std::endl;
    std::cout << "The size of long double is: " << sizeof(long double) << std::endl;

    // Precisions
    std::cout << std::setprecision(20);
    std::cout << "Number 1 is: " << number1 << std::endl;
    std::cout << "Number 2 is: " << number2 << std::endl;
    std::cout << "Number 3 is: " << number3 << std::endl;

    double number4{123456789.0123};
    std::cout << "Number 4 is: " << number4 << std::endl;

    // Scientific notation
    /*
        What we have seen so far in terms of floating point types
        is fixed notation. There is another notation, scientific
        that is handy if you have really huge numbers or small numbers
        to represent
    */

    std::cout << "-------------------------" << std::endl;

    double number5{192400023};
    double number6{1.92400023e8};
    double number7{1.924e8}; // Can ommit the lower 00023
                             // for simplicity if our application allows that.
    double number8{0.00000000003498};
    double number9{3.498e-11}; // multiply with 10 exp(-11)

    std::cout << "number5 is : " << number5 << std::endl;
    std::cout << "number6 is : " << number6 << std::endl;
    std::cout << "number7 is : " << number7 << std::endl;
    std::cout << "number8 is : " << number8 << std::endl;
    std::cout << "number9 is : " << number9 << std::endl;

    // Infinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;

    double number10{5.6};
    double number11{}; // Initialized to 0
    double number12{}; // Initialized to 0

    // Infinity
    double result{number10 / number11};

    std::cout << number10 << "/" << number11 << "  yields " << result << std::endl;
    std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;

    // NaN
    result = number11 / number12;

    std::cout << number11 << "/" << number12 << " = " << result << std::endl;

    return 0;
}
