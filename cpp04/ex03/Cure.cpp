#include "Cure.hpp"

/**
 ** Default Constructor
 **/

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure Default Destructor has been called" << std::endl;
	return ;
}

Cure::Cure(Cure const & cure) : AMateria("cure")
{
	std::cout << cure.getType() << " Copy Constructor has been called" << std::endl;
	return ;
}

/**
 ** Default Desctructor
 **/

Cure::~Cure(void)
{
	std::cout << "Cure Destructor has been called" << std::endl;
	return ;
}

/**
 ** Assignation Operator Overload
 **/

Cure&	Cure::operator=(Cure const & cure)
{
	(void)cure;
	return (*this);
}

/**
 ** Return a new instance of the real Materia's type
 **/

AMateria*	Cure::clone(void) const
{
	AMateria*	cure = new Cure();

	return(cure);
}

/**
 ** Specific function for Cure Class
 **/

void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName()
		<< "'s wounds *" << std::endl;
	return ;
}
