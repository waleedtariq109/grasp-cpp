#include <iostream>

static double totalSum(double arr[2], size_t count) {
	/*
		When an array is passed as an argument to a function in C++, it decays
		into a pointer to its first element. This means that instead of passing
		the entire array, the function receives a pointer, which does not carry
		information about the array's size. As a result, if you specify a size
		in the parameter (e.g., int arr[2]), the compiler ignores it because the
		parameter is treated as a pointer (int* arr). Consequently, you can pass
		arrays of different sizes without any compile-time checks, leading to potential
		issues if the function attempts to access elements beyond the allocated memory.
		To avoid this, it's recommended to pass the size of the array as an additional
		parameter, allowing the function to safely iterate over the array while respecting
		its bounds.
	*/
	double sum{};
	for (size_t i{ 0 }; i < count; ++i) {
		sum += *(arr++);
	}
	return sum;
}

static int sizedArray() {
	double totalAmount[]{ 23.76, 98.76,65.23,11.9,54.09 };
	double result = totalSum(totalAmount, std::size(totalAmount));

	std::cout << "The total sum is: " << result << std::endl;
}
