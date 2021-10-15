#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const & cure);
		~Cure(void);

		Cure&	operator=(Cure const & cure);

		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
