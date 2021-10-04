/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:28:05 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 15:28:09 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/**
 ** Constructor of a weapon object
 ** It always take a type
 **/

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

/**
 ** Destructor of a weapon object
 **/

Weapon::~Weapon(void)
{
	return ;
}

/**
 ** Get the type of a weapon
 **/

const std::string&	Weapon::getType(void) const
{
	const std::string&	type = this->_type;
	return (type);
}

/**
 ** Set the type of a weapon
 **/

void		Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}
