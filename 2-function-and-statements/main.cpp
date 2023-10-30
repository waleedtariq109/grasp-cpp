#include <iostream>

int returnAdd(int param1, int param2) {
    return param1 + param2;
}

int main(){
    int num1, num2;
    int MIN_ADDITION_NUMBER = 5;
    std::cout << "Enter Number 1" << std::endl;
    std::cin >> num1;
    std::cout << "Enter Number 2" << std::endl;
    std::cin >> num2;

    int result = returnAdd(num1, num2);

    if(result >= MIN_ADDITION_NUMBER) {
        std::cout << "The Addion is: " << result << std::endl;
    } else {
        std::cout << "The Addion must be equal or greater to 5" << std::endl;
    }

    return 0;
}