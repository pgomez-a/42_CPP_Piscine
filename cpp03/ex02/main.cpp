#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

static void	Frag_Attack_Scav(FragTrap& robotUno, ScavTrap& robotDos)
{
	std::cout << std::endl;
	robotUno.attack(robotDos.getName());
	robotDos.takeDamage(robotUno.getDamage());
	std::cout << std::endl;
	return ;
}

static void	Scav_Attack_Frag(ScavTrap& maquinaUno, FragTrap& maquinaDos)
{
	std::cout << std::endl;
	maquinaUno.attack(maquinaDos.getName());
	maquinaDos.takeDamage(maquinaUno.getDamage());
	std::cout << std::endl;
	return ;
}

static void	Frag_Attack_Frag(FragTrap& chatarraUno, FragTrap& chatarraDos)
{
	std::cout << std::endl;
	chatarraUno.attack(chatarraDos.getName());
	chatarraDos.takeDamage(chatarraUno.getDamage());
	std::cout << std::endl;
	return ;
}

int	main(void)
{
	{
		std::cout << "------- FRAG TRAP vs FRAG TRAP -------" << std::endl;
		FragTrap	chatarraUno("Chat-U");
		FragTrap	chatarraDos("No-P");

		Frag_Attack_Frag(chatarraUno, chatarraDos);
		Frag_Attack_Frag(chatarraDos, chatarraUno);
		chatarraDos.highFivesGuys();
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		std::cout << "------- SCAV TRAP vs FRAG TRAP -------" << std::endl;
		FragTrap	chatarraUno("Dad-O");
		ScavTrap	maquinaUno("Dona-LD");

		Frag_Attack_Scav(chatarraUno, maquinaUno);
		Frag_Attack_Scav(chatarraUno, maquinaUno);
		maquinaUno.beRepaired(30);
		Scav_Attack_Frag(maquinaUno, chatarraUno);
		chatarraUno.highFivesGuys();
		chatarraUno.highFivesGuys();
		chatarraUno.highFivesGuys();
		chatarraUno.highFivesGuys();
		std::cout << std::endl;
	}
	return (0);
}
