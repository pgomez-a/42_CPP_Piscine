#include "Weapon.hpp"

/**
 ** Constructor of a weapon object
 ** It always take a type
 **/

Weapon::Weapon(std::string type)
{
	this->type = type;
	return ;
}

/**
 ** Destructor of a weapon object
 **/

Weapon::~Weapon(void)
{
	return ;
}

/**
 ** Get the type of a weapon
 **/

std::string&	Weapon::getType(void)
{
	std::string&	type = this->type;
	return (type);
}

/**
 ** Set the type of a weapon
 **/

void		Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}
