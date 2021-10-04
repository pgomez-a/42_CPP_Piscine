/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:12:07 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 15:14:03 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 ** Create an object of Zombie class
 ** withouth giving a name
 **/

Zombie::Zombie(void)
{
	return ;
}

/**
 ** Create an object of Zombie class
 ** Give a name to the new Zombie
 **/

Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

/**
 ** Destroy an instance of Zombie
 ** Print a debugging message
 **/

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " is totally dead" << std::endl;
	return ;
}

/**
 ** Give a name to a Zombie
 **/

void	Zombie::set_name(std::string name)
{
	this->_name = name;
	return ;
}

/**
 ** Announce a zombie
 **/

void	Zombie::announce(void) const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
