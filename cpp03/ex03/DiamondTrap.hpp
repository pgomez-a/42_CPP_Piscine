#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class	DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & diamondtrap);
		~DiamondTrap(void);

		DiamondTrap&	operator=(DiamondTrap const & diamondtrap);

		void	attack(std::string const & target) const;
		void	whoAmI(void) const;

		std::string	getName(void) const;

	private:
		DiamondTrap(void);

		std::string	_name;
};

#endif
