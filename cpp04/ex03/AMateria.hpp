#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>


class	AMateria
{
	protected:
		AMateria(void);

		std::string	type;

	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & materia);
		virtual ~AMateria(void);

		AMateria&	operator=(AMateria const & materia);

		std::string const & 	getType(void) const;

		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
};

#endif
