#include "Fixed.hpp"

/**
 ** Default constructor ~ Canonical form
 **/

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

/**
 ** Input constructor: Fixed receives an integer number
 **/

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_fbits;
	return ;
}

/**
 ** Float constructor: Fixed receives a floating point number
 **/

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << this->_fbits));
	return ;
}

/**
 ** Copy constructor ~ Canonical form
 **/

Fixed::Fixed(Fixed const & fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return ;
}

/**
 ** Destructor for a Fixed object
 **/

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/**
 ** Assignation Operation ~ Canonical form
 **/

Fixed&	Fixed::operator=(Fixed const & fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = fixed.getRawBits();
	return *this;
}

/**
 ** Return the value of the fixed point number without
 ** as it was only an integer
 **/

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

/**
 ** Set the value of the fixed point number as it was
 ** only an integer
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
	return ((double)this->_value / (double)(1 << this->_fbits));
}

/**
 ** Position of the binary point for the fixed point number
 **/

const int	Fixed::_fbits = 8;

/**
 ** Output the value of the fixed point number
 **/

std::ostream&	operator<<(std::ostream& out, Fixed const & fixed)
{
	out << fixed.toFloat();
	return (out);
}
