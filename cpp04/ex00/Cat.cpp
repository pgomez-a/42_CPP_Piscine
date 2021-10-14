#include "Cat.hpp"

/**
 ** Default Constructor
 ** Copy Constructor ~ Creates a "Cat" object
 **/

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Wooow! The baby animal is a Cat!!" << std::endl;
	return ;
}

Cat::Cat(Cat const & cat)
{
	std::cout << "BRILLIANT! Copy Cat has been made!!" << std::endl;
	*this = cat;
	return ;
}

/**
 ** Default Desctructor
 **/

Cat::~Cat(void)
{
	std::cout << "Mmmm... Cat thinks that is better than us" << std::endl;
	return ;
}

/**
 ** Assignation Opeartor Overload
 **/

Cat&	Cat::operator=(Cat const & cat)
{
	this->_type = cat.getType();
	return (*this);
}

/**
 ** Specific sound for a Cat object
 **/

void	Cat::makeSound(void) const
{
	std::cout << "Cat can't stop t... MIAU MIAU MIAU" << std::endl;
	return ;
}
