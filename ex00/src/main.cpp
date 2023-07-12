#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	//default contructor
	Fixed a;

	//copy contructor
	Fixed b( a );

	//copy assignment operator
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
