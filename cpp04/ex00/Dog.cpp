#include "Dog.hpp"

/**
 ** Default Constructor
 ** Copy Constructor ~ Creates a "Dog" object
 **/

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "The animal that has just been born is a Dog!!" << std::endl;
	return ;
}

Dog::Dog(Dog const & dog)
{
	std::cout << "AMAZING! The copied animal is a DOG!! 8)" << std::endl;
	*this = dog;
	return ;
}

/**
 ** Default Destructor
 **/

Dog::~Dog(void)
{
	std::cout << "Ups, " << this->_type
		<< " is not happy with us... :(" << std::endl;
	return ;
}

/**
 ** Assignation Operator Overload
 **/

Dog&	Dog::operator=(Dog const & dog)
{
	this->_type = dog.getType();
	return (*this);
}

/**
 ** Specific sound for a Dog object
 **/

void	Dog::makeSound(void) const
{
	std::cout << this->_type
		<< " wants to say WOOF WOFF WOOF!!" << std::endl;
	return ;
}
