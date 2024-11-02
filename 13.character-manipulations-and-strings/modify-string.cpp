#include <iostream>
#include <string>

static int modifyString() {
	std::cout << std::endl;

	std::cout << "Modifying String" << std::endl;
	std::cout << std::endl;

	/*
		The std::string::clear() will removes all the characters
		in the string and make it empty
	*/

	std::string str1{ "The Lion King" };
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str1 size: " << str1.size() << std::endl;
	std::cout << "str1 capacity: " << str1.capacity() << std::endl;

	std::cout << std::endl;
	std::cout << "clearing..." << std::endl;
	std::cout << std::endl;

	str1.clear(); // Clear the string

	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str1 size: " << str1.size() << std::endl;
	std::cout << "str1 capacity: " << str1.capacity() << std::endl;
	std::cout << std::endl;

	/*
		We can use std::string::insert() to insert a character
		or string
	*/

	std::cout << "std::string::insert()" << std::endl;
	std::string str2{ "122" };

	std::cout << "str2: " << str2 << std::endl;

	/*
		@param1: Index where we want to add a character
		@param2: How many character we want to add
		@param3: The character which we want to add
	*/
	str2.insert(1, 1, '3');

	std::cout << "str2 after insert: " << str2 << std::endl;
	std::cout << std::endl;

	// We can also insert c-string
	std::string str3{ "Hello" };
	const char* str4{ " World" };

	str3.insert(5, str4);

	std::cout << "str3: " << str3 << std::endl;
	std::cout << std::endl;

	/*
		Another example of insert with c-string
	*/

	std::string str5{ "Hello" };
	const char* str6{ " World Heatlh Organization" };

	str5.insert(5, str6, 6);

	std::cout << "str5: " << str5 << std::endl;
	std::cout << std::endl;

	/*
		std::string::erase()
	*/

	std::string str7{ "Hello World is a message used to start off things when we learn programming!" };
	str7.erase(11, str7.size()-12);
	std::cout << "str7: " << str7 << std::endl;

	std::cout << std::endl;

	str7 = "Hello World is a message used to start off things when we learn programming!";
	str7.erase(); // Erase everything

	std::cout << "str7: " << str7 << std::endl;

	std::cout << std::endl;

	/*
		std::string::push_bach()

		This will push the character at the last of the string
	*/

	std::string str8{ "Hello World" };
	str8.push_back('!'); // Push character at last

	std::cout << "str8: " << str8 << std::endl;

	/*
		std::string::pop_back()
		
		This will remove the last character from string
	*/

	std::string str9{ "Hello World!!" };
	str9.pop_back(); // Remove the last character

	std::cout << "str9: " << str9 << std::endl;

	std::cout << std::endl;
}
