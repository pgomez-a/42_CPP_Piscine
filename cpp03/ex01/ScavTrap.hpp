#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <iostream>

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & scavtrap);
		~ScavTrap(void);

		ScavTrap&	operator=(ScavTrap const & scavtrap);

		void		attack(std::string const & target) const;
		void		guardGate(void);
};

#endif
