#include <iostream>

/*
	We can overload a function if the pointer we receive as a
	param are of different types.
*/

/*
	In this case we can't overload a function because the array is decayed into a
	pointer and since all the prototype receives a pointer of same type that's why
	we will get an compiler error or program crash.
*/

/*
static int max(int arr[]);
static int max(int* arr);
static int max(int arr[10]);
*/

static double max(double* arr, size_t count) {
	double maxNumber{ 0.0 };
	for (size_t i{ 0 }; i < count; ++i) {
		if (arr[i] > maxNumber) {
			maxNumber = arr[i];
		}
	}
	return maxNumber;
}

static int max(int* arr, size_t count) {
	int maxNumber{ 0 };
	for (size_t i{ 0 }; i < count; ++i) {
		if (arr[i] > maxNumber) {
			maxNumber = arr[i];
		}
	}
	return maxNumber;
}

static int onerloadingPtrParam() {
	int intArr[]{ 33,44,37,99,66 };
	double doubleArr[]{ 22.98,44.5,99.76,87.6,87.34 };

	int maxIntNum = max(intArr, std::size(intArr));
	double maxDoubleNum = max(doubleArr, std::size(doubleArr));

	std::cout << "maxIntNum: " << maxIntNum << std::endl;
	std::cout << "maxDoubleNum: " << maxDoubleNum << std::endl;

}
