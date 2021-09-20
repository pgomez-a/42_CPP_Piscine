#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie*	horde;
	Zombie*	temp_horde;
	int	size;

	size = 5;
	horde = zombieHorde(size, "Pablo");
	temp_horde = horde;
	while (size > 0)
	{
		temp_horde->announce();
		temp_horde++;
		size--;
	}
	delete [] horde;
	return (0);
}
