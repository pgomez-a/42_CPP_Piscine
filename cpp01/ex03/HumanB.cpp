/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:32:29 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 19:55:36 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/**
 ** Constructors of HumanB object
 ** Always take a name
 **/

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

/**
 ** Destructor of a HumanB object
 **/

HumanB::~HumanB(void)
{
	return ;
}

/**
 ** Print an attack message
 **/

void	HumanB::attack(void) const
{
	const std::string&	weapon_type = this->_weapon->getType();

	if (this->_weapon == NULL)
		std::cout << this->_name << " attacks withouth weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << weapon_type << std::endl;
	return ;
}

/**
 ** Set a weapon object to a HumanB object
 ** It takes an address, not a reference
 **/

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
	return ;
}
