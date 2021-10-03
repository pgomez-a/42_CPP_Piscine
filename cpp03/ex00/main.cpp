#include "ClapTrap.hpp"

static void	attack(ClapTrap& robotUno, ClapTrap& robotDos)
{
	robotUno.attack(robotDos.getName());
	robotDos.takeDamage(robotUno.getDamage());
}

int	main(void)
{
	ClapTrap	robotUno("Basur-O");
	ClapTrap	robotDos("Wall-E");

	attack(robotUno, robotDos);
	attack(robotDos, robotUno);
	robotUno.beRepaired(3);
	return (0);
}
