#include <iostream>
#include <optional>

static int stdOptional(int argc, char **argv) {
	// Initialize with value
	std::optional<int> age{ 23 };
	std::optional<double> percentage{ 87.98 };
	std::optional<char> character{ 'W' };
	std::optional<std::string> name{ "Waleed Tariq" };

	// Initialize with std::nullopt
	std::optional<int> age1{ std::nullopt };
	std::optional<double> percentage1{ std::nullopt };
	std::optional<char> character1{ std::nullopt };
	std::optional<std::string> name1{ std::nullopt };

	// Printing initialized std::optional varibale
	std::cout << "age: " << age.value() << std::endl;
	std::cout << "percentage: " << percentage.value() << std::endl;
	std::cout << "character: " << character.value() << std::endl;
	std::cout << "name: " << name.value() << std::endl;


	// Printing uninitialized std::optional varibale
	/*
		If we try to access the value of uninitialzed variablee decalred with
		std::optional then we will get a compiler error.

		So it's recommended to check if it had value or it's not equal to
		std::nullopt
	*/

	// Chech if std::optional has a value by calling has_value()
	if (age1.has_value()) {
		std::cout << "age: " << age1.value() << std::endl;
	}
	if (percentage1.has_value()) {
		std::cout << "percentage: " << percentage1.value() << std::endl;
	}
	if (character1.has_value()) {
		std::cout << "character: " << character1.value() << std::endl;
	}
	if (name1.has_value()) {
		std::cout << "name: " << name1.value() << std::endl;
	}

	// We can also check if our std::optional variable is not equal to std::nullopt before accessing the value
	if (age1 != std::nullopt) {
		std::cout << "age: " << age1.value() << std::endl;
	}
	else {
		std::cout << "age is equal to std::nullopt" << std::endl;
	}
	if (percentage1 != std::nullopt) {
		std::cout << "percentage: " << percentage1.value() << std::endl;
	}
	else {
		std::cout << "percentage is equal to std::nullopt" << std::endl;
	}
	if (character1 != std::nullopt) {
		std::cout << "character: " << character1.value() << std::endl;
	}
	else {
		std::cout << "character is equal to std::nullopt" << std::endl;
	}
	if (name1 != std::nullopt) {
		std::cout << "name: " << name1.value() << std::endl;
	}
	else {
		std::cout << "name is equal to std::nullopt" << std::endl;
	}
}
