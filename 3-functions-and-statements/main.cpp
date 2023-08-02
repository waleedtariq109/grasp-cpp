#include <iostream>

// Function
int addNumber(int val1, int val2) {
    int sum {val1 + val2};
    return sum;
}

int multiplyNumber(int val1, int val2) {
    return val1 * val2;
}

int main(){
    // Statements
    int first_number {10};
    int second_number {34};

    std::cout << "The first number is: " << first_number << std::endl;
    std::cout << "The second number is: " << second_number << std::endl;

    int sum = first_number + second_number;

    std::cout << "The sum of two number is: " << sum << std::endl;

    int sum1 = addNumber(first_number, second_number);

    std::cout << "Sum function: " << sum << std::endl;

    int multiplyResult = multiplyNumber(first_number, second_number);

    std::cout << "Multiply output: " << multiplyNumber(first_number, second_number) << std::endl;
    std::cout << "Multiply output: " << multiplyResult << std::endl;

    return 0;
}