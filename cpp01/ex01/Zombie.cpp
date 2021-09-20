#include "Zombie.hpp"

/**
 ** Create an object of Zombie class
 ** Give a name to the new Zombie
 **/

Zombie::Zombie(std::string name)
{
	this->_name = name;
	return ;
}

/**
 ** Create an object of Zombie class
 ** withouth giving a name
 **/

Zombie::Zombie(void)
{
	return ;
}

/**
 ** Destroy an instance of Zombie
 ** Print a debugging message
 **/

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " is totally dead" << std::endl;
	return ;
}

/**
 ** Give a name to a Zombie
 **/

void	Zombie::set_name(std::string name)
{
	this->_name = name;
	return ;
}

/**
 ** Announce a zombie
 **/

void	Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
