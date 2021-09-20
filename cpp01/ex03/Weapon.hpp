#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class	Weapon
{
	public:
		std::string	type;

		Weapon(std::string type);
		~Weapon(void);

		std::string&	getType(void);
		void		setType(std::string type);
};

#endif
