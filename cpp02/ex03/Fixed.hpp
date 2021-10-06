/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:51:34 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/06 16:52:10 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

		static Fixed&		min(Fixed& fixedOne, Fixed& fixedTwo);
		static const Fixed&	min(Fixed const & fixedOne, Fixed const & fixedTwo);
		static Fixed&		max(Fixed& fixedOne, Fixed& fixedTwo);
		static const Fixed&	max(Fixed const & fixedOne, Fixed const & fixedTwo);

		Fixed&	operator=(Fixed const & fixed);

		bool	operator>(Fixed const & fixed) const;
		bool	operator<(Fixed const & fixed) const;
		bool	operator>=(Fixed const & fixed) const;
		bool	operator<=(Fixed const & fixed) const;
		bool	operator==(Fixed const & fixed) const;
		bool	operator!=(Fixed const & fixed) const;

		Fixed	operator+(Fixed const & fixed) const;
		Fixed	operator-(Fixed const & fixed) const;
		Fixed	operator*(Fixed const & fixed) const;
		Fixed	operator/(Fixed const & fixed) const;

		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

	private:
		static const int	_fbits;

		int					_value;
};

std::ostream&	operator<<(std::ostream& out, Fixed const & fixed);

#endif
