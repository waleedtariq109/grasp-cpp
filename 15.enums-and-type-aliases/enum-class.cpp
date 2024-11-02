#include <iostream>

/*
	The enumerators of an enum class are scoped to their respective class.
	This means that if we want to access a specific enumerator, we must 
	use the scope resolution operator (`::`) to explicitly specify which 
	class the enumerator belongs to.

	This allows multiple enum classes to have enumerators with the same name
	without causing compile-time errors.
*/
enum class Month : unsigned int {
	Jan = 1, Feb, Mar,
	Apr, May, Jun,
	Jul, Aug, Sep,
	Oct, Nov, Dec
};

enum class Month1 : unsigned int {
	Jan = 1, Feb, Mar,
	Apr, May, Jun,
	Jul, Aug, Sep,
	Oct, Nov, Dec
};

/*
 In a regular enum (also known as an unscoped enum), enumerators are not
 scoped to the enum itself. Instead, they are placed in the surrounding
 namespace or scope. This means that once defined, enumerator names
 can be accessed directly without needing to use a scope resolution operator (`::`).
*/

/*
	We have to regular enums with same enumerator so we will get an compiler error
	becuase currently they both are live in global scope so this will make same name
	conflicts.
*/

enum Weeks {
	Mon, Tue, Wed,
	Thu, Fri, Sat,
	Sun
};

//enum RandomDay {
//	Mon, Wed, Sat
//};

enum RandomDay {
	Monday, Wednesday, Saturday
};

static int enumsClass() {
	// Class enums
	Month month = Month::Jan;
	Month1 month1 = Month1::Jan;

	// Regular enum
	RandomDay wed = Wednesday;
	int weekDay = Saturday; // Implicitly converted to int

	// Weeks mon = Mon; // Compiler Error becuase we have 2 unscoped enums with same name enumerator

	std::cout << "wed: " << wed << std::endl; // Implicitly converted to int
	std::cout << "weekDay: " << weekDay << std::endl;

	/*
		To cout the enum we need to explicitily cast it to int
		becuase enums are strongly typed so it can't be converted
		implicitily.
	*/

	std::cout << "month: " << static_cast<int>(month) << std::endl;
	std::cout << "month1: " << static_cast<int>(month1) << std::endl;
}
