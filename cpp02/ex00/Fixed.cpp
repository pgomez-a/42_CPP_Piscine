#include "Fixed.hpp"

/**
 ** Default constructor ~ Canonical form
 ** Copy constructor ~ Canonical form
 ** Destructor for a Fixed object
 **/

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const & fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/**
 ** Overload Assignation Operation ~ Canonical form
 **/

Fixed&	Fixed::operator=(Fixed const & fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = fixed.getRawBits();
	return (*this);
}

/**
 ** Get the value of the Fixed Point Number as it was an int
 **/

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

/**
 ** Set the value of the Fixed Point Number as it was an int
 **/

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	return ;
}

const int	Fixed::_fbits = 8;
