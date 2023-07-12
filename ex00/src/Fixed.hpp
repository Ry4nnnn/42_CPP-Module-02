#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Fixed {
	private:
		int _i;
		static const int _bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &a);
		~Fixed();
		Fixed	&operator = (const Fixed &src);
		int getRawBits(void) const;
		void	setRawBits(int	const raw);
};

#endif
