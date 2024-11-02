#include <iostream>
#include <string>

static int accessingCharacters() {
	std::cout << std::endl;

	std::string str1{ "Hello there" };
	/*
		The .size() returns the size of the string excluding
		null terminator
	*/
	std::cout << "str1.size(): " << str1.size() << std::endl;

	// Now we know how to find the size of a string we can loop through it for accessing the characters
	std::cout << "For loop with array index notation" << std::endl;
	std::cout << "str1(for loop): ";
	for (size_t i{ 0 }; i < str1.size(); ++i) {
		std::cout << str1[i];
	}
	std::cout << std::endl;

	/*
		We can also use a range based for loop for
		accessing a each character
	*/

	std::string str2{ "Hello World" };
	std::cout << std::endl;
	std::cout << "Using a range based for loop" << std::endl;
	std::cout << "str2(range based for loop): ";
	for (char character : str2) {
		std::cout << character;
	}
	std::cout << std::endl;

	/*
		instead of array bracket notation we can use .at() in order to
		accessing the array characters
	*/

	std::cout << std::endl;
	std::cout << "Using the std::string::at method" << std::endl;
	std::string str3{ "C++: The GOAT Language" };
	std::cout << "str3.at(): ";
	for (size_t i{ 0 }; i < str3.size(); ++i) {
		std::cout << str3.at(i);
	}
	std::cout << std::endl;

	/*
		We can also modify the string character using the bracket notation
		or .at() method
	*/
	std::cout << std::endl;
	std::cout << "Modify string characters" << std::endl;
	std::string str4{ "Hello There" };
	std::cout << "str4 original: " << str4 << std::endl;

	str4[0] = 'B';
	str4.at(1) = 'a';

	std::cout << "str4 modified: " << str4 << std::endl;

	std::cout << std::endl;

	/*
		std::string::fornt and std::string::back()
		The front function return the first character of the string
		and the back function returns the back character f the string
	*/

	std::string str5{ "The Phoenix king" };
	char frontChar = str5.front();
	char backChar = str5.back();

	std::cout << "frontChar in str5: " << frontChar << std::endl;
	std::cout << "backChar in str5: " << backChar << std::endl;

	/*
		The forntChar or backChar hold the copy of the returnd character
		they don't point to the original string character and if we change
		the frontChar and backChar then the change won't effect the original
		str5 string.
	*/

	frontChar = 'H';
	backChar = 'G';
	std::cout << "print str5 after modifying the frontChar and backChar: " << str5 << std::endl;
	std::cout << std::endl;

	/*
		If we make forntChar1 and backChar1 a reference
		then the first character will always change whenever
		we change the firstChar1 and same goes for backChar1
	*/

	std::string str6{ "3 Body Problem!" };
	char& firstChar1 = str6.front();
	char& backChar1 = str6.back();

	std::cout << "firstChar1: " << firstChar1 << std::endl;
	std::cout << "backChar1: " << backChar1 << std::endl;

	firstChar1 = '2';
	backChar1 = '.';

	std::cout << "str6: " << str6 << std::endl;
	std::cout << std::endl;

	/*
		We can also have a access to underlying c-string which
		std::strings takes care for use.

		The c_str methods returns a conat char pointer to that
		string
	*/

	std::cout << "The c_str method" << std::endl;
	std::string str7{ "Hi, This is str::string" };

	const char *cString = str7.c_str();

	std::cout << "cString: " << cString << std::endl;

	//cString[0] = 'A'; // Compiler Error
	std::cout << std::endl;

	// data()
	std::cout << "The data method" << std::endl;
	std::string str8{ "Hi, This is data method" };

	const char *data = str8.data();
	//data[0] = 'p'; // Compiler Error


	std::cout << std::endl;
	return 0;
}
