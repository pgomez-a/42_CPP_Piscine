#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class	Character : public ICharacter
{
	protected:
		Character(void);

		std::string	name;
		AMateria*	materia[4];
		int		idx;

	public:
		Character(std::string const & name);
		Character(Character const & character);
		~Character(void);

		Character&	operator=(Character const & character);

		std::string const &	getName(void) const;
		void			equip(AMateria* m);
		void			unequip(int idx);
		void			use(int idx, ICharacter& target);
};

#endif
