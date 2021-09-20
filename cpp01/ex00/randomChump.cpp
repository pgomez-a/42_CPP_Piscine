#include "Zombie.hpp"

/**
 ** Create a zombie and announce it
 ** Allocate memory on stack because it won't be returned
 **/

void	randomChump(std::string name)
{
	Zombie	zombie(name);

	zombie.announce();
	return ;
}
