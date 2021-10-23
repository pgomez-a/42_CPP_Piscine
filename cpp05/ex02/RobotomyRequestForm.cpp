#include "RobotomyRequestForm.hpp"

/**
 ** Default Roboto Constructor
 ** Roboto Constructor with the target of the Operarion
 ** Copy Roboto Constructor
 **/

RobotomyRequestForm::RobotomyRequestForm(void) :
	Form("RobotomyRequestForm", 72, 45), _target("Default")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :
	Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & roboto) :
	Form("RobotomyRequestForm", 72, 45), _target(roboto.getTarget())
{
	return ;
}

/**
 ** Default Destructor
 **/

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ; 
}

/**
 ** Assingation Operator Overload
 **/

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const & roboto)
{
	std::cout << "Does not make sense to assign "
		<< roboto.getName() << " to " << this->getName()
		<< std::endl;
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

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getBoolSigned())
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getExec())
		throw Form::GradeTooLowException();
	std::srand(std::time(nullptr));
	std::cout << "BEEP BEEP BEEP" << std::endl;
	if (std::rand() % 100 <= 50)
		std::cout << "Failure while robotomizing " << this->_target << std::endl;
	else
		std::cout << this->_target
			<< " has been robotomized successfully 50% of the time" << std::endl;
	return ;
}
