/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:48:16 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/11/02 11:49:12 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

/**
 ** Randomly instanciate A, B or C
 ** Return the instance as a Base pointer
 **/

Base*	generate(void)
{
	Base*	base;
	A*		a_class;
	B*		b_class;
	C*		c_class;
	int		random;

	std::srand(std::time(nullptr));
	random = (std::rand() * std::rand()) % 3;
	if (random == 0)
	{
		a_class = new A();
		base = dynamic_cast<Base *>(a_class);
		std::cout << "Class A has been created" << std::endl;
	}
	else if (random == 1)
	{
		b_class = new B();
		base = dynamic_cast<Base *>(b_class);
		std::cout << "Class B has been created" << std::endl;
	}
	else
	{
		c_class = new C();
		base = dynamic_cast<Base *>(c_class);
		std::cout << "Class C has been created" << std::endl;
	}
	return (base);
}

/**
 ** Display "A", "B" or "C" according to the real
 ** type of p
 **/

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "ptr: A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "ptr: B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "ptr: C" << std::endl;
	else
		std::cout << "ptr: Unknown class type" << std::endl;
	return ;
}

void	identify(Base& p)
{
	try
	{
		Base&	a_class = dynamic_cast<A &>(p);

		std::cout << "ref: A" << std::endl;
		(void)a_class;
	}
	catch(std::exception &e)
	{
		try
		{
			Base&	b_class = dynamic_cast<B &>(p);

			std::cout << "ref: B" << std::endl;
			(void)b_class;
		}
		catch(std::exception &e)
		{
			try
			{
				Base&	c_class = dynamic_cast<C &>(p);

				std::cout << "ref: C" << std::endl;
				(void)c_class;
			}
			catch(std::exception &e)
			{
				std::cout << "Unknown class type" << std::endl;
			}
		}
	}
	return ;
}
