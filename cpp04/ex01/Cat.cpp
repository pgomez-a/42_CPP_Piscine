#include "Cat.hpp"

/**
 ** Default Constructor
 ** Copy Constructor ~ Creates a "Cat" object
 **/

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Wooow! The baby animal is a Cat!!" << std::endl;
	this->_brain = new Brain();
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
	std::cout << "Mmmm... " << this->_type
		<< " thinks taht is better than us" << std::endl;
	delete this->_brain;
	return ;
}

/**
 ** Assignation Opeartor Overload
 **/

Cat&	Cat::operator=(Cat const & cat)
{
	std::cout << "Start of CAT DEEP COPY" << std::endl;
	this->_type = cat.getType();
	this->_brain = new Brain();
	*(this->_brain) = *(cat.getBrain());
	std::cout << "this->_brain --> " << this->_brain << std::endl;
	std::cout << "cat.getBrain()) --> " << cat.getBrain() << std::endl;
	std::cout << "End of CAT DEEP COPY" << std::endl;
	return (*this);
}

/**
 ** Specific sound for a Cat object
 **/

void	Cat::makeSound(void) const
{
	std::cout << this->_type
		<< " can't stop t... MIAU MIAU MIAU" << std::endl;
	return ;
}

/**
 ** Get the brain of a Cat object ~ Uuuu... scary... !
 **/

Brain*	Cat::getBrain(void) const
{
	return (this->_brain);
}
