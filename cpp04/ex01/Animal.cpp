#include "Animal.hpp"

/**
 ** Default Constructor
 ** Constructor with Animal Type
 ** Copy Constructor ~ Copy the type of the Animal object
 **/

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Heyy!! An Animal was born!! :)" << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Heyy!! " << this->_type << " Animal was born!! :)" << std::endl;
	return ;
}

Animal::Animal(Animal const & animal)
{
	std::cout << "Heyy!! " << this->_type << " Animal is in two places!!!"
		<< " What kind of universe is this?" << std::endl;
	*this = animal;
	return ;
}

/**
 ** Default Destructor
 **/

Animal::~Animal(void)
{
	std::cout << "Ohh... " << this->_type
		<< "Animal  has decided to leave this universe... :(" << std::endl;
	return ;
}

/**
 ** Assignation Operator Overload
 **/
Animal&	Animal::operator=(Animal const & animal)
{
	this->_type = animal.getType();
	return (*this);
}

/**
 ** Make a sound to be identified by other animals :)
 **/

void	Animal::makeSound(void) const
{
	std::cout << this->_type
		<< " Animal hasn't learned to make a sound yet..." << std::endl;
	return ;
}

/**
 ** Return the type of an Animal object
 **/

std::string	Animal::getType(void) const
{
	return (this->_type);
}
