#include <iostream>

int addNumbers(int first_number, int second_number) {
    int sum = first_number + second_number;
    return sum;
}

int main() {
    int first_number = 10; 
    int second_number = 20;

    int sum = addNumbers(first_number, second_number);

    std::cout << "The First number is: " << first_number << std::endl;
    std::cout << "The second number is: " << second_number << std::endl;
    std::cout << "The sum is " << sum << std::endl;

    sum = addNumbers(20,45);
    std::cout << "The sum is " << sum << std::endl;

    return 0;
}
