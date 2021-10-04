/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:15:20 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 15:20:15 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 ** Create a horde of Zombies
 **/

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	horde = new Zombie[N];
	int		count;

	count = 0;
	while (count < N)
	{
		horde[count].set_name(name);
		count++;
	}
	return (horde);
}
