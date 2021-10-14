#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int	main(void)
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	Animal*		animal[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
	int		count;

	std::cout << std::endl << std::endl;

	animal[0]->clone(j);
	animal[1]->clone(j);
	animal[2]->clone(i);
	animal[3]->clone(i);
	std::cout << "j --> " << j->getType() << " --> "<< j << "   BRAIN--> " << j->getBrain() << std::endl;
	std::cout << "i --> " << i->getType() << " --> "<< i << "   BRAIN--> " << i->getBrain() << std::endl;
	std::cout << animal[0]->getType() << " --------> " << animal[0] << "   BRAIN--> " << animal[0]->getBrain() << std::endl;
	std::cout << animal[1]->getType() << " --------> " << animal[1] << "   BRAIN--> " << animal[1]->getBrain() << std::endl;
	std::cout << animal[2]->getType() << " --------> " << animal[2] << "   BRAIN--> " << animal[2]->getBrain() << std::endl;
	std::cout << animal[3]->getType() << " --------> " << animal[3] << "   BRAIN--> " << animal[3]->getBrain() << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << "START OF LOOP" << std::endl;
	count = 0;
	while (count < 4)
	{
		delete animal[count];
		count++;
	}

	std::cout << std::endl << std::endl;
	delete j;
	delete i;
	system("leaks call_animals");
	return (0);
}
