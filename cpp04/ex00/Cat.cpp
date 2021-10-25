/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:20:44 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 14:42:28 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/**
 ** Default Constructor
 ** Copy Constructor ~ Creates a "Cat" object
 **/

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Wooow! The baby animal is a Cat!!" << std::endl;
	return ;
}

Cat::Cat(Cat const & cat) : Animal("Cat")
{
	std::cout << "BRILLIANT! Copy Cat has been made!!" << std::endl;
	(void)cat;
	return ;
}

/**
 ** Default Desctructor
 **/

Cat::~Cat(void)
{
	std::cout << "Mmmm... Cat thinks that is better than us" << std::endl;
	return ;
}

/**
 ** Assignation Opeartor Overload
 **/

Cat&	Cat::operator=(Cat const & cat)
{
	(void)cat;
	return (*this);
}

/**
 ** Specific sound for a Cat object
 **/

void	Cat::makeSound(void) const
{
	std::cout << "Cat can't stop t... MIAU MIAU MIAU" << std::endl;
	return ;
}
