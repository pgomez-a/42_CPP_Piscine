#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>
# include <iostream>

class	ShruberryCreationForm : public Form
{
	public:
		ShruberryCreationForm(std::string const & target);
		ShruberryCreationForm(ShruberryCreationForm const & shruberry);
		~ShruberryCreationForm(void);

		ShruberryCreationForm&	operator=(ShruberryCreationForm const & shruberry);

		std::string	getTarget(void) const;
		void		drawTrees(void);

	private:
		ShruberryCreationForm(void);

		std::string const	_target;
		std::ofstream		_output_file;
};

#endif
