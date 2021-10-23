#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"
# include <iostream>

class	Form;

class	Bureaucrat
{
	public:
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(Bureaucrat const & bureaucrat);
		~Bureaucrat(void);

		Bureaucrat&	operator=(Bureaucrat const & bureaucrat);

		std::string const	getName(void) const;
		int			getGrade(void) const;
		void			decGrade(void);
		void			incGrade(void);

		void	signForm(Form& form);
		void	executeForm(Form const & form);

		class	GradeTooHighException: public std::exception
		{
			public:
				const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

	private:
		Bureaucrat(void);

		std::string const	_name;
		int			_grade;
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat const & bureaucrat);

#endif
