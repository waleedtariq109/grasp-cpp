#include <iostream>

static int argsToMain(int argc, char **argv) {
	std::cout << "We have total " << argc << " arguments in main" << std::endl;
	std::cout << std::endl;
	for (size_t i{ 0 }; i < argc; ++i) {
		std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
	}
}
