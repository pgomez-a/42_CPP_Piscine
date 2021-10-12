#include "Dog.hpp"

/**
 ** Default Constructor
 ** Copy Constructor ~ Creates a "Dog" object
 **/

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "The animal that has just been born is a Dog!!" << std::endl;
	this->_brain = new Brain();
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
	delete this->_brain;
	return ;
}

/**
 ** Assignation Operator Overload
 **/

Dog&	Dog::operator=(Dog const & dog)
{
	std::cout << "Start of DOG DEEP COPY" << std::endl;
	this->_type = dog.getType();
	this->_brain = new Brain();
	*(this->_brain) = *(dog.getBrain());
	std::cout << "this->_brain --> " << this->_brain << std::endl;
	std::cout << "this->_brain --> " << dog.getBrain() << std::endl;
	std::cout << "End of DOG DEEP COPY" << std::endl;
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

/**
 ** Get the brain of a Dog object ~ Uuuu... scary...!
 **/

Brain*	Dog::getBrain(void) const
{
	return (this->_brain);
}
