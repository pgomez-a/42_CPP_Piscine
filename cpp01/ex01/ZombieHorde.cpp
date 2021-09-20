#include "Zombie.hpp"

/**
 ** Create a horde of Zombies
 **/

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	horde = new Zombie[N];
	Zombie*	temp_horde;

	temp_horde = horde;
	while (N > 0)
	{
		temp_horde->set_name(name);
		temp_horde++;
		N--;
	}
	return (horde);
}
