/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:01:43 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 15:01:44 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 ** Create an object of Zombie class
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
 ** Announce a zombie
 **/

void	Zombie::announce(void) const
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
