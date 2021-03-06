/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:15:37 by pgomez-a          #+#    #+#             */
/*   Updated: 2021/10/25 17:17:18 by pgomez-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/**
 ** Default Bureaucrat Constructor
 ** Bureaucrat Constructor with Name and Grade parameters
 ** Copy Bureaucrat Constructor
 **/

Bureaucrat::Bureaucrat(void) : _name("Default")
{
	this->_grade = 50;
	return ;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureaucrat) : _name(bureaucrat.getName())
{
	*this = bureaucrat;
	return ;
}

/**
 ** Bureaucrat Destructor
 **/

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

/**
 ** Assignation Operator Overload
 **/

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & bureaucrat)
{
	if (this != &bureaucrat)
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
	this->_grade -= 1;
	return ;
}

/**
 ** Make a Bureaucrat sign the given Form
 **/

void		Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs "
			<< form.getName() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << this->_name << " cannot sign "
			<< form.getName() << " because " 
			<< e.what() << std::endl;;
	}
	return ;
}

/**
 ** Make a Bureaucrat sign the given Form
 **/

void		Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes "
			<< form.getName() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << this->_name << " cannot execute "
			<< form.getName() << " because "
			<< e.what() << std::endl;
	}
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
