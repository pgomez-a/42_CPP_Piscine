/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:17:22 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 15:21:55 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie*	horde;
	int	size;
	int	count;

	size = 4;
	horde = zombieHorde(size, "Wall-E");
	count = 0;
	while (count < size)
	{
		horde[count].announce();
		count++;
	}
	delete [] horde;
	return (0);
}
