#include <iostream>

int main()
{
    // Integers in C++ & different ways of initialize a variable

    // What is Integers in C++
    /*
        1: You can declare a integer type variable using int keyword
        2: Integers stores whole number not decimal point number like 10.52
        3: Typically integers occupy 4 bytes or more in memory
    */

    // Different ways of initialize a variable
    /*
        1: Asignment Variable Initialization
        2: Braces Variable Initialization
        3: Functional Variable Initialization
     */

    // What is Variable.
    /*
        1: Variable is simply the way to store data in memory.
        2: We can think in a way like we store some data in let's say 'data' variable
           so that data was stored in memory and we can refer to that piece of memory
           using the variable name 'data'.
        3: Variable name should start with character after that we can use the integer and
           apart from that we can't use any special character except _ in variable name.
        4: Variable are case-sensitive.
    */

    // Variable syntax
    /*
          1: You need to define the data type
          2: After data type you need to give it a name
          3: After that you need to give the value


          Syntax Example: typename variable_name {value}
    */

    std::cout << "------Braced Initialization------" << std::endl;

    int elephant_count; // May contain some garbage Value . WARNING
    int lion_count{};   // Initialize with 0
    int cat_count{10};  // Initialize with 10
    int dog_count{15};  // Initialize with 10
    int total_animals{cat_count + dog_count + lion_count};
    // int narrowing_conersion_with_braces {10.9} // This will give error

    std::cout << "You may see some garbage value: " << elephant_count << std::endl;
    std::cout << "Lion Count: " << lion_count << std::endl;
    std::cout << "Cat Count: " << cat_count << std::endl;
    std::cout << "Dog Count: " << dog_count << std::endl;
    std::cout << "Total Animals: " << total_animals << std::endl;

    std::cout << "------Functional Initialization------" << std::endl;

    int apple_count(10);                            // Contains 10
    int orange_count(20);                           // Contains 20
    int total_fruits(apple_count + orange_count);   // Contains apple_count + orange_count
    int narrowing_conersion_with_functional(10.56); // Narrow the value may lost some data and less safer the brace initialization. NOT RECOMMENDED

    std::cout << "Apple Count: " << apple_count << std::endl;
    std::cout << "Orange Count: " << apple_count << std::endl;
    std::cout << "Total Fruits: " << total_fruits << std::endl;
    std::cout << "Narrowing conersion with Functional Initialization: " << narrowing_conersion_with_functional << std::endl;

    std::cout << "------Assignment Initialization------" << std::endl;

    int bike_count = 10;                             // Contains 10
    int car_count = 20;                              // Contains 20
    int total_vehicle = bike_count + car_count;      // Contains bike_count + car_count
    int narrowing_conersion_with_assignment = 10.56; // Narrow the value may lost some data and less safer the brace initialization. NOT RECOMMENDED

    std::cout << "Bike Count: " << bike_count << std::endl;
    std::cout << "Car Count: " << bike_count << std::endl;
    std::cout << "Total Vehicle: " << total_vehicle << std::endl;
    std::cout << "Narrowing conersion with Assignment Initialization: " << narrowing_conersion_with_assignment << std::endl;

    std::cout << "------TIP: We can also the variable memory size using sizeof()------" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of bike_count variable: " << bike_count << std::endl;

    return 0;
}
