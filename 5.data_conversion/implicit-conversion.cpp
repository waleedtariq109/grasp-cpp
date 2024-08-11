#include <iostream>

int main()
{
  // Implicit Data Conversion

  /*
    Implicit data conversion means that the compiler automatically handles type conversion.
    For example, if we have a variable of type `double` and perform an operation with a variable of type `int`,
    the compiler will implicitly deduce the type of the output. The compiler always converts a variable of smaller size
    to a variable of larger size in memory.

    In the example below, the `int` variable is 4 bytes, and the `double` variable is 8 bytes.
    When this expression is compiled, the compiler will convert the `int` type to `double`
    because in this expression, `double` takes up more memory than `int`.
  */

  double price{45.6};
  int units{10};

  double total_price = price * units; // units will be implicitly converted to the double

  std::cout << "Total price: " << total_price << std::endl;
  std::cout << "Size of total price: " << sizeof(total_price) << std::endl;

  // Implicit conversion in assignments

  /*
    Implicit conversion occurs when the compiler automatically converts one data type to another.
    This often happens when a value of a larger data type is assigned to a variable of a smaller data type.

    However, if you assign a value of a larger data type to a variable of a smaller data type, the conversion can lead
    to data loss or truncation. This is because the smaller data type may not be able to represent all possible values
    of the larger data type.

    For example, assigning a `double` to an `int` will result in truncation of the fractional part, as `int` cannot store
    decimal values. Conversely, when assigning an `int` to a `double`, the conversion is safe because `double`
    can represent all integer values and more.

    In summary, implicit conversion handles type changes automatically, but care should be taken when converting
    from a larger to a smaller data type to avoid data loss.
*/

  int x;
  double y{44.56};
  x = y;
  std::cout << "The value of x is: " << x << std::endl;
  std::cout << "The size of x is: " << sizeof(x) << std::endl;

  return 0;
}
