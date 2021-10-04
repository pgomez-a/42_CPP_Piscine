/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:29:28 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 15:29:29 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/**
 ** Constructor of HumanA object
 ** Always take a name and a reference to a weapon
 **/

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon)
{
	this->_name = name;
	return ;
}

/**
 ** Destructor of a HumanA object
 **/

HumanA::~HumanA(void)
{
	return ;
}

/**
 ** Print an attack message
 **/

void	HumanA::attack(void) const
{
	const std::string&	weapon_type = this->_weapon.getType();

	std::cout << this->_name << " attacks with his " << weapon_type << std::endl;
	return ;
}
