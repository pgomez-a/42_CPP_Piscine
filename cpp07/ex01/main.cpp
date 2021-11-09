/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:06:37 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/11/09 11:06:38 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

/**
 ** Template to print items of an array
 **/

template < typename T >
void	print_array(T array, size_t len)
{
	size_t	count = 0;

	while (count < len)
	{
		std::cout << array[count] <<  " ";
		count += 1;
	}
	std::cout << std::endl;
	return ;
}

/**
 ** Template for elem*elem
 **/

template < typename T >
void	to_pow_two(T & elem)
{
	elem *= elem;
	return ;
}

/**
 ** Increase the value by 1
 **/

void	to_inc(int & num)
{
	num += 1;
	return ;
}

/**
 ** Convert to lowercase
 **/

void	to_lower(char & c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return ;
}

static void	leaks(void)
{
	std::cout << std::endl;
	system("leaks iter");
}

int	main(void)
{
	atexit(leaks);
	{
		std::cout << "***** INT  ARRAY *****" << std::endl;
		int	list[5] = {0, 1, 2, 3, 4};
		int	len = 5;

		::print_array(list, len);

		::iter(list, len, &to_inc);

		::print_array(list, len);
		std::cout << std::endl << std::endl;
	}
	{
		std::cout << "***** CHAR ARRAY *****" << std::endl;
		char	list[5] = {'P', 'A', 'b', 'l', 'O'};
		int	len = 5;

		::print_array(list, len);

		::iter(list, len, &to_lower);

		::print_array(list, len);
		std::cout << std::endl << std::endl;
	}
	{
		std::cout << "***** TEMP ARRAY *****" << std::endl;
		int	listInt[5] = {1, 2, 3, 4, 5};
		float	listFloat[5] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
		double	listDouble[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
		int	len = 5;

		std::cout << "Int List:    ";
		::print_array(listInt, len);
		std::cout << "Float List:  ";
		::print_array(listFloat, len);
		std::cout << "Double List: ";
		::print_array(listDouble, len);

		std::cout << std::endl;

		::iter(listInt, len, &to_pow_two);
		::iter(listFloat, len, &to_pow_two);
		::iter(listDouble, len, &to_pow_two);

		std::cout << "Int List:    ";
		::print_array(listInt, len);
		std::cout << "Float List:  ";
		::print_array(listFloat, len);
		std::cout << "Double List: ";
		::print_array(listDouble, len);
	}
	return (0);
}
