#include "Fixed.hpp"

/**
 ** Default constructor ~ Canonical form
 ** Int / Float constructors
 ** Copy constructor ~ Canonical form
 ** Destructor for a Fixed object
 **/

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_fbits;
	return ;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << this->_fbits));
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

Fixed&		Fixed::operator=(Fixed const & fixed)
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

/**
 ** Only return the int part of the fixed point number
 **/

int	Fixed::toInt(void) const
{
	int	output;

	output = this->_value;
	output = output >> this->_fbits;
	return (output);
}

/**
 ** Return the fixed point number with the decimal part
 **/

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_fbits));
}

const int	Fixed::_fbits = 8;

/**
 ** Overload Ostream Operation ~ Output the Fixed Point Number on the stdout 
 **/

std::ostream&	operator<<(std::ostream& out, Fixed const & fixed)
{
	out << fixed.toFloat();
	return (out);
}
