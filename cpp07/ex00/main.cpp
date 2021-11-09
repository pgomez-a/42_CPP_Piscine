/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:04:57 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/11/09 11:04:58 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void	leaks(void)
{
	std::cout << std::endl;
	system("leaks templates");
}

int	main( void )
{
	{
		int a = 2;
		int b = 3;
	
		atexit(leaks);
		std::cout << "BEFORE SWAP" << std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl << std::endl;
		::swap( a, b );
		std::cout << "AFTER SWAP" << std::endl;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::cout << std::endl;
	}
	{
		std::string c = "chaine1";
		std::string d = "chaine2";

		std::cout << "BEFORE SWAP" << std::endl;
		std::cout << "c = " << c << ", d = " << d << std::endl << std::endl;
		::swap(c, d);
		std::cout << "AFTER SWAP" << std::endl;
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
		std::cout << std::endl;
	}
	{
		float	e = 12.32f;
		float	f = 42.42f;

		std::cout << "BEFORE SWAP" << std::endl;
		std::cout << "e = " << e << ", f = " << f << std::endl << std::endl;
		swap<float>(e, f);
		std::cout << "AFTER SWAP" << std::endl;
		std::cout << "e = " << e << ", f = " << f << std::endl;
		std::cout << "min( e , f ) = " << min<float>(e, f) << std::endl;
		std::cout << "max( e , f ) = " << max<float>(e, f) << std::endl;
	}

	return 0;
}
