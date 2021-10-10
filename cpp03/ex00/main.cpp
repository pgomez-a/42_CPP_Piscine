#include "ClapTrap.hpp"

static void	attack(ClapTrap& robotUno, ClapTrap& robotDos)
{
	std::cout << std::endl;
	robotUno.attack(robotDos.getName());
	robotDos.takeDamage(robotUno.getDamage());
	std::cout << std::endl;
}

int	main(void)
{
	ClapTrap	robotUno("Basur-O");
	ClapTrap	robotDos("Wall-E");
	ClapTrap	robotTres("Dall-E");

	std::cout << std::endl;

	attack(robotUno, robotDos);
	attack(robotDos, robotUno);
	robotUno.beRepaired(3);
	attack(robotTres, robotUno);

	std::cout << std::endl;
	return (0);
}
