#include "Fixed.hpp"

/* A default constructor that initializes the fixed-point number value to 0. */
Fixed::Fixed() {
	std::cout << "Default contructor called" << std::endl;
	this->_i = 0;
}

/* A copy constructor. */
Fixed::Fixed(const Fixed &a) {
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

/* A destructor. */
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

/* A copy assignment operator overload. */
Fixed	&Fixed::operator=(const Fixed &src) {
	std::cout << "Copy assignation operator called" << std::endl;
	this->_i = src.getRawBits();
	return (*this);
}

/* A member function int getRawBits( void ) const;
that returns the raw value of the fixed-point value. */
int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_i);
}

/* A member function void setRawBits( int const raw );
that sets the raw value of the fixed-point number. */
void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_i = raw;
}
