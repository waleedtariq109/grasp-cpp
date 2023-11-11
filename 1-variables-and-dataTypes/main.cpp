#include <iostream>

int main() {
    std::cout << "Hello" << std::endl;
    unsigned int whichTable, tableStartsForm, tableEndsWith;
    std::cout << "Which table you want to see? " << std::endl;
    std::cin >> whichTable;
    std::cout << "From where you want to starts the " << whichTable << " table?" << std::endl;
    std::cin >> tableStartsForm;
    std::cout << "Where you want to end the " << whichTable << " table?" << std::endl;
    std::cin >> tableEndsWith;

    for(unsigned int i = tableStartsForm; i <= tableEndsWith; ++i) {
        std::cout << whichTable << " X " << i << " = " << whichTable * i << std::endl;
    }
    return 0;
}
