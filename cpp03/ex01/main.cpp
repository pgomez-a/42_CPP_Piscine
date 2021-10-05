#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

static void	Clap_Attack_Clap(ClapTrap& robotUno, ClapTrap& robotDos)
{
	robotUno.attack(robotDos.getName());
	robotDos.takeDamage(robotUno.getDamage());
	std::cout << std::endl;
	return ;
}

static void	Scav_Attack_Scav(ScavTrap& maquinaUno, ScavTrap& maquinaDos)
{
	maquinaUno.attack(maquinaDos.getName());
	maquinaDos.takeDamage(maquinaUno.getDamage());
	std::cout << std::endl;
	return ;
}

static void	Scav_Attack_Clap(ScavTrap& maquinaUno, ClapTrap& robotUno)
{
	maquinaUno.attack(robotUno.getName());
	robotUno.takeDamage(maquinaUno.getDamage());
	std::cout << std::endl;
}

static void	Clap_Attack_Scav(ClapTrap& robotUno, ScavTrap& maquinaUno)
{
	robotUno.attack(maquinaUno.getName());
	maquinaUno.takeDamage(robotUno.getDamage());
	std::cout << std::endl;
}

int	main(void)
{
	{
		std::cout << "------- CLAP TRAP vs CLAP TRAP -------" << std::endl;
		ClapTrap	robotUno("Wall-E");
		ClapTrap	robotDos("Basur-O");

		Clap_Attack_Clap(robotUno, robotDos);
		Clap_Attack_Clap(robotDos, robotUno);
		robotUno.beRepaired(2);
		robotUno.beRepaired(7);
		robotDos.beRepaired(30);
	}
	std::cout << std::endl;
	std::cout << std::endl;
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
		robotUno.beRepaired(5);
	}
	std::cout << std::endl;
	return (0);
}
