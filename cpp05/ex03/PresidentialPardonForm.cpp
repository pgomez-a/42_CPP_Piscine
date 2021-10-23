#include "PresidentialPardonForm.hpp"

/**
 ** Default PresidentialPardon Constructor
 ** PresidentialPardon Constructor with the target
 ** Copy PresidentialPardon Constructor
 **/

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("PresidentialPardonForm", 25, 5), _target("Default")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :
	Form("PresidentialPardonForm", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & presidential) :
	Form("PresidentialPardonForm", 25, 5), _target(presidential.getTarget())
{
	return ;
}

/**
 ** PresidentialPardon Destructor
 **/

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

/**
 ** Assignation Operator Overload
 **/

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const & presidential)
{
	std::cout << "Does not make sense to assign "
		<< presidential.getName() << " to " << this->getName()
		<< std::endl;
	return (*this);
}

/**
 ** Return the target of a PresidentialPardon object
 **/

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

/**
 ** Tell that target has been pardoned
 **/

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getBoolSigned())
		throw Form::NotSignedException();
	if (executor.getGrade() > this->getExec())
		throw Form::GradeTooLowException();
	std::cout << this->_target
		<< " has been pardoned by Zafod Beeblebrox" << std::endl;
	return ;
}
