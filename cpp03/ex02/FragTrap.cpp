#include "FragTrap.hpp"

/**
 ** Default constructor for a FragTrap object ~ Canonical Form
 ** Constructor with the name of the FragTrap object
 ** Copy constructor ~ Canonical Form
 **/

FragTrap::FragTrap(void)
{
	std::cout << "Default FragTrap has come to life! $)" << std::endl;
	this->_max_hp = 100;
	this->_max_ep = 100;
	this->_hitpoints = this->_max_hp;
	this->_energy_points = this->_max_ep;
	this->_attack_damage = 30;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << name << " FragTrap has come to life! $)" << std::endl;
	this->_name = name;
	this->_max_hp = 100;
	this->_max_ep = 100;
	this->_hitpoints = this->_max_hp;
	this->_energy_points = this->_max_ep;
	this->_attack_damage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const & fragtrap)
{
	*this = fragtrap;
	std::cout << this->_name << " FragTrap has called his Big Brother!"
		<< " Now there are two of them!" << std::endl;
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

void		FragTrap::highFivesGuys(void)
{
	if (this->_energy_points > 0)
	{
		this->_energy_points -= 2;
		std::cout << "Hey Hello!! Want to high five? :))" << std::endl;
	}
	else
		std::cout << this->_name << " FragTrap is recovering energy..." << std::endl;
	return ;
}
