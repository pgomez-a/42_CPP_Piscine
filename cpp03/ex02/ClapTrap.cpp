/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:00:37 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/19 16:01:37 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**
 ** Default constructor for a ClapTrap object ~ Canonical Form
 ** Constuctor with the name of the ClapTrap object
 ** Copy constructor ~ Canonical Form
 **/

ClapTrap::ClapTrap(void) : _name("Default")
{
	std::cout << "Default ClapTrap has entered the game :)" << std::endl;
	this->_max_hp = 10;
	this->_max_ep = 10;
	this->_hitpoints = this->_max_hp;
	this->_energy_points = this->_max_ep;
	this->_attack_damage = 0;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << name << " ClapTrap has entered the game :)" << std::endl;
	this->_max_hp = 10;
	this->_max_ep = 10;
	this->_hitpoints = this->_max_hp;
	this->_energy_points = this->_max_ep;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & claptrap)
{
	*this = claptrap;
	std::cout << "Replica of " << this->_name
		<< " ClapTrap has been created :O" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name
		<< " ClapTrap has decided to leave the game :(" << std::endl;
	return ;
}

/**
 ** Overload Assignation Operator ~ Canonical Form
 **/

ClapTrap&	ClapTrap::operator=(ClapTrap const & claptrap)
{
	this->_name = claptrap.getName();
	this->_hitpoints = claptrap.getHitPoints();
	this->_energy_points = claptrap.getEnergy();
	this->_attack_damage = claptrap.getDamage();
	this->_max_hp = claptrap.getMaxHP();
	this->_max_ep = claptrap.getMaxEP();
	return (*this);
}

/**
 ** Attack the specified target
 **/

void	ClapTrap::attack(std::string const & target) const
{
	if (this->_hitpoints > 0)
	{
		std::cout << this->_name << " ClapTrap attack " << target
			<< ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << this->_name << " ClapTrap has passed out! "
			<< this->_name << " ClapTrap can't attack " << target << "!" << std::endl;
	}
	return ;
}

/**
 ** Receive damage from another object
 **/

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints > 0)
	{
		if ((int)this->_hitpoints - (int)amount < 0)
			this->_hitpoints = 0;
		else
			this->_hitpoints -= amount;
		std::cout << this->_name << " ClapTrap has been damaged. Now it has "
			<< this->_hitpoints << " health points!" << std::endl;
	}
	else
	{
		std::cout << this->_name << " ClapTrap can't receive more damage! "
			<< this->_name << " ClapTrap has passed out!" << std::endl;
	}
	return ;
}

/**
 ** Recover some hitpoints so that ClapTrap can attack again
 **/

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitpoints += amount;
	if (this->_hitpoints > this->_max_hp)
		this->_hitpoints = this->_max_hp;
	std::cout << this->_name << " ClapTrap has been repaired. Now it has "
		<< this->_hitpoints << " health points!" << std::endl;
	return ;
}

/**
 ** Get different private values of ClapTrap object
 **/

std::string		ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getMaxHP(void) const
{
	return (this->_max_hp);
}

unsigned int	ClapTrap::getMaxEP(void) const
{
	return (this->_max_ep);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitpoints);
}

unsigned int	ClapTrap::getEnergy(void) const
{
	return (this->_energy_points);
}

unsigned int	ClapTrap::getDamage(void) const
{
	return (this->_attack_damage);
}
