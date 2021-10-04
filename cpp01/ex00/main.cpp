/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:06:03 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/04 15:09:29 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie*	zombie_one;
	Zombie*	zombie_two;

	zombie_one = newZombie("Heap1");
	zombie_one->announce();
	delete zombie_one;
	zombie_one = newZombie("Heap2");
	zombie_two = newZombie("Heap3");
	zombie_one->announce();
	zombie_two->announce();
	randomChump("Stack1");
	randomChump("Stack2");
	delete zombie_two;
	randomChump("Stack3");
	delete zombie_one;
	return (0);
}
