/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:19:07 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 14:27:23 by pgomez-a         ###   ########.fr       */
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
	return ;
}

Dog::Dog(Dog const & dog) : Animal("Dog")
{
	std::cout << "AMAZING! The copied animal is a DOG!! 8)" << std::endl;
	(void)dog;
	return ;
}

/**
 ** Default Destructor
 **/

Dog::~Dog(void)
{
	std::cout << "Ups, Dog is not happy with us... :(" << std::endl;
	return ;
}

/**
 ** Assignation Operator Overload
 **/

Dog&	Dog::operator=(Dog const & dog)
{
	if (this != &dog)
		this->_type = dog.getType();
	return (*this);
}

/**
 ** Specific sound for a Dog object
 **/

void	Dog::makeSound(void) const
{
	std::cout << "Dog wants to say WOOF WOFF WOOF!!" << std::endl;
	return ;
}
