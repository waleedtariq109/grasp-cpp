#include <iostream>

int main() {
    // Assignments
    int var1{10};
    std::cout << "Var 1 (brace): " << var1 << std::endl;
    var1 = 20;
    std::cout << "Var 1 (Assignment): " << var1 << std::endl;

    std::cout << std::endl;
    std::cout << "----------------" << std::endl;

    double var2{99.88};
    std::cout << "Var 1 (brace): " << var2 << std::endl;
    var2 = 20.45;
    std::cout << "Var 1 (Assignment): " << var2 << std::endl;
    return 0;
}
