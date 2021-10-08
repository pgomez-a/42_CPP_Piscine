#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diamondOne("Dall-E");
	std::cout << std::endl;
	diamondOne.attack("Wall-0");

	std::cout << std::endl;
	return (0);
}
