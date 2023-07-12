#include "Fixed.hpp"

/* Default contructor */
Fixed::Fixed() {
	_i = 0;
}

/* Copy contructor */
Fixed::Fixed(const Fixed &a) {
	*this = a;
}

Fixed::Fixed(const int input) {
	this->_i = input << this->_bits;
}

Fixed::Fixed(const float input) {
	this->_i = std::roundf(input * (1 << this->_bits));
}

/* Destructor function */
Fixed::~Fixed() {

}

Fixed	&Fixed::operator=(const Fixed &src) {
	this->_i = src.getRawBits();
	return (*this);
}

/* Getter function */
int	Fixed::getRawBits(void) const {
	return (this->_i);
}

/* Setter function */
void	Fixed::setRawBits(const int input) {
	this->_i = input;
}

/* Function that converts integer to float number */
float	Fixed::toFloat(void) const {
	return ((float)this->_i / (float)(1 << this->_bits));
}

/* Function that converts number to integer */
int	Fixed::toInt(void) const {
	return (this->_i >> this->_bits);
}

bool	Fixed::operator>(const Fixed& src) const {
	return (this->toFloat() > src.toFloat());
}

bool	Fixed::operator<(const Fixed& src) const {
	return (this->toFloat() < src.toFloat());
}

bool	Fixed::operator>=(const Fixed& src) const {
	return (this->toFloat() >= src.toFloat());
}

bool	Fixed::operator<=(const Fixed& src) const {
	return (this->toFloat() <= src.toFloat());
}

bool	Fixed::operator==(const Fixed& src) const {
	return (this->toFloat() == src.toFloat());
}

bool	Fixed::operator!=(const Fixed& src) const {
	return (this->toFloat() != src.toFloat());
}

Fixed	Fixed::operator+(const Fixed& src) const {
	return (this->toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(const Fixed& src) const {
	return (this->toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(const Fixed& src) const {
	return (this->toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(const Fixed& src) const {
	return (this->toFloat() / src.toFloat());
}

Fixed	&Fixed::operator++() {
	this->_i++;
	return (*this);
}

Fixed	&Fixed::operator--() {
	this->_i--;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	temp;

	temp = *this;
	this->_i++;
	return (temp);
}

Fixed	Fixed::operator--(int) {
	Fixed	temp;

	temp = *this;
	this->_i--;
	return (temp);
}

Fixed	&Fixed::min(Fixed &n1, Fixed &n2) {
	return (n1.toFloat() <= n2.toFloat() ? n1 : n2);
}

const Fixed	&Fixed::min(Fixed const &n1, Fixed const &n2) {
	return (n1.toFloat() <= n2.toFloat() ? n1 : n2);
}

Fixed	&Fixed::max(Fixed &n1, Fixed &n2) {
	return (n1.toFloat() >= n2.toFloat() ? n1 : n2);
}

const Fixed	&Fixed::max(Fixed const &n1, Fixed const &n2) {
	return (n1.toFloat() >= n2.toFloat() ? n1 : n2);
}

std::ostream	&operator<<(std::ostream &output, const Fixed &src) {
	output << src.toFloat();
	return (output);
}
