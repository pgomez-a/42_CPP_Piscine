#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

static void	search_leaks(void)
{
	system("leaks call_animals");
}

int	main(void)
{
	atexit(search_leaks);
	{
		const Animal*	meta = new Animal();
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();

		std::cout << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();

		std::cout << std::endl;
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{
		const WrongAnimal*	meta = new WrongAnimal();
		const WrongAnimal*	j = new WrongCat();

		std::cout << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		j->makeSound();
		meta->makeSound();

		std::cout << std::endl;
		delete meta;
		delete j;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	return (0);
}
