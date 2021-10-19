/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:09:01 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/19 16:09:02 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

static void	diamond_attack_diamond(DiamondTrap& diamondOne, DiamondTrap& diamondTwo)
{
	std::cout << std::endl;
	diamondOne.attack(diamondTwo.getName());
	diamondTwo.takeDamage(diamondOne.getDamage());
	std::cout << std::endl;
}

static void	search_leaks(void)
{
	system("leaks Aaaaand...");
}

int	main(void)
{
	DiamondTrap	diamondOne("Dall-E");
	DiamondTrap	diamondTwo("Wall-0");
	DiamondTrap	diamondThree(diamondOne);

	atexit(search_leaks);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "------- DIAMOND ATTACK DIAMOND -------" << std::endl;
	std::cout << std::endl;

	diamond_attack_diamond(diamondOne, diamondTwo);
	diamond_attack_diamond(diamondOne, diamondTwo);
	diamond_attack_diamond(diamondOne, diamondTwo);
	diamond_attack_diamond(diamondTwo, diamondOne);
	diamond_attack_diamond(diamondOne, diamondTwo);
	diamond_attack_diamond(diamondOne, diamondTwo);
	diamondTwo.beRepaired(5);
	diamond_attack_diamond(diamondOne, diamondTwo);
	diamondOne.whoAmI();
	diamondTwo.whoAmI();

	std::cout << std::endl;
	std::cout << "------- DIAMOND ------ DIAMOND -------" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	return (0);
}
