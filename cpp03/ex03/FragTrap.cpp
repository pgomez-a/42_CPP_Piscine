#include "FragTrap.hpp"

/**
 ** Default constructor for a FragTrap object ~ Canonical Form
 ** Constructor with the name of the FragTrap object
 ** Copy constructor ~ Canonical Form
 **/

FragTrap::FragTrap(void) : ClapTrap("Default")
{
	std::cout << "Default FragTrap has come to life! $)" << std::endl;
	this->_name = "Default";
	this->_max_hp = 100;
	this->_max_ep = 100;
	this->_hitpoints = this->_max_hp;
	this->_energy_points = this->_max_ep;
	this->_attack_damage = 30;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << name << " FragTrap has come to life! $)" << std::endl;
	this->_max_hp = 100;
	this->_max_ep = 100;
	this->_hitpoints = this->_max_hp;
	this->_energy_points = this->_max_ep;
	this->_attack_damage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const & fragtrap)
{
	std::cout << this->_name << " FragTrap has called his Big Brother!"
		<< " Now there are two of them!" << std::endl;
	*this = fragtrap;
	return ;
}

/**
 ** Destructor for FragTrap object ~ Canonical Form
 **/

FragTrap::~FragTrap(void)
{
	std::cout << this->_name << " FragTrap is a little scared..." << std::endl;
	return ;
}

/**
 ** Overload Assignation Operator ~ Canonical Form
 **/

FragTrap&	FragTrap::operator=(FragTrap const & fragtrap)
{
	this->_name = fragtrap.getName();
	this->_max_hp = fragtrap.getMaxHP();
	this->_max_ep = fragtrap.getMaxEP();
	this->_hitpoints = fragtrap.getHitPoints();
	this->_energy_points = fragtrap.getEnergy();
	this->_attack_damage = fragtrap.getDamage();
	return (*this);
}

/**
 ** Display a positive high fives request on stdout
 **/

void		FragTrap::highFivesGuys(void) const
{
	std::cout << "Hey Hello!! Want to high five? :))" << std::endl;
	return ;
}
