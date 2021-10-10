#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void	diamond_attack_diamond(DiamondTrap& diamondOne, DiamondTrap& diamondTwo)
{
	std::cout << std::endl;
	diamondOne.attack(diamondTwo.getName());
	diamondTwo.takeDamage(diamondOne.getDamage());
	std::cout << std::endl;
}

int	main(void)
{
	DiamondTrap	diamondOne("Dall-E");
	DiamondTrap	diamondTwo("Wall-0");

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
