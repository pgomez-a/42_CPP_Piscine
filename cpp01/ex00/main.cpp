#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie*	zombie_one;
	Zombie*	zombie_two;

	zombie_one = newZombie("Heap1");
	zombie_one->announce();
	delete zombie_one;
	zombie_one = newZombie("Heap2");
	zombie_two = newZombie("Heap3");
	zombie_one->announce();
	zombie_two->announce();
	randomChump("Stack1");
	randomChump("Stack2");
	delete zombie_two;
	randomChump("Stack3");
	delete zombie_one;
	return (0);
}
