/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:57:41 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/19 15:59:06 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

static void	Scav_Attack_Scav(ScavTrap& maquinaUno, ScavTrap& maquinaDos)
{
	std::cout << std::endl;
	maquinaUno.attack(maquinaDos.getName());
	maquinaDos.takeDamage(maquinaUno.getDamage());
	std::cout << std::endl;
	return ;
}

static void	Scav_Attack_Clap(ScavTrap& maquinaUno, ClapTrap& robotUno)
{
	std::cout << std::endl;
	maquinaUno.attack(robotUno.getName());
	robotUno.takeDamage(maquinaUno.getDamage());
	std::cout << std::endl;
}

static void	Clap_Attack_Scav(ClapTrap& robotUno, ScavTrap& maquinaUno)
{
	std::cout << std::endl;
	robotUno.attack(maquinaUno.getName());
	maquinaUno.takeDamage(robotUno.getDamage());
	std::cout << std::endl;
}

void	search_leaks(void)
{
	system("leaks Aaaaand...");
}

int	main(void)
{
	atexit(search_leaks);
	{
		std::cout << "------- SCAV TRAP vs SCAV TRAP -------" << std::endl;
		ScavTrap	maquinaUno("Dek-U");
		ScavTrap	maquinaDos("Todo-RK");
		
		Scav_Attack_Scav(maquinaUno, maquinaDos);
		maquinaDos.beRepaired(5);
		Scav_Attack_Scav(maquinaDos, maquinaUno);
		Scav_Attack_Scav(maquinaDos, maquinaUno);
		maquinaUno.guardGate();
		maquinaUno.beRepaired(2);
		Scav_Attack_Scav(maquinaDos, maquinaUno);
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	{
		std::cout << "------- SCAV TRAP vs CLAP TRAP -------" << std::endl;
		ScavTrap	maquinaUno("Wall-e");
		ClapTrap	robotUno("Co-W");

		Clap_Attack_Scav(robotUno, maquinaUno);
		Scav_Attack_Clap(maquinaUno, robotUno);
		Scav_Attack_Clap(maquinaUno, robotUno);
		Clap_Attack_Scav(robotUno, maquinaUno);
		maquinaUno.guardGate();
		maquinaUno.guardGate();
		maquinaUno.guardGate();
		maquinaUno.guardGate();
		maquinaUno.guardGate();
		maquinaUno.guardGate();
		std::cout << std::endl;
		robotUno.beRepaired(5);
	}
	std::cout << std::endl;
	return (0);
}
