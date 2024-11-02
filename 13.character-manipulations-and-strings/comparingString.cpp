#include <iostream>
#include <string>

static int comparingString() {
	std::cout << std::endl;

	std::cout << "Comparing Strings" << std::endl;
	std::cout << std::endl;

	/*
		Comparing strings in lexicographical order
	*/

	std::string helloStr{ "Hello" };
	std::string belloStr{ "Bello" };

	std::cout << "Comparing strings with comparison operators" << std::endl;
	std::cout << std::endl;

	std::cout << std::boolalpha;
	std::cout << helloStr << " == " << belloStr << " : " << (helloStr == belloStr) << std::endl;
	std::cout << helloStr << " != " << belloStr << " : " << (helloStr != belloStr) << std::endl;
	std::cout << helloStr << " >= " << belloStr << " : " << (helloStr >= belloStr) << std::endl;
	std::cout << helloStr << " <= " << belloStr << " : " << (helloStr <= belloStr) << std::endl;
	std::cout << helloStr << " < " << belloStr << " : " << (helloStr < belloStr) << std::endl;
	std::cout << helloStr << " > " << belloStr << " : " << (helloStr < belloStr) << std::endl;

	std::cout << std::endl;

	/*
		We can also compare std::string to c-string
	*/

	const char* cString{ "Hello" };

	std::cout << "helloStr.size(): " << helloStr.size() << std::endl;
	std::cout << "std::strlen(cString): " << std::strlen(cString) << std::endl;
	std::cout << helloStr << " == " << cString << " (c-string): " << (helloStr == cString) << std::endl;

	std::cout << cString << " (c-string) " << " == " << helloStr << ": " << (cString == helloStr) << std::endl;
	std::cout << cString << " (c-string) " << " >= " << helloStr << ": " << (cString >= helloStr) << std::endl;
	std::cout << cString << " (c-string) " << " <= " << helloStr << ": " << (cString <= helloStr) << std::endl;
	std::cout << cString << " (c-string) " << " < " << helloStr << ": " << (cString < helloStr) << std::endl;
	std::cout << cString << " (c-string) " << " > " << helloStr << ": " << (cString > helloStr) << std::endl;

	std::cout << std::endl;
	return 0;
}
