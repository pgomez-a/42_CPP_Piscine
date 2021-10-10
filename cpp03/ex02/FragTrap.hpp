#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"
# include <iostream>

class	FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & fragtrap);
		~FragTrap(void);

		FragTrap&	operator=(FragTrap const & fragtrap);

		void		highFivesGuys(void) const;
};

#endif
