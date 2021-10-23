#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class	Bureaucrat;

class	Form
{
	public:
		Form(std::string const & name, int sign, int exec);
		Form(Form const & form);
		virtual ~Form(void);

		Form&	operator=(Form const & form);

		std::string const	getName(void) const;
		bool			getBoolSigned(void) const;
		int			getSign(void) const;
		int			getExec(void) const;

		void		beSigned(Bureaucrat const & bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;

		class	GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class	AlreadySignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class	NotSignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};

	private:
		Form(void);

		std::string const	_name;
		bool			_signed;
		int const		_sign_grade;
		int const		_exec_grade;
};

std::ostream&	operator<<(std::ostream& out, Form const & form);

#endif
