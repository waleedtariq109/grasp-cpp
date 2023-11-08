#include <iostream>
#include <string>

int main(){
    /*
    std::cout << "Hello World!" << std::endl;
    
    int age = 22;
    std::cout << age << std::endl;

    std::cerr << "Error: Something went wrong" << std::endl;
    std::clog << "This is log message" << std::endl;

    int userAge;
    std::string userName;

    std::cout << "Please Enter Your Age and Name" << std::endl;

    // std::cin >> userAge;
    // std::cin >> userName;

    std::cin >> userAge >> userName;

    std::cout << "You age is: " << userAge << " Your name is: " << userName << std::endl;
    */

   std::string fullName;
   int age;

   std::cout << "Enter your fullname and your age" << std::endl;

   std::getline(std::cin,fullName);
   std::cin >> age;

   std::cout << "Hi " << fullName << " your are " << age << " years old!" << std::endl;

    return 0;
}