/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:04:36 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 15:04:38 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 ** Create a new zombie allocating memory on heap
 ** because it has to be returned
 **/

Zombie*	newZombie(std::string name)
{
	Zombie*	zombie = new Zombie(name);

	return (zombie);
}
