#include <iostream>

int main()
{
    // Boolean Data Type
    /*
        Boolean data type returns true or false
        It helps us to make decision
        In binary true represent with 1 & false represent with 0
        Boolean takes 8bits which is 1 byte
    */

    bool red_light{true};
    bool green_light{false};

    if (red_light == true)
    {
        std::cout << "Stop!" << std::endl;
    }
    else
    {
        std::cout << "Run!" << std::endl;
    }

    if (red_light)
    {
        std::cout << "This is a red light!" << std::endl;
    }
    else
    {
        std::cout << "This is not a red light!" << std::endl;
    }

    // size of bool
    std::cout << "The size of bool is: " << sizeof(bool) << std::endl;

    std::cout << red_light << std::endl;
    std::cout << green_light << std::endl;
    std::cout << std::boolalpha;
    std::cout << red_light << std::endl;
    std::cout << green_light << std::endl;

    return 0;
}
