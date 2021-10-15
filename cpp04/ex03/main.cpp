#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

void	search_leaks(void)
{
	std::cout << std::endl << std::endl;
	system("leaks interfaces");
}

int	main(void)
{
	atexit(search_leaks);
	std::cout << std::endl;

	Character	pablo("Pablo");
	Character	carla("Carla");
	AMateria*	cura = new Cure();
	AMateria*	hielo = new Ice();
	std::cout << std::endl;

	std::cout << std::endl;

	pablo.equip(cura);
	pablo.equip(cura);
	pablo.equip(cura);
	pablo.equip(cura);
	pablo.equip(cura);
	pablo.equip(hielo);
	carla.equip(hielo);
	std::cout << std::endl;
	pablo.use(0, pablo);
	pablo.use(1, pablo);
	pablo.use(2, pablo);
	pablo.use(3, pablo);
	pablo.use(4, pablo);
	carla.use(0, carla);

	std::cout << std::endl;
	pablo = carla;
	std::cout << std::endl;
	pablo.use(0, pablo);
	pablo.use(1, pablo);
	pablo.use(2, pablo);
	carla.use(0, carla);
	carla.use(1, carla);


	std::cout << std::endl << std::endl;
	delete cura;
	delete hielo;
	return (0);
}
