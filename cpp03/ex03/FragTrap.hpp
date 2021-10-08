#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
# include <iostream>

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & fragtrap);
		~FragTrap(void);

		FragTrap&	operator=(FragTrap const & fragtrap);

		void		attack(std::string const & target);
		void		highFivesGuys(void);
};

#endif
