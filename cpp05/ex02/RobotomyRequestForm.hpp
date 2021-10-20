#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <iostream>

class	RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string const & roboto);
		RobotomyRequestForm(RobotomyRequestForm const & roboto);
		~RobotomyRequestForm(void);

		RobotomyRequestForm&	operator=(RobotomyRequestForm const & roboto);

		std::string	getTarget(void) const;
		void		makeDrillingNoises(void);

	private:
		RobotomyRequestForm(void);

		std::string const	_target;

};

#endif
