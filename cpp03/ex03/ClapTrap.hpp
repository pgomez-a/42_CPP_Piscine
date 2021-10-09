#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & claptrap);
		~ClapTrap(void);

		ClapTrap&	operator=(ClapTrap const & claptrap);

		virtual void	attack(std::string const & target) const;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		std::string	getName(void) const;
		unsigned int	getMaxHP(void) const;
		unsigned int	getMaxEP(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getDamage(void) const;

	protected:
		std::string	_name;
		unsigned int	_hitpoints;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

		unsigned int	_max_hp;
		unsigned int	_max_ep;
};

#endif
