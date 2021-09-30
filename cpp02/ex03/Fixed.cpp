#include "Fixed.hpp"

/**
 ** Default constructor ~ Canonical form
 ** Int / Float constructors
 ** Copy constructor ~ Canonical form
 ** Destructor for a Fixed object
 **/

Fixed::Fixed(void) : _value(0)
{
	return ;
}

Fixed::Fixed(int const value)
{
	this->_value = value << this->_fbits;
	return ;
}

Fixed::Fixed(float const value)
{
	this->_value = roundf(value * (1 << this->_fbits));
	return ;
}

Fixed::Fixed(Fixed const & fixed)
{
	*this = fixed;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

/**
 ** Overload Assignation Operation ~ Canonical form
 **/

Fixed&	Fixed::operator=(Fixed const & fixed)
{
	this->_value = fixed.getRawBits();
	return (*this);
}

/**
 ** Comparison Operations: > < >= <= == !=
 **/

bool	Fixed::operator>(Fixed const & fixed) const
{
	if (this->_value > fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed const & fixed) const
{
	if (this->_value < fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const & fixed) const
{
	if (this->_value >= fixed.getRawBits())
		return (true);
	else
		return (false);
}


bool	Fixed::operator<=(Fixed const & fixed) const
{
	if (this->_value <= fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const & fixed) const
{
	if (this->_value == fixed.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const & fixed) const
{
	if (this->_value != fixed.getRawBits())
		return (true);
	else
		return (false);
}

/**
 ** Arithmetic Operations: + - * /
 **/

Fixed	Fixed::operator+(Fixed const & fixed) const
{
	float	value_one;
	float	value_two;
	float	output;

	value_one = this->toFloat();
	value_two = fixed.toFloat();
	output = value_one + value_two;
	return (Fixed(output));
}

Fixed	Fixed::operator-(Fixed const & fixed) const
{
	float	value_one;
	float	value_two;
	float	output;

	value_one = this->toFloat();
	value_two = fixed.toFloat();
	output = value_one - value_two;
	return (Fixed(output));
}

Fixed	Fixed::operator*(Fixed const & fixed) const
{
	float	value_one;
	float	value_two;
	float	output;

	value_one = this->toFloat();
	value_two = fixed.toFloat();
	output = value_one * value_two;
	return (Fixed(output));
}

Fixed	Fixed::operator/(Fixed const & fixed) const
{
	float	value_one;
	float	value_two;
	float	output;

	value_one = this->toFloat();
	value_two = fixed.toFloat();
	output = value_one / value_two;
	return (Fixed(output));
}

/**
 ** Increment / Decrement operators: ++a a++ --a a++
 **/

Fixed	Fixed::operator++(void)
{
	Fixed	pre_inc;
	int	value;

	value = this->_value;
	value = ++value;
	pre_inc.setRawBits(value);
	this->setRawBits(value);
	return (pre_inc);
}

Fixed	Fixed::operator++(int)
{
	Fixed	post_inc;
	int	value;

	value = this->_value;
	post_inc.setRawBits(value);
	value++;
	this->setRawBits(value);
	return (post_inc);
}

Fixed	Fixed::operator--(void)
{
	Fixed	pre_dec;
	int	value;

	value = this->_value;
	value = --value;
	pre_dec.setRawBits(value);
	this->setRawBits(value);
	return (pre_dec);
}

Fixed	Fixed::operator--(int)
{
	Fixed	post_dec;
	int	value;

	value = this->_value;
	post_dec.setRawBits(value);
	value--;
	this->setRawBits(value);
	return (post_dec);
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
	return ((double)this->_value / (double)(1 << this->_fbits));
}

/**
 ** Return the min/max fixed point of the given two
 **/

Fixed&		Fixed::min(Fixed& fixedOne, Fixed& fixedTwo)
{
	if (fixedTwo < fixedOne)
		return (fixedTwo);
	else
		return (fixedOne);
}

const Fixed&	Fixed::min(Fixed const & fixedOne, Fixed const & fixedTwo)
{
	if (fixedTwo < fixedOne)
		return (fixedTwo);
	else
		return (fixedOne);
}

Fixed&		Fixed::max(Fixed& fixedOne, Fixed& fixedTwo)
{
	if (fixedTwo > fixedOne)
		return (fixedTwo);
	else
		return (fixedOne);
}


const Fixed&	Fixed::max(Fixed const & fixedOne, Fixed const & fixedTwo)
{
	if (fixedTwo > fixedOne)
		return (fixedTwo);
	else
		return (fixedOne);
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
