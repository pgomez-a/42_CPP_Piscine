#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include <iostream>

class	MateriaSource : public IMateriaSource
{
	protected:
		AMateria*	materia[4];
		int		idx;

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & source);
		~MateriaSource(void);

		MateriaSource&	operator=(MateriaSource const & source);

		void		learnMateria(AMateria* materia);
		AMateria*	createMateria(std::string const & type);
};

#endif
