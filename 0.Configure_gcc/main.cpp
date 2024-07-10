#include <iostream>

consteval int get_value(){
    return 10;
}

int main(){
    constexpr int value = get_value();
    std::cout << "value : " << value << std::endl;
    return 0;
}