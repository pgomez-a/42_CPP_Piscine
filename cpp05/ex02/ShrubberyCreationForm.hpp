#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>
# include <iostream>

class	ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & shrubbery);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const & shrubbery);

		std::string	getTarget(void) const;
		void		execute(Bureaucrat const & executor) const;

	private:
		ShrubberyCreationForm(void);

		std::string const	_target;
};

#endif
