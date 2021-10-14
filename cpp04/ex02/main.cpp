#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main(void)
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	const Animal*	animal[4] = {new Dog(*j), new Dog(*j), new Cat(*i), new Cat(*i)};
	int		count;

	std::cout << std::endl << std::endl;

	std::cout << "j ------> " << j << " -> " << j->getBrain() << std::endl;
	std::cout << "i ------> " << i << " -> " << i->getBrain() << std::endl;
	count = 0;
	while (count < 4)
	{
		std::cout << "animal[" << count << "] " << animal[count]
			<< " -> " << animal[count]->getType()
			<< " -> " << animal[count]->getBrain()
			<< std::endl;
		count++;
	}

	std::cout << std::endl << std::endl;

	count = 0;
	while (count < 4)
	{
		delete(animal[count]);
		count++;
	}

	std::cout << std::endl << std::endl;

	delete j;
	delete i;
	return (0);
}