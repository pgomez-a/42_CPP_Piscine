#include "Zombie.hpp"

/**
 ** Create a new zombie allocating memory on heap
 ** because it has to be returned
 **/

Zombie*	newZombie(std::string name)
{
	Zombie*	zombie = new Zombie(name);

	return (zombie);
}
