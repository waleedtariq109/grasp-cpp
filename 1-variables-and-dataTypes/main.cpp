#include <iostream>

int main()
{
    // Auto keyword
    /*
        The "auto" keyword is used to instruct the compiler to deduce the type.
        If we create a variable using the "auto" keyword, the compiler will attempt
        to find the type of the value you assign to the variable and set the
        variable to that type.
    */

    auto var1{10};
    auto var3{10.98};
    auto var2{9.19f};
    auto var4{14.76l};
    auto var5{'a'};

    // Using integers modifiers
    auto var6{120u};  // unsigned integer
    auto var7{98ul};  // unsigned long integer
    auto var8{887ll}; // long long integer

    // Print
    std::cout << "The value of var1: " << var1 << std::endl;
    std::cout << "The value of var2: " << var2 << std::endl;
    std::cout << "The value of var3: " << var3 << std::endl;
    std::cout << "The value of var4: " << var4 << std::endl;
    std::cout << "The value of var5: " << var5 << std::endl;
    std::cout << "The value of var6: " << var6 << std::endl;
    std::cout << "The value of var7: " << var7 << std::endl;
    std::cout << "The value of var8: " << var8 << std::endl;

    std::cout << std::endl;

    // Size
    std::cout << "The size of var1: " << sizeof(var1) << std::endl;
    std::cout << "The size of var2: " << sizeof(var2) << std::endl;
    std::cout << "The size of var3: " << sizeof(var3) << std::endl;
    std::cout << "The size of var4: " << sizeof(var4) << std::endl;
    std::cout << "The size of var5: " << sizeof(var5) << std::endl;
    std::cout << "The size of var6: " << sizeof(var6) << std::endl;
    std::cout << "The size of var7: " << sizeof(var7) << std::endl;
    std::cout << "The size of var8: " << sizeof(var8) << std::endl;

    return 0;
};
