#include <iostream>

int main()
{
    // Integer modifiers
    /*
        In C++ we have integers modifers and and you can see some of them below. These modifiers
        are only apply to integral type: those where you can store decimal number

        NOTE: Below Example the 'n' represent the number of bits
        1: signed integer - Range: [-2^n-1 ~ +2^n-1 - 1]
        2: unsigned integer - Range: [0 ~ 2^n-1]
        3: short integer - Range: if signed: [-2^n-1 ~ +2^n-1 - 1]; else: [0 ~ 2^n-1]
        4: long integer - Range: if signed: [-2^n-1 ~ +2^n-1 - 1]; else: [0 ~ 2^n-1]
    */

    // signed represent both negative and positive integers
    /*
         NOTE: Using the "signed" keyword when declaring a variable of type int
         is not considered a common or recommended practice in C++.
         The reason is that int is signed by default, and explicitly
         specifying "signed" doesn't provide any additional information or clarity.
         It's generally redundant and unnecessary.
    */

    signed int value1{10};
    signed int value2{-300};

    std::cout << "The value1 is: " << value1 << std::endl;
    std::cout << "The value2 is: " << value2 << std::endl;

    // unsigned represent only positive integers

    /*
        If you specifically want a variable to store only positive integers,
        it is a good practice to use the "unsigned" keyword to make your intention clear
        in your code. By using "unsigned," you signal to other developers (and even to yourself)
        that the variable should not hold negative values.
    */

    unsigned int value3{23};
    // unsigned int value4{-37}; // Compiler error (narrowing conversion of n from int to unsigned int)

    std::cout << "The value3 is: " << value3 << std::endl;
    // std::cout << "The value4 is: " << value4 << std::endl;

    // Long and Short modifier example

    std::cout << "--------------------------" << std::endl;

    int int_var{54};
    signed signed_var{29};
    unsigned unsigned_var{89};
    signed int signed_int{87};
    unsigned int unsigned_int{87};

    std::cout << "-------------INT START-------------" << std::endl
              << std::endl;

    std::cout << "The value of int_var is: " << int_var << ", and the size of int_var is: " << sizeof(int_var) << std::endl
              << std::endl;
    std::cout << "The value of signed_var is: " << signed_var << ", and the size of signed_var is: " << sizeof(signed_var) << std::endl
              << std::endl;
    std::cout << "The value of unsigned_var is: " << unsigned_var << ", and the size of unsigned_var is: " << sizeof(unsigned_var) << std::endl
              << std::endl;
    std::cout << "The value of signed_int is: " << signed_int << ", and the size of signed_int is: " << sizeof(signed_int) << std::endl
              << std::endl;
    std::cout << "The value of unsigned_int is: " << unsigned_int << ", and the size of unsigned_int is: " << sizeof(unsigned_int) << std::endl
              << std::endl;

    std::cout << "-------------INT END-------------" << std::endl
              << std::endl;

    short short_var{29};
    short int short_int{78};
    signed short int signed_short_int{67};
    signed short signed_short{29};
    unsigned short unsigned_short{11};
    unsigned short int unsigned_short_int{87};

    std::cout << "-------------SHORT START-------------" << std::endl
              << std::endl;

    std::cout << "The value of short_var is: " << short_var << ", and the size of short_var is: " << sizeof(short_var) << std::endl
              << std::endl;
    std::cout << "The value of short_int is: " << short_int << ", and the size of short_int is: " << sizeof(short_int) << std::endl
              << std::endl;
    std::cout << "The value of signed_short_int is: " << signed_short_int << ", and the size of signed_short_int is: " << sizeof(signed_short_int) << std::endl
              << std::endl;
    std::cout << "The value of signed_short is: " << signed_short << ", and the size of signed_short is: " << sizeof(signed_short) << std::endl
              << std::endl;
    std::cout << "The value of unsigned_short is: " << unsigned_short << ", and the size of unsigned_short is: " << sizeof(unsigned_short) << std::endl
              << std::endl;
    std::cout << "The value of unsigned_short_int is: " << unsigned_short_int << ", and the size of unsigned_short_int is: " << sizeof(unsigned_short_int) << std::endl
              << std::endl;

    std::cout << "-------------SHORT END-------------" << std::endl
              << std::endl;

    long long_var{76};
    long int long_int{33};
    signed long int signed_long_int{71};
    signed long signed_long{98};
    unsigned long int unsigned_long_int{22};
    unsigned long unsigned_long{87};

    std::cout << "-------------LONG START-------------" << std::endl
              << std::endl;

    std::cout << "The value of long_var is: " << long_var << ", and the size of long_var is: " << sizeof(long_var) << std::endl
              << std::endl;
    std::cout << "The value of long_int is: " << long_int << ", and the size of long_int is: " << sizeof(long_int) << std::endl
              << std::endl;
    std::cout << "The value of signed_long_int is: " << signed_long_int << ", and the size of signed_long_int is: " << sizeof(signed_long_int) << std::endl
              << std::endl;
    std::cout << "The value of signed_long is: " << signed_long << ", and the size of signed_long is: " << sizeof(signed_long) << std::endl
              << std::endl;
    std::cout << "The value of unsigned_long is: " << unsigned_long << ", and the size of unsigned_long is: " << sizeof(unsigned_long) << std::endl
              << std::endl;
    std::cout << "The value of unsigned_long_int is: " << unsigned_long_int << ", and the size of unsigned_long_int is: " << sizeof(unsigned_long_int) << std::endl
              << std::endl;

    std::cout << "-------------LONG END-------------" << std::endl
              << std::endl;

    long long long_long_var{99};
    long long int long_long_int{54};
    signed long long signed_long_long{61};
    signed long long int signed_long_long_int{12};
    unsigned long long unsigned_long_long{88};
    unsigned long long int unsigned_long_long_int{89};

    std::cout << "-------------LONG START-------------" << std::endl
              << std::endl;

    std::cout << "The value of long_long_var is: " << long_long_var << ", and the size of long_long_var is: " << sizeof(long_long_var) << std::endl
              << std::endl;
    std::cout << "The value of long_long_int is: " << long_long_int << ", and the size of long_long_int is: " << sizeof(long_long_int) << std::endl
              << std::endl;
    std::cout << "The value of signed_long_long_int is: " << signed_long_long_int << ", and the size of signed_long_long_int is: " << sizeof(signed_long_long_int) << std::endl
              << std::endl;
    std::cout << "The value of signed_long_long is: " << signed_long_long << ", and the size of signed_long_long is: " << sizeof(signed_long_long) << std::endl
              << std::endl;
    std::cout << "The value of unsigned_long_long is: " << unsigned_long_long << ", and the size of unsigned_long_long is: " << sizeof(unsigned_long_long) << std::endl
              << std::endl;
    std::cout << "The value of unsigned_long_long_int is: " << unsigned_long_long_int << ", and the size of unsigned_long_long_int is: " << sizeof(unsigned_long_long_int) << std::endl
              << std::endl;

    std::cout << "-------------LONG END-------------" << std::endl
              << std::endl;

    return 0;
}
