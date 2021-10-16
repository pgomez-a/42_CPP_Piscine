#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class	ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & scavtrap);
		~ScavTrap(void);

		ScavTrap&	operator=(ScavTrap const & scavtrap);

		void		attack(std::string const & target) const;
		void		guardGate(void);

	protected:
		ScavTrap(void);
};

#endif
