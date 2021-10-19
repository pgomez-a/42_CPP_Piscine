#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class	Bureaucrat
{
	public:
		Bureaucrat(std::string const & name, int grade);
		//Bureaucrat(Bureaucrat const & bureaucrat);
		~Bureaucrat(void);

		//Bureaucrat&	operator=(Bureaucrat const & bureaucrat);

		class	GradeTooHighException: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Grade is Too Hight");
				}
		};/

		class	GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Grade is Too Low");
				}
		};

		std::string const	getName(void) const;
		int			getGrade(void) const;
		void			decGrade(void);
		void			incGrade(void);

	private:
		//Bureaucrat(void);

		std::string const	_name;
		int			_grade;
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat const & bureaucrat);

#endif
