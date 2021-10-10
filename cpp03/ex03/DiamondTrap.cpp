#include "DiamondTrap.hpp"

/**
 ** Default Constructor ~ Canonical Form
 ** Name constructor ~ Diamond is initialized with a name
 ** Copy Constructor ~ Canonical Form
 **/

DiamondTrap::DiamondTrap(void) : ClapTrap("Default_clap_name")
{
	FragTrap	fragtrap("temp");

	std::cout << "Default DiamondTrap has woken up...!!" << std::endl;
	this->_name = "Default";
	this->_max_hp = fragtrap.getHitPoints();
	this->_max_ep = ScavTrap::_energy_points;
	this->_hitpoints = this->_max_hp;;
	this->_energy_points= this->_max_ep;
	this->_attack_damage = fragtrap.getDamage();
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	FragTrap	fragtrap("temp");

	std::cout << name << " DiamondTrap has woken up...!!" << std::endl;
	this->_name = name;
	this->_max_hp = fragtrap.getHitPoints(); 
	this->_max_ep = ScavTrap::_energy_points;
	this->_hitpoints = this->_max_hp;
	this->_energy_points = this->_max_ep;
	this->_attack_damage = fragtrap.getDamage();
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & diamondtrap)
{
	*this = diamondtrap;
	std::cout << this->_name << " DiamondTrap is trying to multiply! "
		<< "NOW THERE ARE TWO!!!" << std::endl;
	return ;
}

/**
 ** Destructor for DiamondTrap object ~ Canonical Form
 **/

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Mysteriously, " << this->_name
		<< " has decided to leave the universe :)" << std::endl;
	return ;
}

/**
 ** Overload Assignation Operator ~ Canonical Form
 **/

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & diamondtrap)
{
	this->_name = diamondtrap.FragTrap::getName();
	return (*this);
}

/**
 ** DiamondTrap attacks using ScavTrap attack function
 **/

void		DiamondTrap::attack(std::string const & target) const
{
	this->ScavTrap::attack(target);
	return ;
}

/**
 ** DiamondTrap tell its name and its ClapTrap name
 **/

void		DiamondTrap::whoAmI(void) const
{
	std::cout << "Hi!! I am " << this->_name << " DiamondTrap,"
		<< " but people use to call me " << this->ClapTrap::_name
		<< " ClapTrap... I don't like it! :(" << std::endl;
	return ;
}

/**
 ** Get name of DiamondTrap, and not ClapTrap name
 **/

std::string	DiamondTrap::getName(void) const
{
	return (this->_name);
}