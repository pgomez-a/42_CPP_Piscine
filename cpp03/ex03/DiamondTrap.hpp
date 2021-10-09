#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class	DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & diamondtrap);
		~DiamondTrap(void);

		DiamondTrap&	operator=(DiamondTrap const & diamondtrap);

		void	attack(std::string const & target) const;
		void	whoAmI(void) const;

		std::string	getName(void) const;

	private:
		std::string	_name;
};

#endif
