#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & fixed);
		~Fixed(void);

		Fixed&	operator=(Fixed const & fixed);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		static const int	_fbits;

		int			_value;
};

#endif
