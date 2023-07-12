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

		Fixed	&operator = (const Fixed &src);

		int getRawBits(void) const;
		void	setRawBits(int	const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &output, const Fixed &src);

#endif
