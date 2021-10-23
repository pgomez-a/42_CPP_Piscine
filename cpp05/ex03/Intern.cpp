#include "Intern.hpp"

/**
 ** Default Constructor
 ** Default Copy Constructor
 **/

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const & intern)
{
	std::cout << "Tip: You don't need to copy an Intern."
		<< " There aren't attributes to assign" << std::endl;
	(void)intern;
	return ;
}

/**
 ** Default Destructor
 **/

Intern::~Intern(void)
{
	return ;
}

/**
 ** Assignation Operator Overload
 **/

Intern&	Intern::operator=(Intern const & intern)
{
	std::cout << "Does not make sense to assign intern" << std::endl;
	(void)intern;
	return (*this);
}

/**
 ** Create a Form with the given name and the given target
 **/

Form*	Intern::makeForm(std::string const & name, std::string const & target)
{
	std::string	action[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	std::string	form_type;
	int		count;
	int		output;
	Form*		concrete[3] = {new ShrubberyCreationForm(target),
					new RobotomyRequestForm(target),
					new PresidentialPardonForm(target)};

	count = 0;
	while (name[count])
		form_type += std::tolower(name[count++]);
	count = 0;
	while (count < 3)
	{
		if (action[count] == form_type)
		{
			output = count;
			count++;
			while (count < 3)
				delete concrete[count++];
			return (concrete[output]);
		}
		else
			delete concrete[count];
		count++;
	}
	std::cout << "Intern cannot create " << name << " Form" << std::endl;
	return (nullptr);
}
