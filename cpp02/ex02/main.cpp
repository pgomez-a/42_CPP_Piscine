/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:25:16 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/06 16:46:55 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main( void )
{
	{
		Fixed	a;
		Fixed	const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		Fixed	a(5);
		Fixed	b(5);

		if (a > b)
			std::cout << a << " is greater than " << b << std::endl;
		if (a < b)
			std::cout << a << " is lower than " << b << std::endl;
		if (a == b)
			std::cout << a << " is equal than " << b << std::endl;
		if (a >= b)
			std::cout << a << " is greater or equal than " << b << std::endl;
		if (a <= b)
			std::cout << a << " is less or equal than " << b << std::endl;
		if (a != b)
			std::cout << a << " is not equal than " << b << std::endl;
		std::cout << a << "+" << b << "= " << a+b << std::endl;
		std::cout << a << "-" << b << "= " << a-b << std::endl;
		std::cout << a << "*" << b << "= " << a*b << std::endl;
		std::cout << a << "/" << b << "= " << a/b << std::endl;
		std::cout << "min (" << a << "," << b << ") ->" << Fixed::min(a, b) << std::endl;
		std::cout << "max (" << a << "," << b << ") ->" << Fixed::max(a, b) << std::endl;
	}
	return 0;
}
