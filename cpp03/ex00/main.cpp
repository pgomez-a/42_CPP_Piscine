/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:51:13 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/19 15:51:14 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static void	attack(ClapTrap& robotUno, ClapTrap& robotDos)
{
	std::cout << std::endl;
	robotUno.attack(robotDos.getName());
	robotDos.takeDamage(robotUno.getDamage());
	std::cout << std::endl;
}

static void	search_leaks(void)
{
	system("leaks Aaaaand...");
}

int	main(void)
{
	ClapTrap	robotUno("Basur-O");
	ClapTrap	robotDos("Wall-E");
	ClapTrap	robotTres("Dall-E");

	atexit(search_leaks);
	std::cout << std::endl;

	attack(robotUno, robotDos);
	attack(robotDos, robotUno);
	robotUno.beRepaired(3);
	robotUno.beRepaired(3);
	attack(robotTres, robotUno);

	std::cout << std::endl;
	return (0);
}
