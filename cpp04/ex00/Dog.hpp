#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const & dog);
		~Dog(void);

		Dog&	operator=(Dog const & dog);

		void	makeSound(void) const;
};

#endif
