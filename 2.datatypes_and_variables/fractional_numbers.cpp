#include <iostream>
#include <iomanip>

int main() {
    float number_1 {1.3749872837482789374289F};
    double number_2 {1.3798479283748927498273};
    long double number_3 {1.27349823748273894729L};

    std::cout << "Size of float: " << sizeof(number_1) << std::endl;
    std::cout << "Size of double: " << sizeof(number_2) << std::endl;
    std::cout << "Size of long double: " << sizeof(number_3) << std::endl;

    std::cout << std::setprecision(20);
    std::cout << "Number 1: " << number_1 << std::endl;
    std::cout << "Number 2: " << number_2 << std::endl;
    std::cout << "Number 3: " << number_3 << std::endl;

    return 0;
}
