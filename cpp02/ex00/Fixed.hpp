/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:09:49 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/06 16:07:21 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		static const int	_fbits;

		int					_value;
};

#endif
