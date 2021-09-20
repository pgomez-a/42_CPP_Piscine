#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class	HumanB
{
	public:
		Weapon*		weapon;
		std::string	name;

		HumanB(std::string name, Weapon& weapon);
		HumanB(std::string name);
		~HumanB(void);

		void	attack(void) const;
		void	setWeapon(Weapon& weapon);
};

#endif
