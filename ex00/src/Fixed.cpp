#include "Fixed.hpp"


Fixed::Fixed() {
std::cout << "Default contructor called" << std::endl;
this->_i = 0;
}

Fixed::Fixed(const Fixed &a) {
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::~Fixed() {
std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &src) {
	std::cout << "Copy assignation operator called" << std::endl;
	this->_i = src.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_i);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_i = raw;
}
