#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"
# include <iostream>

class	Animal
{
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const & animal);
		virtual	~Animal(void);

		Animal&		operator=(Animal const & animal);

		std::string	getType(void) const;
		virtual void	makeSound(void) const;
		virtual Brain*	getBrain(void) const = 0;

	protected:
		std::string	_type;
};

#endif
