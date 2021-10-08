#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap("Default"), ScavTrap("Default")
{
	std::cout << "Default DiamondTrap has woken up...!!" << std::endl;
	this->_name = "Default";
	this->_max_hp = this->FragTrap::getMaxHP();
	this->_max_ep = this->ScavTrap::getMaxEP();
	this->_hitpoints = this->_max_hp;;
	this->_energy_points= this->_max_ep;
	this->_attack_damage = this->FragTrap::getDamage();
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	std::cout << name << " DiamondTrap has woken up...!!" << std::endl;
	this->_name = name;
	this->_max_hp = this->FragTrap::getMaxHP();
	this->_max_ep = this->ScavTrap::getMaxEP();
	this->_hitpoints = this->_max_hp;
	this->_energy_points = this->_max_ep;
	this->_attack_damage = this->FragTrap::getDamage();
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & diamondtrap)
{
	*this = diamondtrap;
	std::cout << this->_name << " DiamondTrap is trying to multiply! "
		<< "NOW THERE ARE TWO!!!" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Mysteriously, " << this->_name
		<< " has decided to leave the universe :)" << std::endl;
	return ;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & diamondtrap)
{
	this->_name = diamondtrap.FragTrap::getName();
	return (*this);
}

void		DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
	return ;
}

void		DiamondTrap::whoAmI(void)
{
	std::cout << "Hi!! I am " << this->_name << " DiamondTrap,"
		<< " but people use to call me " << this->ClapTrap::_name << "ClapTrap... :(" << std::endl;
	return ;
}
