#include "Bureaucrat.hpp"

/**
 ** Bureaucrat Constructor
 **/

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name)
{
	std::cout << "Bureaucraut Constructor called" << std::endl;
	if (grade < 1)
		throw "high";//Bureaucraut::GradeTooHighException;
	else if (grade > 150)
		throw "low";//Bureaucraut::GradeTooLowException;
	else
		this->_grade = grade;
	return ;
}

/**
 ** Bureaucrat Destructor
 **/

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucraut Destructor called" << std::endl;
	return ;
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
		throw "low";//Bureaucraut::GradeTooLowException;
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
		throw "high";//Bureaucraut::GradeTooHighException;
	else
		this->_grade -= 1;
	return ;
}

/**
 ** Exception Class thrown when the Grade is too high
 **/

const char*	Bureaucrat::GradeTooHighException::what(void) const throw(void)
{
	return ("Grade is Too Hight");
}

/**
 ** Exception Class thrown when the Grade is too low
 **/

const char*	Bureaucrat::GradeTooHighException::what(void) const throw(void)
{
	return ("Grade is Too Hight");
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
