/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:33:29 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 15:04:28 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/**
 ** Default Constructor
 ** Copy Constructor ~ Creates a "Dog" object
 **/

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "The animal that has just been born is a Dog!!" << std::endl;
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const & dog) : Animal("Dog")
{
	std::cout << "AMAZING! The copied animal is a DOG!! 8)" << std::endl;
	this->_brain = new Brain();
	*this = dog;
	return ;
}

/**
 ** Default Destructor
 **/

Dog::~Dog(void)
{
	std::cout << "Ups, Dog is not happy with us... :(" << std::endl;
	delete this->_brain;
	return ;
}

/**
 ** Assignation Operator Overload
 **/

Dog&	Dog::operator=(Dog const & dog)
{
	if (this != &dog)
	{
		std::cout << "Dog DEEP Copy has STARTED" << std::endl;
		this->_type = dog.getType();
		*(this->_brain) = *(dog.getBrain());
		std::cout << "Dog DEEP Copy has ENDED" << std::endl;
	}
	return (*this);
}

/**
 ** Specific sound for a Dog object
 **/

void	Dog::makeSound(void) const
{
	std::cout << " Dog wants to say WOOF WOFF WOOF!!" << std::endl;
	return ;
}

/**
 ** Get the Brain of a Dog object
 **/

Brain*	Dog::getBrain(void) const
{
	return (this->_brain);
}
