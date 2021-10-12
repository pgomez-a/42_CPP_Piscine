#include "WrongCat.hpp"

/**
 ** Default Constructor
 ** Copy Constructor ~ Creates a WrongCat object
 **/

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "Maybe it's a WrongCat what has just bornt!" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & cat)
{
	std::cout << "Jeje, WrongCat has been copied :/" << std::endl;
	*this = cat;
	return ;
}

/**
 ** Default Constructor
 **/

WrongCat::~WrongCat(void)
{
	std::cout << "Yeahhh!! " << this->_type
		<< " has leaved this place..." << std::endl;
	return ;
}

/**
 ** Assignation Operator Overload
 **/

WrongCat&	WrongCat::operator=(WrongCat const & cat)
{
	this->_type = cat.getType();
	return (*this);
}
