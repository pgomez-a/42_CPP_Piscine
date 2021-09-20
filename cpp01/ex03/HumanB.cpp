#include "HumanB.hpp"

/**
 ** Constructors of HumanB object
 ** Always take a name
 ** It can also take an address to a weapon
 **/

HumanB::HumanB(std::string name, Weapon& weapon)
{
	this->name = name;
	this->weapon = &weapon;
	return ;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	return ;
}

/**
 ** Destructor of a HumanB object
 **/

HumanB::~HumanB(void)
{
	return ;
}

/**
 ** Print an attack message
 **/

void	HumanB::attack(void) const
{
	std::string	weapon_type;

	weapon_type = this->weapon->getType();
	std::cout << this->name << " attacks with his " << weapon_type << std::endl;
	return ;
}

/**
 ** Set a weapon object to a HumanB object
 ** It takes an address, not a reference
 **/

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
	return ;
}
