/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:17:25 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 15:17:26 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/**
 ** Default Protected Constructor
 **/

AMateria::AMateria(void) : type("materia")
{
	std::cout << "Default Constructor - Protected Access Control" << std::endl;
	return ;
}

/**
 ** Constructor that receives a type
 ** Copy Constructor
 **/

AMateria::AMateria(std::string const & type) : type(type)
{	
	std::cout << "AMateria Constructor has been called to stablish type "
		<< type << std::endl;
	return ;
}

AMateria::AMateria(AMateria const & materia)
{
	std::cout << "AMateria Copy Constructor  has been called to stablish type "
		<< materia.getType() << std::endl;
	*this = materia;
	return ;
}

/**
 ** Default Desctructor
 **/

AMateria::~AMateria(void)
{
	std::cout << "AMateria Destructor has been called for type "
		<< this->type << std::endl;
	return ;
}

/**
 ** Assignation Operator Overload
 **/

AMateria&	AMateria::operator=(AMateria const & materia)
{
	this->type = materia.getType();
	return (*this);
}

/**
 ** Return the type of the Materia
 **/

std::string const &	AMateria::getType(void) const
{
	return (this->type);
}

/**
 ** Do an action depending on the Derived AMateria class
 **/

void			AMateria::use(ICharacter& target)
{
	std::cout << "You have to specify a Materia in order to do something to "
		<< target.getName() << std::endl;
	return ;
}
