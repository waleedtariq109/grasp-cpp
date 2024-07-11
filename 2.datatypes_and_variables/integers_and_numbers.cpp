#include <iostream>

int main() {
    
    int eleplant_count;
    int lion_count{};
    
    int dog_count {10};
    int cat_count {5};

    int domesticated_animals { dog_count+cat_count };

    /*
    std::cout << "Eleplant count: " << eleplant_count << std::endl;
    std::cout << "Lion count: " << lion_count << std::endl;
    std::cout << "Dog count: " << dog_count << std::endl;
    std::cout << "Cat count: " << cat_count << std::endl;
    std::cout << "Domesticated Animals" << domesticated_animals << std::endl;
    

    std::cout << sizeof(domesticated_animals) << std::endl;

    int narrowing {2.9};
    std::cout << narrowing << std::endl;
    
    int apple_count (10);
    int orange_count (33);
    int fruit_count (apple_count+orange_count);

    std::cout << "Apple count: " << apple_count << std::endl;
    std::cout << "Orange count: " << orange_count << std::endl;
    std::cout << "Fruit count: " << fruit_count << std::endl;

    int narrowing (2.9);
    std::cout << narrowing << std::endl;
    */

    int bike_count = 10;
    int truck_count = 44;
    int total_vehicle = bike_count + truck_count;
    int narrowing = 8.9;

    std::cout << "Bike Count: " << bike_count << std::endl;
    std::cout << "Truck Count: " << truck_count << std::endl;
    std::cout << "Total Vehicle: " << total_vehicle << std::endl;
    std::cout << "Narrowing: " << narrowing << std::endl;

    std::cout << "Size of int is: " << sizeof(int) << " Bytes" << std::endl;
    std::cout << "Size of bike_count: "  << sizeof(bike_count) << " Bytes" << std::endl;

    return 0;
}
