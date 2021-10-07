#include "ClapTrap.hpp"

static void	attack(ClapTrap& robotUno, ClapTrap& robotDos)
{
	robotUno.attack(robotDos.getName());
	robotDos.takeDamage(robotUno.getDamage());
	std::cout << std::endl;
}

int	main(void)
{
	ClapTrap	robotUno("Basur-O");
	ClapTrap	robotDos("Wall-E");

	attack(robotUno, robotDos);
	attack(robotDos, robotUno);
	robotUno.beRepaired(3);

	std::cout << std::endl;
	ClapTrap	robotTres("Dall-E");

	attack(robotTres, robotUno);

	std::cout << std::endl;
	return (0);
}
