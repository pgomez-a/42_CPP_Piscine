#include "Ice.hpp"

/**
 ** Default Constructor
 **/

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice Default Constructor has been called" << std::endl;
	return ;
}

Ice::Ice(Ice const & ice) : AMateria("ice")
{
	std::cout << ice.getType() << " Copy Constructor has been called" << std::endl;
	return ;
}

/**
 ** Default Destructor
 **/

Ice::~Ice(void)
{
	std::cout << "Ice Destructor has been called" << std::endl;
	return ;
}

/**
 ** Assignation Operator Overload
 **/

Ice&	Ice::operator=(Ice const & ice)
{
	(void)ice;
	return (*this);
}

/**
 ** Return a new instrance of the real Materia's type
 **/

AMateria*	Ice::clone(void) const
{
	AMateria*	ice = new Ice();

	return (ice);
}

/**
 ** Specific function for Ice Class
 **/

void		Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "
		<< target.getName() << " *" << std::endl;
	return ;
}
