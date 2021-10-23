#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <iostream>

class	PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & presidential);
		~PresidentialPardonForm(void);

		PresidentialPardonForm&	operator=(PresidentialPardonForm const & presidential);

		std::string	getTarget(void) const;
		void		execute(Bureaucrat const & executor) const;

	private:
		PresidentialPardonForm(void);

		std::string const	_target;
};

#endif
