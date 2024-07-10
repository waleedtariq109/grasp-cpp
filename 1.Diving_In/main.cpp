#include <iostream>

int main() {
    /*
    // ? Printing Data
    std::cout << "Printing Data" << std::endl;
    int age = 23;
    std::cout << "Age: " << age << std::endl;

    // Log Error 
    std::cerr << "Something went wrong" << std::endl;

    // Log Message 
    std::clog << "Clog Message" << std::endl;

    // ? Taking Input
    int val_1, val_2;
    std::cout << "Enter Value 1: " << std::endl;
    std::cin >> val_1;
    std::cout << "Enter Value 2: " << std::endl;
    std::cin >> val_2;

    std::cout << "You enterd the " << val_1 << " and " << val_2 << std::endl;

    std::string first_name, last_name;
    std::cout << "Enter your firstname: " << std::endl;
    std::cin >> first_name;
    std::cout << "Enter your lastname: " << std::endl;
    std::cin >> last_name;

    std::cout << "Your fullname is: " << first_name + " " + last_name << std::endl;

    */

   // Get Data with spaces

    std::string full_name;
    std::cout << "Enter Fullname" << std::endl;
    std::getline(std::cin, full_name);
    std::cout << "Fullname is" << std::endl;
    std::cout << full_name << std::endl;

    return 0;
}
