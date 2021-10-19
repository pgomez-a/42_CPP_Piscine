/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:06:38 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/19 16:07:17 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/**
 ** Default Constructor ~ Canonical Form
 ** Name constructor ~ ScavTrap is initialized with a name
 ** Copy Constructor ~ Canonical Form
 **/

ScavTrap::ScavTrap(void) : ClapTrap("Default")
{
	std::cout << "Default ScavTrap has evolved from ClapTrap :)" << std::endl;
	this->_max_hp = 100;
	this->_max_ep = 50;
	this->_hitpoints = this->_max_hp;
	this->_energy_points = this->_max_ep;
	this->_attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << name << " ScavTrap has evolved from ClapTrap :)" << std::endl;
	this->_max_hp = 100;
	this->_max_ep = 50;
	this->_hitpoints = this->_max_hp;
	this->_energy_points = this->_max_ep;
	this->_attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & scavtrap)
{
	std::cout << this->_name << " ScavTrap has been duplicated!! :(" << std::endl;
	*this = scavtrap;
	return ;
}

/**
 ** Destructor for ScavTrap object ~ Canonical Form
 **/

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_name << " ScavTrap has run away from the game!" << std::endl;
	return ;
}

/**
 ** Overload Assignation Operator ~ Canonical Form
 **/

ScavTrap&	ScavTrap::operator=(ScavTrap const & scavtrap)
{
	this->_name = scavtrap.getName();
	this->_hitpoints = scavtrap.getHitPoints();
	this->_energy_points = scavtrap.getEnergy();
	this->_attack_damage = scavtrap.getDamage();
	this->_max_hp = scavtrap.getMaxHP();
	this->_max_ep = scavtrap.getMaxEP();
	return (*this);
}

/**
 ** ScavTrap attack reducing the hitpoints of its oponents
 **/

void	ScavTrap::attack(std::string const & target) const
{
	if (this->_hitpoints > 0)
	{
		std::cout << this->_name << " ScavTrap attack " << target
			<< ", causing " << this->_attack_damage << " damage points!" << std::endl;
	}
	else
	{
		std::cout << this->_name << " ScavTrap is not conscious! "
			<< this->_name << " ScavTrap must sleep before attacking..." << std::endl;
	}
	return ;
}

/**
 ** Special function for ScavTrap that consume some energy points
 **/

void	ScavTrap::guardGate(void)
{
	if (this->_energy_points > 0)
	{
		if ((int)this->_energy_points - 10 < 0)
			this->_energy_points = 0;
		else
			this->_energy_points -= 10;
		std::cout << this->_name << " ScavTrap has entered in Gatekeeper mode! "
			<< this->_name << " ScavTrap has consume 5 energy points! XD" << std::endl;
	}
	else
	{
		std::cout << this->_name << " ScavTrap doesn't have enough energy! "
			<< this->_name << " ScavTrap can't entered in Gatekeeper mode!" << std::endl;
	}
	return ;
}
