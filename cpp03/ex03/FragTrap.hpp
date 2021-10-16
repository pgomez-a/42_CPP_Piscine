#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap const & fragtrap);
		~FragTrap(void);

		FragTrap&	operator=(FragTrap const & fragtrap);

		void		highFivesGuys(void) const;

	protected:
		FragTrap(void);
};

#endif
