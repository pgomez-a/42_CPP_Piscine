#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class	HumanA
{
	public:
		Weapon&		weapon;
		std::string	name;

		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		void	attack(void) const;
};

#endif
