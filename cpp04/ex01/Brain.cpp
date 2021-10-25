/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:36:09 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 14:36:38 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/**
 ** Default Constructor
 ** Copy Constructor
 **/

Brain::Brain(void)
{
	std::cout << "Brain has been created :)" << std::endl;
	this->_ideas = new std::string[100];
	this->_pos = -1;
	return ;
}

Brain::Brain(Brain const & brain)
{
	std::cout << "Copy Brain has been duplicated :|" << std::endl;
	this->_ideas = new std::string[100];
	*this = brain;
	return ;
}

/**
 ** Default Destructor
 **/

Brain::~Brain(void)
{
	std::cout << "Brain has been deleted :(" << std::endl;
	delete [] this->_ideas;
	return ;
}

/**
 ** Assignation Opeartor Overload
 **/

Brain&	Brain::operator=(Brain const & brain)
{
	if (this != &brain)
	{
		std::cout << "Brain DEEP Copy has STARTED" << std::endl;
		this->_pos = brain.getPos();
		*(this->_ideas) = *(brain.getIdeas());
		std::cout << "Brain DEEP Copy has ENDED" << std::endl;
	}
	return (*this);
}

/**
 ** Return the last idea of Brain
 **/

int		Brain::getPos(void) const
{
	return (this->_pos);
}

/**
 ** Return a pointer with the ideas of a Brain
 **/

std::string*	Brain::getIdeas(void) const
{
	return (this->_ideas);
}

/**
 ** Set ideas for a Brain object
 **/

void		Brain::setIdeas(std::string ideas)
{
	this->_pos += 1;
	if (this->_pos < 100)
		this->_ideas[this->_pos] = ideas;
	return ;
}
