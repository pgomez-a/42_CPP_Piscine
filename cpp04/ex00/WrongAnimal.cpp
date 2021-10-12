#include "WrongAnimal.hpp"

/**
 ** Default Constructor
 ** Constructor with WrongAnimal type
 ** Copy Constructor ~ Copy the type of the Animal Object
 **/

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "Noo!! Wrong Animal is here!!" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "Noo!! Wrong " << this->_type
		<< " is here!!" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & animal)
{
	std::cout << "Oh no! " << this->_type
		<< " is making copies of itself!" << std::endl;
	*this = animal;
	return ;
}

/**
 **  Default Destructor
 **/

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Hurrah!! " << this->_type
		<< " has run away..." << std::endl;
	return ;
}

/**
 ** Assignation Operator Overload
 **/

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & animal)
{
	this->_type = animal.getType();
	return (*this);
}

/**
 ** Make a sound to be identified by other animals :)
 **/

void		WrongAnimal::makeSound(void) const
{
	std::cout << "BOOO HOOOOO" << std::endl;
	return ;
}

/**
 ** Return the type of a WrongAnimal object
 **/

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
