#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>

class Fixed {
	private:
		int _i;
		static const int _bits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &a);
		Fixed(const int input);
		Fixed(const float input);
		~Fixed();

		Fixed	&operator=(const Fixed &src);

		bool	operator>(Fixed src) const;
		bool	operator<(Fixed src) const;
		bool	operator>=(Fixed src) const;
		bool	operator<=(Fixed src) const;
		bool	operator==(Fixed src) const;
		bool	operator!=(Fixed src) const;

		Fixed	operator+(Fixed src) const;
		Fixed	operator-(Fixed src) const;
		Fixed	operator*(Fixed src) const;
		Fixed	operator/(Fixed src) const;

		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		int getRawBits(void) const;
		void	setRawBits(int	const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed		&min(Fixed &n1, Fixed &n2);
		static const Fixed	&min(Fixed const &n1, Fixed const &n2);
		static Fixed		&max(Fixed &n1, Fixed &n2);
		static const Fixed	&max(Fixed const &n1, Fixed const &n2);
};

std::ostream	&operator<<(std::ostream &output, const Fixed &src);

#endif