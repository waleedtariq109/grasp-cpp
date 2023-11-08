#include <iostream>

int main() {

    /**
     * Three ways to declare variable in C++
     * 1: Braced Initialization
     * 2: Functional Initialization
     * 3: Assignment Initialization
    */

    // Braced Initialization
    int number = 017; // Initialize with some garbage value: Some compiler may give warning
    std::cout << number << std::endl;
    int number1 {}; // Initialize with 0 as a default value

    return 0;
};
