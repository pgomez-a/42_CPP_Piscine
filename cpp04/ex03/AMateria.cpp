#include "AMateria.hpp"

/**
 ** Default Protected Constructor
 **/

AMateria::AMateria(void)
{
	std::cout << "Default Constructor - Protected Access Control" << std::endl;
	this->type = "materia";
	return ;
}

/**
 ** Constructor that receives a type
 ** Copy Constructor
 **/

AMateria::AMateria(std::string const & type)
{	
	std::cout << "AMateria Constructor has been called to stablish type "
		<< type << std::endl;
	this->type = type;
	return ;
}

AMateria::AMateria(AMateria const & materia)
{
	std::cout << "AMateria Copy Constructor  has been called to stablish type "
		<< materia.getType() << std::endl;
	*this = materia;
	return ;
}

/**
 ** Default Desctructor
 **/

AMateria::~AMateria(void)
{
	std::cout << "AMateria Destructor has been called for type "
		<< this->type << std::endl;
	return ;
}

/**
 ** Assignation Operator Overload
 **/

AMateria&	AMateria::operator=(AMateria const & materia)
{
	this->type = materia.getType();
	return (*this);
}

/**
 ** Return the type of the Materia
 **/

std::string const &	AMateria::getType(void) const
{
	return (this->type);
}

/**
 ** Do an action depending on the Derived AMateria class
 **/

void			AMateria::use(ICharacter& target)
{
	std::cout << "You have to specify a Materia in order to do something to "
		<< target.getName() << std::endl;
	return ;
}
