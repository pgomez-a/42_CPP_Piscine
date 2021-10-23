#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <iostream>

class	Intern
{
	public:
		Intern(void);
		Intern(Intern const & intern);
		~Intern(void);

		Intern&	operator=(Intern const & intern);

		Form*	makeForm(std::string const & name, std::string const & target);
};

#endif
