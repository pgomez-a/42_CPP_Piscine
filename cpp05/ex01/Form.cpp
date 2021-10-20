#include "Form.hpp"

/**
 ** Default Form Constructor
 ** Form Constructor with Name parameter
 ** Copy Form Constructor
 **/

Form::Form(void) : _name("Default"), _sign_grade(50), _exec_grade(50)
{
	std::cout << "Form Default Constructor - Private Access Control" << std::endl;
	this->_signed = false;
	return ;
}

Form::Form(std::string const & name, int sign, int exec) : _name(name), _sign_grade(sign), _exec_grade(exec)
{
	std::cout << this->_name
		<< " Form Constructor called" << std::endl;
	this->_signed = false;
	if (_sign_grade < 1 || _exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (_sign_grade > 150 || _exec_grade > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const & form) : _name(form.getName()), _sign_grade(form.getSign()), _exec_grade(form.getExec())
{
	std::cout << this->_name
		<< " Form Copy Constructror called" << std::endl;
	if (_sign_grade < 1 || _exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (_sign_grade > 150 || _exec_grade > 150)
		throw Form::GradeTooLowException();
	*this = form;
	return ;
}

/**
 ** Default Destructor
 **/

Form::~Form(void)
{
	std::cout << this->_name
		<< " Form Destructor called" << std::endl;
	return ;
}

/**
 ** Assignation Operator Overload
 **/

Form&	Form::operator=(Form const & form)
{
	this->_signed = form.getBoolSigned();
	return (*this);
}

/**
 ** Return the Name | Sign | Grades of a Form Object
 **/

std::string const	Form::getName(void) const
{
	return (this->_name);
}

bool			Form::getBoolSigned(void) const
{
	return (this->_signed);
}

int			Form::getSign(void) const
{
	return (this->_sign_grade);
}

int			Form::getExec(void) const
{
	return (this->_exec_grade);
}

/**
 ** Makes the Form signed if the bureaucrat's grade is high enough
 **/

void	Form::beSigned(Bureaucrat const & bureaucrat)
{
	int	bur_grade;

	if (this->_signed == false)
	{
		bur_grade = bureaucrat.getGrade();
		if (bur_grade <= this->_sign_grade)
			this->_signed = true;
		else
			throw Form::GradeTooLowException();
	}
	return ;
}

/**
 ** Exception Class thrown when one Grade is too High
 **/

const char*	Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is Too High");
}

/**
 ** Exception Class thrown when one Grade is too Low
 **/

const char*	Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is Too Low");
}

/**
 ** Output Stream Overload Operator
 **/

std::ostream&	operator<<(std::ostream& out, Form const & form)
{
	out << form.getName() << ", Form Signed: " << form.getBoolSigned()
		<< ", Signed Grade: " << form.getSign()
		<< ", Exec Grade: " << form.getExec();
	return (out);
}
