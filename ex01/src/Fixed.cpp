#include "Fixed.hpp"

/* Default contructor */
Fixed::Fixed() {
	std::cout << "Default contructor called" << std::endl;
	_i = 0;
}

/* Copy contructor */
Fixed::Fixed(const Fixed &a) {
	std::cout << "Copy contructor called" << std::endl;
	*this = a;
}

Fixed::Fixed(const int input) {
	std::cout << "Int contructor called" << std::endl;
	this->_i = input << this->_bits;
}

Fixed::Fixed(const float input) {
	std::cout << "Float contructor called" << std::endl;
	this->_i = std::roundf(input * (1 << this->_bits));
}

/* Destructor function */
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

/* Getter function */
int	Fixed::getRawBits(void) const {
	return (this->_i);
}

/* Setter function */
void	Fixed::setRawBits(const int input) {
	this->_i = input;
}

float	Fixed::toFloat(void) const {
	return ((float)this->_i / (float)(1 << this->_bits));
}

int	Fixed::toInt(void) const {
	return (this->_i >> this->_bits);
}

std::ostream	&operator<<(std::ostream &output, const Fixed &src) {
	output << src.toFloat();
	return (output);
}




