#include <iostream>

static double totalSum(double arr[], size_t count) {
	/*
		When we pass array into function as an argument then
		the array will decay's into pointer since the array
		decays into pointer so we also need to receive the 
		size of an array because pointer just hold the memory
		address of the first element of an array and pointer
		also does not carry the size of an array.

		Since the array element are stored in sequence in memory
		so we can use pointer arithmetic in order to perform any
		arithemitic operation such as addition.
	*/
	double sum{};
	for (size_t i{ 0 }; i < count; ++i) {
		sum += *(arr++);
	}
	return sum;
}

static int arrayParam() {
	double totalAmount[]{ 23.76, 98.76,65.83,11.9,54.09 };
	double result = totalSum(totalAmount, std::size(totalAmount));

	std::cout << "The total sum is: " << result << std::endl;
}
