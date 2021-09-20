#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie*	zombie_in_heap;

	zombie_in_heap = newZombie("Heapp");
	zombie_in_heap->announce();
	randomChump("Stack");
	zombie_in_heap->announce();
	delete zombie_in_heap;
}
