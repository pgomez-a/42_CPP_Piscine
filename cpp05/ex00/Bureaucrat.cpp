#include "Bureaucrat.hpp"

/**
 ** Default Bureaucrat Constructor
 ** Bureaucrat Constructor with Name and Grade parameters
 ** Copy Bureaucrat Constructor
 **/

Bureaucrat::Bureaucrat(void) : _name("Default")
{
	std::cout << "Bureaucrat Default Constructor - Private Access Control" << std::endl;
	this->_grade = 50;
	return ;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name)
{
	std::cout << this->_name
		<< " Bureaucraut Constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureaucrat) : _name(bureaucrat.getName())
{
	std::cout << this->_name <<
		" Bureaucrat Copy Constructor called" << std::endl;
	*this = bureaucrat;
	return ;
}

/**
 ** Bureaucrat Destructor
 **/

Bureaucrat::~Bureaucrat(void)
{
	std::cout << this->_name
		<< " Bureaucraut Destructor called" << std::endl;
	return ;
}

/**
 ** Assignation Operator Overload
 **/

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & bureaucrat)
{
	this->_grade = bureaucrat.getGrade();
	return (*this);
}

/**
 ** Return the name of the Bureaucrat object
 **/

std::string const	Bureaucrat::getName(void) const
{
	return (this->_name);
}

/**
 ** Return the grade of the Bureaucrat object
 **/

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

/**
 ** Decrement the grade or throw an exception
 **/

void			Bureaucrat::decGrade(void)
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
	return ;
}

/**
 ** Increment the grade or throw an exception
 **/

void			Bureaucrat::incGrade(void)
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
	return ;
}

/**
 ** Exception Class thrown when the Grade is too high
 **/

const char*	Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is Too Hight");
}

/**
 ** Exception Class thrown when the Grade is too low
 **/

const char*	Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is Too Low");
}

/**
 ** Output Stream Overload Operator
 **/

std::ostream&	operator<<(std::ostream& out, Bureaucrat const & bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade "
		<< bureaucrat.getGrade();
	return (out);
}
