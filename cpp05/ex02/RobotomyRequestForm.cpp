#include "RobotomyRequestForm.hpp"

/**
 ** Default Roboto Constructor
 ** Roboto Constructor with the target of the Operarion
 ** Copy Roboto Constructor
 **/

RobotomyRequestForm::RobotomyRequestForm(void) : _target("Default")
{
	std::cout << "Roboto Default Constructor - Private Access Control" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : _target(target)
{
	std::cout << this->_target
		<< " Roboto Constructor called" << std::endl;
	makeDrillingNoises();
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & roboto) : _target(roboto.getTarget())
{
	std::cout << this->_target
		<< " Roboto Copy Constructor called" << std::endl;
	this->makeDrillingNoises();
	return ;
}

/**
 ** Default Destructor
 **/

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << this->_target
		<< " Roboto Destructor called" << std::endl;
	return ; 
}

/**
 ** Assingation Operator Overload
 **/

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const & roboto)
{
	std::cout << "Does not make sense to assign Roboto "
		<< roboto.getTarget() << std::endl;
	return (*this);
}

/**
 ** Return the target of a Roboto Object
 **/

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

/**
 ** Tell if target has been robotomized successfully 50% of the time
 **/

void		RobotomyRequestForm::makeDrillingNoises(void)
{
	std::cout << this->_target
		<< " has been robotomized 50% of the time" << std::endl;
	return ;
}
