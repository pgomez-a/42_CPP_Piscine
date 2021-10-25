/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:35:20 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 15:04:24 by pgomez-a         ###   ########.fr       */
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
	this->_brain = new Brain();
	return ;
}

Cat::Cat(Cat const & cat) : Animal("Cat")
{
	std::cout << "BRILLIANT! Copy Cat has been made!!" << std::endl;
	this->_brain = new Brain();
	*this = cat;
	return ;
}

/**
 ** Default Desctructor
 **/

Cat::~Cat(void)
{
	std::cout << "Mmmm... Cat thinks that is better than us" << std::endl;
	delete this->_brain;
	return ;
}

/**
 ** Assignation Opeartor Overload
 **/

Cat&	Cat::operator=(Cat const & cat)
{
	if (this != &cat)
	{
		std::cout << "Cat DEEP Copy has STARTED" << std::endl;
		this->_type = cat.getType();
		*(this->_brain) = *(cat.getBrain());
		std::cout << "Cat DEEP Copy has ENDED" << std::endl;
	}
	return (*this);
}

/**
 ** Specific sound for a Cat object
 **/

void	Cat::makeSound(void) const
{
	std::cout << " Cat can't stop t... MIAU MIAU MIAU" << std::endl;
	return ;
}

/**
 ** Get the Brain of a Cat object
 **/

Brain*	Cat::getBrain(void) const
{
	return (this->_brain);
}
