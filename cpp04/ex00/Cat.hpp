#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & cat);
		~Cat(void);

		Cat&	operator=(Cat const & cat);

		void	makeSound(void) const;
};

#endif
