#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & cat);
		Cat(Animal const & animal);
		~Cat(void);

		Cat&	operator=(Cat const & cat);

		void	makeSound(void) const;
		Brain*	getBrain(void) const;

	private:
		Brain*	_brain;
};

#endif
