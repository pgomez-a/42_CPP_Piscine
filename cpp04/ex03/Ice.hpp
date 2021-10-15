#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const & ice);
		~Ice(void);

		Ice&	operator=(Ice const & ice);

		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
