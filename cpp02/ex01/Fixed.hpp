#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const & fixed);
		~Fixed(void);

		Fixed&	operator=(Fixed const & fixed);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		int	toInt(void) const;
		float	toFloat(void) const;
	private:
		static const int	_fbits;

		int			_value;
};

std::ostream&	operator<<(std::ostream& out, Fixed const & fixed);

#endif
