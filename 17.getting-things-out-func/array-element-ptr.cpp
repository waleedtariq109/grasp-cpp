#include <iostream>

static const double* findMaxAddress(const double arr[], size_t size) {
	size_t maxIndex{};
	double maxValue{};
	for (size_t i{ 0 }; i < size; ++i) {
		if (arr[i] > maxValue) {
			maxValue = arr[i];
			maxIndex = i;
		}
	}
	return &arr[maxIndex];
}

static int arrElementPtr(int argc, char **argv) {
	double arr[]{ 1.22,34.56,99.33,112.4,33.56 };
	const double* returnedPtr = findMaxAddress(arr, std::size(arr));
	
	std::cout << "max address: " << returnedPtr << std::endl;
	std::cout << "max address: value: " << *returnedPtr << std::endl;
}
